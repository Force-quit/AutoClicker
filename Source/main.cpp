#include <QApplication>
#include "../Headers/EQAutoClicker.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EQAutoClicker w;
    w.show();
    return a.exec();
}