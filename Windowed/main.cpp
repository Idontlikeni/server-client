#include "enterdialog.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EnterDialog w;
    w.show();
    return a.exec();
}
