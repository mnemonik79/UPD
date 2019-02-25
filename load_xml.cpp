#include "load_xml.h"


load_xml::load_xml(QObject *parent) : QObject(parent) {
}

void load_xml::getXML()
{


    QString str = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.xml *.xds");
    QFile* file = new QFile(str);
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text))
       {
         //  emit Log(tr("Невозможно открыть XML-конфиг"), LOG_LEVEL_ERROR);
        //   return false;
       }
  //  xml->qualifiedName(file);
    xml = new  QXmlStreamReader(file);
  //   QXmlStreamReader* xml = new QXmlStreamReader (file);


       // считываем товар, количество цену, код
       while (!xml->atEnd() && !xml->hasError())
          {
              QXmlStreamReader::TokenType token = xml->readNext();
          //  qDebug() <<   xml.name();

              QXmlStreamAttributes attrs = xml->attributes();
              for (size_t i = 0; i < attrs.size(); ++i) {
               QXmlStreamAttribute& attr = attrs[i];
               if (attr.name().toString()=="КолТов")
               {
                    qDebug() << attr.name().toString() << attr.value().toString();
               }

               if (attr.name().toString()=="ЦенаТов")
               {
                    qDebug() << attr.name().toString() << attr.value().toString();
               }
             // qDebug() << attr.name().toString();
            //  qDebug() << attr.value().toString();

              }
     //  qDebug() << xml.name();
             if ( xml->name() == "СвПрод")
             {
           load_xml::parsXML(1,token);
             }

            // } Прсим Товар
              if (token == QXmlStreamReader::StartDocument)
                  continue;
              if (token == QXmlStreamReader::StartElement)
              {
                  continue;
                qDebug() <<" token""";
              if (xml->name() == "ЦенаТов")
                       continue;
                  if (xml->name() == "НаимТов")

                   //   XMLConf.append(parseEtap(xml));
              qDebug() <<"Проверочка";
              }
          }

}

void load_xml::parsXML(int x, QXmlStreamReader::TokenType token)
{
    if ( xml->name() == "СвПрод")
    {

      if (token == QXmlStreamReader::StartElement)
      {
       qDebug() <<  xml->name() <<      "Стартовый контейнер найти тут Адрес и тд";
       xml->readNext();
       xml->readNext();
       xml->readNext();
       xml->readNext();
       qDebug() <<  xml->name() <<      "Стартовый контейнер найти тут Адрес и тд";
      }
//разбираем шапку Юридического лица Наименование,ИНН/КПП
   foreach(const QXmlStreamAttribute &at, xml->attributes())
   {
     if (at.name().toString()=="ИННЮЛ")
      {
     qDebug() <<  "ИНН";
      }
    if (at.name().toString()=="НаимОрг")
      {
     qDebug() <<  "Наименование организации";
      }
    if (at.name().toString()=="КПП")
       {
     qDebug() <<  "КПП";
       }
        }

// разбираем адрес Юл
   if (token == QXmlStreamReader::StartElement)
   {
    qDebug() <<  xml->name() <<      "Стартовый контейнер найти тут Адрес и тд";
    xml->readNext();
    xml->readNext();
    xml->readNext();
    xml->readNext();
    xml->readNext();
    xml->readNext();
    xml->readNext();
    qDebug() <<  xml->name() <<      "Стартовый контейнер найти тут Адрес и тд";
   }

   foreach(const QXmlStreamAttribute &at, xml->attributes())
   {
     if (at.name().toString()=="Корпус")
      {
     qDebug() <<  "Корпус";
      }
    if (at.name().toString()=="Улица")
      {
     qDebug() <<  "Улица";
      }
    if (at.name().toString()=="Город")
       {
     qDebug() <<  "Город";
       }

    if (at.name().toString()=="КодРегион")
       {
     qDebug() <<  "КодРегион";
       }

    if (at.name().toString()=="Индекс")
       {
     qDebug() <<  "Индекс";
       }
        }



}
}
