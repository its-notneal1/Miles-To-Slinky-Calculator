#include "slinkycalculator.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    SlinkyCalculator w;
    w.show();
    return a.exec();
}
