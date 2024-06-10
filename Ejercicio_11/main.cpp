#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Crear un objeto QLabel
    QLabel label("Hola, soy un QLabel");
    label.show();

    // Crear un objeto QWidget
    QWidget widget;
    widget.setWindowTitle("Hola, soy un QWidget");
    widget.show();

    // Crear un objeto QPushButton
    QPushButton button("Hola, soy un QPushButton");
    button.show();

    // Crear un objeto QLineEdit
    QLineEdit lineEdit("Hola, soy un QLineEdit");
    lineEdit.show();

    return a.exec();
}
