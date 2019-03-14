#ifndef LOAD_XML_H
#define LOAD_XML_H
#include <QObject>
#include <QList>
#include "QDebug"
#include "QSqlQuery"
#include "QFile"
#include "QXmlStreamWriter"
#include "QProcess"
#include "QMessageBox"
#include "QFileDialog"


class load_xml : public QObject
{
    Q_OBJECT
public:
    explicit load_xml(QObject *parent = 0);
     ~load_xml();
      QXmlStreamReader *xml;
     // QVector<QString> *dann(n);
      struct factura
        {
         QString nameF;
         QString nomerF;
         QString dataF;
         QString INN;
         QString ORG;
         QString KPP;
         QString adres;
         QString array[100][100] ;
         QString tov[100] ;
         QString price[100] ;

           };
      factura *fact1;
      QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");

signals:

public slots:
   void getXML( );
      void parsXML(int X, QXmlStreamReader::TokenType token); //працедура извлечения  данных Юл

};

#endif // LOAD_XML_H
