#include "MainWindow.h"
#include <QApplication>
#include <crow/crow.h>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}