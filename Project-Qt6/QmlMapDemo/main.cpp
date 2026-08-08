// QML + Qt Widgets hybrid demo.
// The window itself is a normal QMainWindow (Widgets), but the map canvas
// in the middle is a QML scene hosted inside a QQuickWidget. The side panel
// is plain Widgets code that calls into the QML side via
// QMetaObject::invokeMethod().

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QQuickWidget>
#include <QQuickItem>
#include <QMetaObject>
#include <QUrl>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("QML X,Y Map Demo");
    window.resize(850, 550);

    QWidget *central = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout(central);

    // --- QML canvas, hosted inside the Widgets app ---
    QQuickWidget *quickWidget = new QQuickWidget;
    quickWidget->setSource(QUrl::fromLocalFile(QML_SOURCE_DIR "/MapCanvas.qml"));
    quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    layout->addWidget(quickWidget, /*stretch=*/1);

    // --- Ordinary Widgets side panel controlling the QML side ---
    QWidget *sidePanel = new QWidget;
    QVBoxLayout *sideLayout = new QVBoxLayout(sidePanel);
    sideLayout->addWidget(new QLabel("<b>Controls</b>"));

    QPushButton *addButton = new QPushButton("Add random point");
    QObject::connect(addButton, &QPushButton::clicked, [quickWidget]() {
        // Calls the addRandomPoint() JS function defined in MapCanvas.qml
        QMetaObject::invokeMethod(quickWidget->rootObject(), "addRandomPoint");
    });
    sideLayout->addWidget(addButton);

    QLabel *hint = new QLabel(
        "Drag any point around.\n\n"
        "On release it snaps to the\n"
        "nearest 50px grid line, animated\n"
        "smoothly via QML's Behavior.");
    hint->setWordWrap(true);
    sideLayout->addWidget(hint);
    sideLayout->addStretch();

    sidePanel->setFixedWidth(200);
    layout->addWidget(sidePanel);

    window.setCentralWidget(central);
    window.show();

    return app.exec();
}