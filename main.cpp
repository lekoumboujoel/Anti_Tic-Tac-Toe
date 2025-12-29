// main.cpp
#include <QApplication>
#include "gamewidget.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GameWidget w;
    w.show();
    return app.exec();
}
