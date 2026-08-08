// Qt6 Widgets Playground
// A single window with tabs demonstrating a wide range of Qt widgets.
// Poke at the code, comment things out, change values, and rebuild to see
// what happens. Each section below is roughly self-contained.

#include <QApplication>
#include <QMainWindow>
#include <QTabWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFormLayout>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLineEdit>
#include <QTextEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QComboBox>
#include <QSlider>
#include <QProgressBar>
#include <QListWidget>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QMessageBox>
#include <QInputDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QDateEdit>
#include <QDial>
#include <QGroupBox>
#include <QSplitter>
#include <QToolTip>
#include <QDate>

// ---------------------------------------------------------------------------
// Tab 1: Buttons, checkboxes, radio buttons, group boxes
// ---------------------------------------------------------------------------
QWidget *makeButtonsTab()
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QLabel *title = new QLabel("<b>Buttons &amp; selection widgets</b>");
    layout->addWidget(title);

    // Plain push button with a click counter
    QPushButton *clickButton = new QPushButton("Click me");
    QLabel *clickLabel = new QLabel("Clicked 0 times");
    int *clickCount = new int(0); // leaked on purpose for playground simplicity
    QObject::connect(clickButton, &QPushButton::clicked, [clickLabel, clickCount]() {
        (*clickCount)++;
        clickLabel->setText(QString("Clicked %1 times").arg(*clickCount));
    });
    layout->addWidget(clickButton);
    layout->addWidget(clickLabel);

    // Checkboxes
    QGroupBox *checkBox = new QGroupBox("Checkboxes (independent toggles)");
    QVBoxLayout *checkLayout = new QVBoxLayout(checkBox);
    QCheckBox *c1 = new QCheckBox("Option A");
    QCheckBox *c2 = new QCheckBox("Option B");
    c2->setChecked(true);
    checkLayout->addWidget(c1);
    checkLayout->addWidget(c2);
    layout->addWidget(checkBox);

    // Radio buttons (mutually exclusive within a QButtonGroup)
    QGroupBox *radioBox = new QGroupBox("Radio buttons (pick one)");
    QVBoxLayout *radioLayout = new QVBoxLayout(radioBox);
    QRadioButton *r1 = new QRadioButton("Small");
    QRadioButton *r2 = new QRadioButton("Medium");
    QRadioButton *r3 = new QRadioButton("Large");
    r2->setChecked(true);
    QButtonGroup *group = new QButtonGroup(radioBox);
    group->addButton(r1);
    group->addButton(r2);
    group->addButton(r3);
    radioLayout->addWidget(r1);
    radioLayout->addWidget(r2);
    radioLayout->addWidget(r3);
    layout->addWidget(radioBox);

    layout->addStretch();
    return page;
}

// ---------------------------------------------------------------------------
// Tab 2: Text/number input widgets, live-linked together
// ---------------------------------------------------------------------------
QWidget *makeInputTab()
{
    QWidget *page = new QWidget;
    QFormLayout *layout = new QFormLayout(page);

    QLineEdit *nameEdit = new QLineEdit;
    nameEdit->setPlaceholderText("Type something...");
    layout->addRow("Line edit:", nameEdit);

    QLabel *echoLabel = new QLabel("(nothing typed yet)");
    QObject::connect(nameEdit, &QLineEdit::textChanged, [echoLabel](const QString &text) {
        echoLabel->setText(text.isEmpty() ? "(nothing typed yet)" : "You typed: " + text);
    });
    layout->addRow("Live echo:", echoLabel);

    QSpinBox *spin = new QSpinBox;
    spin->setRange(0, 100);
    spin->setValue(50);
    layout->addRow("Spin box (int):", spin);

    QDoubleSpinBox *dspin = new QDoubleSpinBox;
    dspin->setRange(0.0, 10.0);
    dspin->setSingleStep(0.1);
    dspin->setValue(3.14);
    layout->addRow("Double spin box:", dspin);

    QComboBox *combo = new QComboBox;
    combo->addItems({"Arch", "Debian", "Fedora", "NixOS"});
    layout->addRow("Combo box:", combo);

    QDateEdit *dateEdit = new QDateEdit(QDate::currentDate());
    dateEdit->setCalendarPopup(true);
    layout->addRow("Date edit:", dateEdit);

    // Slider linked to a spin box and a progress bar simultaneously
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(50);
    QProgressBar *bar = new QProgressBar;
    bar->setRange(0, 100);
    bar->setValue(50);
    QObject::connect(slider, &QSlider::valueChanged, bar, &QProgressBar::setValue);
    QObject::connect(slider, &QSlider::valueChanged, spin, &QSpinBox::setValue);
    QObject::connect(spin, QOverload<int>::of(&QSpinBox::valueChanged), slider, &QSlider::setValue);
    layout->addRow("Slider (linked to spin box above):", slider);
    layout->addRow("Progress bar (linked to slider):", bar);

    QDial *dial = new QDial;
    dial->setRange(0, 100);
    dial->setValue(50);
    QObject::connect(dial, &QDial::valueChanged, slider, &QSlider::setValue);
    QObject::connect(slider, &QSlider::valueChanged, dial, &QDial::setValue);
    layout->addRow("Dial (also linked to slider):", dial);

    return page;
}

// ---------------------------------------------------------------------------
// Tab 3: Lists, text areas, drag-and-drop-ish playground
// ---------------------------------------------------------------------------
QWidget *makeListsTab()
{
    QWidget *page = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout(page);

    QVBoxLayout *leftCol = new QVBoxLayout;
    QLabel *listLabel = new QLabel("<b>List widget</b> (add items below)");
    QListWidget *listWidget = new QListWidget;
    listWidget->addItems({"First item", "Second item", "Third item"});

    QHBoxLayout *addRow = new QHBoxLayout;
    QLineEdit *newItemEdit = new QLineEdit;
    newItemEdit->setPlaceholderText("New item text");
    QPushButton *addButton = new QPushButton("Add");
    QPushButton *removeButton = new QPushButton("Remove selected");
    QObject::connect(addButton, &QPushButton::clicked, [listWidget, newItemEdit]() {
        if (!newItemEdit->text().isEmpty()) {
            listWidget->addItem(newItemEdit->text());
            newItemEdit->clear();
        }
    });
    QObject::connect(removeButton, &QPushButton::clicked, [listWidget]() {
        qDeleteAll(listWidget->selectedItems());
    });
    addRow->addWidget(newItemEdit);
    addRow->addWidget(addButton);

    leftCol->addWidget(listLabel);
    leftCol->addWidget(listWidget);
    leftCol->addLayout(addRow);
    leftCol->addWidget(removeButton);

    QVBoxLayout *rightCol = new QVBoxLayout;
    rightCol->addWidget(new QLabel("<b>Text edit</b> (multi-line, rich text capable)"));
    QTextEdit *textEdit = new QTextEdit;
    textEdit->setPlainText("Type multiple lines here.\nTry QTextEdit::setHtml() in code\nto render rich text instead.");
    rightCol->addWidget(textEdit);

    layout->addLayout(leftCol);
    layout->addLayout(rightCol);
    return page;
}

// ---------------------------------------------------------------------------
// Tab 4: Dialogs (message box, input dialog, color picker, file picker)
// ---------------------------------------------------------------------------
QWidget *makeDialogsTab()
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    layout->addWidget(new QLabel("<b>Common dialog boxes</b> — click each to try it"));

    QPushButton *infoBtn = new QPushButton("Show info message box");
    QObject::connect(infoBtn, &QPushButton::clicked, [page]() {
        QMessageBox::information(page, "Info", "This is a QMessageBox::information popup.");
    });

    QPushButton *warnBtn = new QPushButton("Show warning message box");
    QObject::connect(warnBtn, &QPushButton::clicked, [page]() {
        QMessageBox::warning(page, "Warning", "This is a QMessageBox::warning popup.");
    });

    QPushButton *questionBtn = new QPushButton("Show yes/no question");
    QLabel *questionResult = new QLabel("(no answer yet)");
    QObject::connect(questionBtn, &QPushButton::clicked, [page, questionResult]() {
        auto reply = QMessageBox::question(page, "Question", "Do you like Qt so far?");
        questionResult->setText(reply == QMessageBox::Yes ? "You said Yes" : "You said No");
    });

    QPushButton *inputBtn = new QPushButton("Show text input dialog");
    QLabel *inputResult = new QLabel("(no input yet)");
    QObject::connect(inputBtn, &QPushButton::clicked, [page, inputResult]() {
        bool ok = false;
        QString text = QInputDialog::getText(page, "Input", "Enter something:", QLineEdit::Normal, "", &ok);
        if (ok) inputResult->setText("You entered: " + text);
    });

    QPushButton *colorBtn = new QPushButton("Show color picker");
    QLabel *colorResult = new QLabel("(no color chosen yet)");
    QObject::connect(colorBtn, &QPushButton::clicked, [page, colorResult]() {
        QColor color = QColorDialog::getColor(Qt::white, page, "Pick a color");
        if (color.isValid()) {
            colorResult->setText("Chosen: " + color.name());
            colorResult->setStyleSheet("background-color: " + color.name());
        }
    });

    QPushButton *fileBtn = new QPushButton("Show file open dialog");
    QLabel *fileResult = new QLabel("(no file chosen yet)");
    QObject::connect(fileBtn, &QPushButton::clicked, [page, fileResult]() {
        QString path = QFileDialog::getOpenFileName(page, "Choose a file");
        if (!path.isEmpty()) fileResult->setText("Chosen: " + path);
    });

    layout->addWidget(infoBtn);
    layout->addWidget(warnBtn);
    layout->addWidget(questionBtn);
    layout->addWidget(inputBtn);
    layout->addWidget(colorBtn);
    layout->addWidget(fileBtn);

    layout->addWidget(questionResult);
    layout->addWidget(inputResult);
    layout->addWidget(colorResult);
    layout->addWidget(fileResult);
    layout->addStretch();
    return page;
}

// ---------------------------------------------------------------------------
// Tab 5: Layout playground — splitter + grid, mostly to look at the code
// ---------------------------------------------------------------------------
QWidget *makeLayoutsTab()
{
    QWidget *page = new QWidget;
    QVBoxLayout *outer = new QVBoxLayout(page);
    outer->addWidget(new QLabel("<b>Splitter</b> — drag the divider below"));

    QSplitter *splitter = new QSplitter(Qt::Horizontal);
    QTextEdit *left = new QTextEdit("Left pane");
    QTextEdit *right = new QTextEdit("Right pane");
    splitter->addWidget(left);
    splitter->addWidget(right);
    outer->addWidget(splitter);

    outer->addWidget(new QLabel("<b>Grid layout</b> — buttons placed by row/column"));
    QWidget *gridWidget = new QWidget;
    QGridLayout *grid = new QGridLayout(gridWidget);
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            QPushButton *b = new QPushButton(QString("(%1,%2)").arg(row).arg(col));
            grid->addWidget(b, row, col);
        }
    }
    outer->addWidget(gridWidget);

    return page;
}

// ---------------------------------------------------------------------------
// main() — assembles everything into a QMainWindow with a menu bar,
// status bar, and tabbed central widget.
// ---------------------------------------------------------------------------
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Qt6 Widgets Playground");
    window.resize(800, 600);

    // --- Menu bar ---
    QMenu *fileMenu = window.menuBar()->addMenu("&File");
    QAction *aboutAction = fileMenu->addAction("&About");
    QAction *quitAction = fileMenu->addAction("&Quit");
    QObject::connect(aboutAction, &QAction::triggered, [&window]() {
        QMessageBox::about(&window, "About", "Qt6 Widgets Playground.\nEdit main.cpp and rebuild to experiment.");
    });
    QObject::connect(quitAction, &QAction::triggered, &QApplication::quit);

    QMenu *helpMenu = window.menuBar()->addMenu("&Help");
    helpMenu->addAction("Tooltip demo")->setToolTip("Hover items to see tooltips like this one");

    // --- Status bar ---
    window.statusBar()->showMessage("Ready. Try each tab above.");

    // --- Tabs ---
    QTabWidget *tabs = new QTabWidget;
    tabs->addTab(makeButtonsTab(), "Buttons");
    tabs->addTab(makeInputTab(), "Inputs");
    tabs->addTab(makeListsTab(), "Lists & Text");
    tabs->addTab(makeDialogsTab(), "Dialogs");
    tabs->addTab(makeLayoutsTab(), "Layouts");

    window.setCentralWidget(tabs);
    window.show();

    return app.exec();
}