#include "StockManager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QIcon icon("Resource/inventory.png");
    QApplication a(argc, argv);
    StockManager w;
    w.show();
    return a.exec();
}
