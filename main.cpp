#include <iostream>
#include "src/ConfigUI.h"
#include <QMainWindow>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow mainWindow = QMainWindow();
    MyWidgetsForConfig ConfigUI = MyWidgetsForConfig();
    ConfigUI.show();
    return QApplication::exec();
}
