import QtQuick

// This whole file is QML: a declarative description of the scene, not
// imperative C++ code. Properties like "color" or "x" get re-evaluated
// automatically whenever something they depend on changes.
Rectangle {
    id: root
    width: 600
    height: 500
    color: "#1e1e2e"

    // Our "data": a plain JS array of {x, y, label} objects.
    // In a real app this would come from C++ (a QAbstractListModel or a
    // QVariantList exposed as a context property) instead of being
    // hardcoded here.
    property var pointsData: [
        { x: 100, y: 100, label: "A" },
        { x: 300, y: 200, label: "B" },
        { x: 450, y: 350, label: "C" },
        { x: 150, y: 400, label: "D" }
    ]

    // Faint reference grid, drawn once with the Canvas 2D API
    Canvas {
        id: grid
        anchors.fill: parent
        onPaint: {
            var ctx = getContext("2d")
            ctx.strokeStyle = "#333344"
            ctx.lineWidth = 1
            for (var gx = 0; gx < width; gx += 50) {
                ctx.beginPath()
                ctx.moveTo(gx, 0)
                ctx.lineTo(gx, height)
                ctx.stroke()
            }
            for (var gy = 0; gy < height; gy += 50) {
                ctx.beginPath()
                ctx.moveTo(0, gy)
                ctx.lineTo(width, gy)
                ctx.stroke()
            }
        }
    }

    // One delegate instance is created per entry in pointsData
    Repeater {
        model: root.pointsData.length

        delegate: Rectangle {
            id: point
            width: 24
            height: 24
            radius: 12
            color: dragArea.pressed ? "#f38ba8" : "#a6e3a1"
            border.color: "white"
            border.width: 1

            x: root.pointsData[index].x - width / 2
            y: root.pointsData[index].y - height / 2

            // This is the "smooth animation" part: any time x, y, or color
            // change, QML tweens between old and new values automatically
            // instead of jumping instantly.
            Behavior on x { NumberAnimation { duration: 250; easing.type: Easing.OutCubic } }
            Behavior on y { NumberAnimation { duration: 250; easing.type: Easing.OutCubic } }
            Behavior on color { ColorAnimation { duration: 150 } }

            Text {
                anchors.centerIn: parent
                text: root.pointsData[index].label
                color: "#1e1e2e"
                font.bold: true
            }

            MouseArea {
                id: dragArea
                anchors.fill: parent
                drag.target: point
                drag.axis: Drag.XAndYAxis
                onReleased: {
                    // Snap to the nearest 50px grid intersection.
                    // Because x/y have Behaviors attached above, this
                    // "jump" is actually animated, not instant.
                    point.x = Math.round(point.x / 50) * 50
                    point.y = Math.round(point.y / 50) * 50
                }
            }
        }
    }

    // Called from C++ via QMetaObject::invokeMethod(rootObject, "addRandomPoint")
    function addRandomPoint() {
        var newPoint = {
            x: Math.random() * (width - 40) + 20,
            y: Math.random() * (height - 40) + 20,
            label: String.fromCharCode(65 + pointsData.length)
        }
        // Reassigning (not push()-ing) so QML notices the array changed
        // and the Repeater picks up the new item.
        pointsData = pointsData.concat([newPoint])
    }
}
