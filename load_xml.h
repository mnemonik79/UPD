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
      QXmlStreamReader *xml;
signals:

public slots:
   void getXML( );
      void parsXML(int X, QXmlStreamReader::TokenType token); //працедура извлечения  данных Юл

};

#endif // LOAD_XML_H
