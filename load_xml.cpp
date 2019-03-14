#include "load_xml.h"
#include "esutb.h"

load_xml::load_xml(QObject *parent) : QObject(parent) {


  //  fact1 = new factura();
  //  fact1->nameF=("s");
  //    qDebug() << fact1->nameF;
}
load_xml::~load_xml()
{


}
void load_xml::getXML()
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
     //  qDebug() << xml.name();
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

           if ( xml->name() == "СвПрод")
             {
           load_xml::parsXML(1,token);
             }
           if ( xml->name() == "ГрузОТ")
             {
           load_xml::parsXML(1,token);
             }
           if ( xml->name() == "ГрузПолуч")
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



//  Добавляем в базу
       dbase.setDatabaseName("main.db");
       dbase.setUserName("GoodsInput");
       dbase.setPassword("2018");


       //
       //ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);

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
      QSqlQuery query("INSERT INTO upd_tabak(name,nomer,data,id_kontr,status) values ('Cч/Фактура','"+fact1->nomerF+"','"+fact1->dataF+"',"+ID_cont+",'"+"загружена"+"') ");
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
       fact1->INN=at.value().toString();
     }
    if (at.name().toString()=="НаимОрг")
      {
     qDebug() <<  "Наименование организации";
        fact1->ORG=at.value().toString();
      }
    if (at.name().toString()=="КПП")
       {
     qDebug() <<  "КПП";
       fact1->KPP=at.value().toString();
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
           fact1->adres=at.value().toString();
     qDebug() <<  "Корпус";
      }
    if (at.name().toString()=="Улица")
      {
        fact1->adres=at.value().toString()+" "+fact1->adres;
     qDebug() <<  "Улица";
      }
    if (at.name().toString()=="Город")
       {
         fact1->adres=at.value().toString()+" "+fact1->adres;
     qDebug() <<  "Город";
       }

    if (at.name().toString()=="КодРегион")
       {
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
