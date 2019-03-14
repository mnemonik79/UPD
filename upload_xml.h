#ifndef UPLOAD_XML_H
#define UPLOAD_XML_H
#include <QObject>
#include <QDomDocument>
#include <QFile>
#include <QTextStream>
#include <QXmlStreamWriter>
#include <QDebug>
#include <QTextCodec>

class upload_xml : public QObject
{
    Q_OBJECT
public:
    explicit upload_xml(QObject *parent = 0);

signals:

public slots:

    void xml_form(); //xml_излишки
    void xml_spisanie(); //xml_списание
    void xml_agr(); //xml_списание
};

#endif // UPLOAD_XML_H
