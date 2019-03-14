#ifndef XML_TTN_H
#define XML_TTN_H
#include <QObject>
#include <QList>
#include "QDebug"
#include "QSqlQuery"
#include "QFile"
#include "QXmlStreamWriter"
#include "QProcess"
#include "QMessageBox"
#include "QFileDialog"

class xml_ttn : public QObject
{
    Q_OBJECT
public:
    explicit xml_ttn(QObject *parent = 0);
    ~xml_ttn();
      QXmlStreamReader *xml;
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

#endif // XML_TTN_H
