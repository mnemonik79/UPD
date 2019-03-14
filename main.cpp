#include "esutb.h"
#include "load_xml.h"
#include "izlish.h"
#include <QApplication>
#include <QUrl>
#include <QtWebEngine/qtwebengineglobal.h>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QGuiApplication>
#include <QtWebEngine>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
//QWebEngineView *view = new QWebEngineView();
//QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);
  //      view->load(QUrl("https://честныйзнак.рф/"));
//StyleLoader::attach("c:/myStyle.qss", QKeySequence("F6"));

    esutb w;
    w.show();
       //  view->show();
    return a.exec();
}
