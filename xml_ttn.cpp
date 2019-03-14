#include "esutb.h"
#include "xml_ttn.h"


xml_ttn::xml_ttn(QObject *parent) : QObject(parent) {
}


xml_ttn::~xml_ttn()
{

   esutb * pp= new esutb;
   pp->obnov();
}
void xml_ttn::getXML()
{

   fact1 = new factura();
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
                   fact1->array[1][1] = attr.value().toString();
                    qDebug() << attr.name().toString() << attr.value().toString();
               }

               if (attr.name().toString()=="ЦенаТов")
               {
                   fact1->array[1][2] = attr.value().toString();
                    qDebug() << attr.name().toString() << attr.value().toString();
               }
               if (attr.name().toString()=="НаимТов")
               {
                 fact1->tov[1] = attr.value().toString();
                    qDebug() << attr.name().toString() << attr.value().toString();
               }

               if (attr.name().toString()=="СтТовУчНал")
               {
                    fact1->price[1] = attr.value().toString();
                    qDebug() << attr.name().toString() << attr.value().toString();
               }
               // qDebug() << attr.name().toString();
            //  qDebug() << attr.value().toString();

              }
              if ( xml->name() == "СвСчФакт")
                {
                  foreach(const QXmlStreamAttribute &at, xml->attributes())
                  {
                    if (at.name().toString()=="ДатаСчФ")
                     {

                      fact1->dataF=at.value().toString();
                     }
                    if (at.name().toString()=="НомерСчФ")
                     {
                    qDebug() <<  "ИНН";
                      fact1->nomerF=at.value().toString();
                     }

                  }

                }

     //  qDebug() << xml.name();
           if ( xml->name() == "СвПрод")
             {
           xml_ttn::parsXML(1,token);
        qDebug()<< "Продовец найден";
           }
           if ( xml->name() == "ГрузОТ")
             {
           xml_ttn::parsXML(1,token);
             }
           if ( xml->name() == "ГрузПолуч")
             {
           xml_ttn::parsXML(1,token);
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

       dbase.setDatabaseName("main.db");
       dbase.setUserName("GoodsInput");
       dbase.setPassword("2018");

       if(dbase.open())
          {
              qDebug("Connected!");

         //saveLog("Подключение к серверу лицензий");
          }
          else
          {
           // saveLog("Ошибка при подключении к серверу лицензий");
              qDebug("Connection Failed!");
          }
         QSqlQuery zapr("SELECT * from kontragents where INN=="+fact1->INN);
         zapr.next();
                 if (zapr.numRowsAffected()<1) {
             qDebug()<<"не получил данные";
          zapr.exec("insert INTO kontragents(INN,KPP,ShortName) Values ('"+fact1->INN+"','"+fact1->KPP+"','"+fact1->ORG+"')");
         // zapr.exec("insert INTO kontragents(INN) Values ('"+fact1->INN+"')");
                               }
         else
         {
             qDebug()<<"получилИ данные"<< fact1->INN;
           zapr.next();
          // QString IIN=zapr.value("id").toString();
         }
             zapr.exec("SELECT * from kontragents where INN=="+fact1->INN);
             zapr.next();

QString ID_cont=zapr.value("id").toString();
qDebug()<<"получилИ данные"<< ID_cont;
      QSqlQuery query("INSERT INTO upd_tabak(name,nomer,data,id_kontr,status) values ('Товаро-Транспортная','"+fact1->nomerF+"','"+fact1->dataF+"',"+ID_cont+",'"+"загружена"+"') ");
      QSqlQuery str1("select max(id) from upd_tabak");
      int idx1;
      str1.last();
      idx1=str1.value(0).toInt();
    //  idx1=idx1+1;

for(int i = 1;i<2;i++)
{
    zapr.exec("insert into upd_tabak_tab (id_upd,name,kol,price,summa) values ("+QVariant(idx1).toString()+",'"+fact1->tov[1]+"','"+fact1->array[1][1]+"','"+fact1->array[1][2]+"','"+fact1->price[1]+"')");
}


// Обновляем

esutb * pp= new esutb;
pp->obnov();
}

void xml_ttn::parsXML(int x, QXmlStreamReader::TokenType token)
{
    if ( xml->name() == "СвПрод")
    {

      if (token == QXmlStreamReader::StartElement)
      {
         xml->readNext();
            xml->readNext();
             xml->readNext();
              xml->readNext();
          qDebug() <<  xml->name() <<      "Найден поставщик";

    //   xml->readNext();
   //    xml->readNext();
   //    xml->readNext();
    //   xml->readNext();
   //   qDebug() <<  xml->name() <<      "считываем";
      }
//разбираем шапку Юридического лица Наименование,ИНН/КПП
   foreach(const QXmlStreamAttribute &at, xml->attributes())
   {
     if (at.name().toString()=="ИННЮЛ")
      {
     qDebug() <<  "ИНН";
     fact1->INN=at.value().toString();
      }
    if (at.name().toString()=="НаимОрг")
      {
          fact1->ORG=at.value().toString();
     qDebug() <<  "Наименование организации";
      }
    if (at.name().toString()=="КПП")
       {
        fact1->KPP=at.value().toString();
     qDebug() <<  "КПП";
       }
        }

// разбираем адрес Юл
   if (token == QXmlStreamReader::StartElement)
   {
       xml->readNext();
        xml->readNext();
        xml->readNext();
        xml->readNext();
         xml->readNext();
         xml->readNext();
          xml->readNext();

        qDebug() <<  xml->name() <<      "Здесь адрес строчка 1";

   }

   foreach(const QXmlStreamAttribute &at, xml->attributes())
   {
     if (at.name().toString()=="Корпус")
      {
     qDebug() <<  "Корпус";
     fact1->adres=at.value().toString();
      }
    if (at.name().toString()=="Улица")
      {
     qDebug() <<  "Улица";
       fact1->adres=at.value().toString()+" "+fact1->adres;
      }
    if (at.name().toString()=="Город")
       {
          fact1->adres=at.value().toString()+" "+fact1->adres;
     qDebug() <<  "Город";
       }

    if (at.name().toString()=="КодРегион")
       {
          fact1->adres=at.value().toString()+" "+fact1->adres;
     qDebug() <<  "КодРегион";
       }

    if (at.name().toString()=="Индекс")
       {
          fact1->adres=at.value().toString()+" "+fact1->adres;
     qDebug() <<  "Индекс";
       }
        }



}
}
