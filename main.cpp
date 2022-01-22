#include "login.h"
#include "healtcheck.h"
#include <QApplication>
#include <QWebEngineView>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    HealtCheck w;
   // Login w;
     w.show();

    return a.exec();



}
