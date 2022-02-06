#include "tienda.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator traducion;
    QString idiomaSistema = QLocale::system().nativeLanguageName().toLower();

        if (idiomaSistema == "english"){
            traducion.load(":/Tienda_en.qm");
        }
        //Français
        if (idiomaSistema == "français"){
            traducion.load(":/Tienda_fr.qm");
        }

        if (idiomaSistema != "español"){
            a.installTranslator(&traducion);
        }

    Tienda w;
    w.show();
    return a.exec();
}
