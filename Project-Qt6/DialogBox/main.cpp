#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QDialog dialog;
    dialog.setWindowTitle("My Dialog");
    dialog.resize(300, 150);

    QVBoxLayout *layout = new QVBoxLayout(&dialog);

    QLabel *label = new QLabel("Hello, this is a dialog box!");
    layout->addWidget(label);

    QPushButton *okButton = new QPushButton("OK");
    layout->addWidget(okButton);

    QObject::connect(okButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    dialog.exec(); // shows dialog modally

    return 0;
}