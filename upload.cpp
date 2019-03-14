#include "upload_xml.h"

upload_xml::upload_xml(QObject *parent) : QObject(parent)
{

}


void upload_xml::xml_form()
{
    qDebug() << "Вошли сюда";

    QFile file("e:/mydocument.xml");
    if (file.open(QIODevice::WriteOnly))
    {
     QXmlStreamWriter xmlWriter(&file);
     QTextCodec* defaultTextCodec = QTextCodec::codecForName("Windows-1251");
     QTextDecoder *decoder = new QTextDecoder(defaultTextCodec);
   //  QString str = decoder->toUnicode(replyF->readAll());

     xmlWriter.setAutoFormatting(true);  // Устанавливаем автоформатирование текста
     xmlWriter.writeStartDocument();
      xmlWriter.writeStartElement("xs:schema");// Запускаем запись в документ
      xmlWriter.writeAttribute( "xmlns:xs","http://www.w3.org/2001/XMLSchema");
      xmlWriter.writeAttribute( "elementFormDefault","qualified");


         xmlWriter.writeStartElement("xs:element");   // Записываем первый элемент с его именем
             xmlWriter.writeAttribute("name","Файл");
          xmlWriter.writeStartElement("xs:complexType");
            xmlWriter.writeStartElement("xs:sequence");
              xmlWriter.writeStartElement("xs:element");
              xmlWriter.writeAttribute("name","Постановка на баланс");
              xmlWriter.writeStartElement("xs:complexType");
                  xmlWriter.writeStartElement("xs:sequence");
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","КодПомещения");
                      xmlWriter.writeStartElement("xs:simpleType");
       xmlWriter.writeStartElement("xs:restriction");
       xmlWriter.writeAttribute("base","xs:string");
           xmlWriter.writeStartElement("xs:minLength");
          xmlWriter.writeAttribute("value","1");
           xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:maxLength");
          xmlWriter.writeAttribute("value","10");
          //- Закрыли первую группу
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
// адрес помещения
           xmlWriter.writeStartElement("xs:element");
           xmlWriter.writeAttribute("name","АдресПомещения");
           xmlWriter.writeStartElement("xs:simpleType");
          xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
       xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","10");
xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:maxLength");
          xmlWriter.writeAttribute("value","200");
          xmlWriter.writeEndElement();
          xmlWriter.writeEndElement();
          xmlWriter.writeEndElement();
          xmlWriter.writeEndElement();

  // Основание !!!!!
          xmlWriter.writeStartElement("xs:element");
          xmlWriter.writeAttribute("name","НомерОснования");
          xmlWriter.writeStartElement("xs:simpleType");
          xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
      xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","1");
xmlWriter.writeEndElement();
         xmlWriter.writeStartElement("xs:maxLength");
         xmlWriter.writeAttribute("value","20");
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
      // конец
//Дата
         xmlWriter.writeStartElement("xs:element");
         xmlWriter.writeAttribute("name","ДатаОснования");
         xmlWriter.writeStartElement("xs:simpleType");
         xmlWriter.writeStartElement("xs:annotation");
          xmlWriter.writeTextElement("xs:documentation","Дата в формате ДД.ММ.ГГГГ (01.01.1900 - 31.12.2099)");
          xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
         xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","1");
xmlWriter.writeEndElement();
         xmlWriter.writeStartElement("xs:maxLength");
         xmlWriter.writeAttribute("value","((((0[1-9]{1}|1[0-9]{1}|2[0-8]{1})\.(0[1-9]{1}|1[0-2]{1}))|((29|30)\.(01|0[3-9]{1}|1[0-2]{1}))|(31\.(01|03|05|07|08|10|12)))\.((19|20)[0-9]{2}))|(29\.02\.((19|20)(((0|2|4|6|8)(0|4|8))|((1|3|5|7|9)(2|6)))))");
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();

//
         xmlWriter.writeStartElement("xs:element");
         xmlWriter.writeAttribute("maxOccurs","unbounded");
         xmlWriter.writeAttribute("minOccurs","1");
         xmlWriter.writeAttribute("name","ЛишниеУпаковки");
         xmlWriter.writeAttribute("type","ЛишниеУпаковки");

         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();

   //  Имя файла
          xmlWriter.writeStartElement("xs:attribute");
            xmlWriter.writeAttribute("name","ИмяФайла");
            xmlWriter.writeAttribute("use","required");
           xmlWriter.writeStartElement("xs:simpleType");
           xmlWriter.writeStartElement("xs:restriction");
           xmlWriter.writeAttribute("base","xs:string");
          xmlWriter.writeStartElement("xs:minLength");
         xmlWriter.writeAttribute("value","1");
         xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:maxLength");
          xmlWriter.writeAttribute("value","36");
          xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:pattern");
          xmlWriter.writeAttribute("value","MTTPS-([0-9]{13}|[0-9]{15})-((((19|20)[0-9]{2})-(((0[1-9]{1}|1[0-2]{1})-(0[1-9]{1}|1[0-9]{1}|2[0-8]{1}))|((01|0[3-9]{1}|1[0-2]{1})-(29|30))|((01|03|05|07|08|10|12)-31)))-\d+|(((19|20)(((0|2|4|6|8)(0|4|8))|((1|3|5|7|9)(2|6)))-02-29))-\d+)");
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
//

           xmlWriter.writeStartElement("xs:attribute");
             xmlWriter.writeAttribute("name","ВерсияФормата");
             xmlWriter.writeAttribute("use","required");
            xmlWriter.writeStartElement("xs:simpleType");
            xmlWriter.writeStartElement("xs:restriction");
            xmlWriter.writeAttribute("base","xs:string");
           xmlWriter.writeStartElement("xs:minLength");
          xmlWriter.writeAttribute("value","1");
          xmlWriter.writeEndElement();
           xmlWriter.writeStartElement("xs:maxLength");
           xmlWriter.writeAttribute("value","10");
           xmlWriter.writeEndElement();
           xmlWriter.writeStartElement("xs:enumeration");
           xmlWriter.writeAttribute("value","01.001.001");
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();



//
            xmlWriter.writeStartElement("xs:attribute");
              xmlWriter.writeAttribute("name","ВерсияПрограммы");
              xmlWriter.writeAttribute("use","optional");
             xmlWriter.writeStartElement("xs:simpleType");
             xmlWriter.writeStartElement("xs:restriction");
             xmlWriter.writeAttribute("base","xs:string");
            xmlWriter.writeStartElement("xs:minLength");
           xmlWriter.writeAttribute("value","1");
           xmlWriter.writeEndElement();
            xmlWriter.writeStartElement("xs:maxLength");
            xmlWriter.writeAttribute("value","100");
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();

//

             xmlWriter.writeStartElement("xs:attribute");
               xmlWriter.writeAttribute("name","ТипДокумента");
               xmlWriter.writeAttribute("use","required");
              xmlWriter.writeStartElement("xs:simpleType");
              xmlWriter.writeStartElement("xs:restriction");
              xmlWriter.writeAttribute("base","xs:string");
             xmlWriter.writeStartElement("xs:minLength");
            xmlWriter.writeAttribute("value","1");
            xmlWriter.writeEndElement();
             xmlWriter.writeStartElement("xs:maxLength");
             xmlWriter.writeAttribute("value","40");
             xmlWriter.writeEndElement();
             xmlWriter.writeStartElement("xs:enumeration");
             xmlWriter.writeAttribute("value","ПостановкаНаБаланс");
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();

              //

                     xmlWriter.writeStartElement("xs:complexType");
                     xmlWriter.writeAttribute("name","ЛишниеУпаковкия");
                     xmlWriter.writeStartElement("xs:sequence");
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","НомерСтроки");
                     xmlWriter.writeStartElement("xs:simpleType");
                     xmlWriter.writeStartElement("xs:restriction");
                     xmlWriter.writeAttribute("base","xs:integer");
                     xmlWriter.writeStartElement("xs:totalDigits");
                     xmlWriter.writeAttribute("value","9");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     //

                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","GTINПродукции");
                     xmlWriter.writeStartElement("xs:simpleType");
                     xmlWriter.writeStartElement("xs:restriction");
                     xmlWriter.writeAttribute("base","xs:integer");
                     xmlWriter.writeStartElement("xs:length ");
                     xmlWriter.writeAttribute("value","14");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();

                     //

                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","КодИдентификации");
                      xmlWriter.writeStartElement("xs:annotation");
                      xmlWriter.writeTextElement("xs:documentation","Это последние 7 символово из кода DataMatrix 04606203079452KgcFFNE Пример:KgcFFNE");
                      xmlWriter.writeEndElement();
                     //   xmlWriter.writeEndElement();
                      //  xmlWriter.writeEndElement();
                      xmlWriter.writeStartElement("xs:simpleType");
                      xmlWriter.writeStartElement("xs:restriction");
                      xmlWriter.writeAttribute("base","xs:string");
                     xmlWriter.writeStartElement("xs:length");
                     xmlWriter.writeAttribute("value","7");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     //
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","ИмяПродукции");
                       xmlWriter.writeStartElement("xs:simpleType");
                      xmlWriter.writeStartElement("xs:restriction");
                      xmlWriter.writeAttribute("base","xs:string");
                     xmlWriter.writeStartElement("minLength");
                     xmlWriter.writeAttribute("value","5");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();

                     //
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","Цена");
                       xmlWriter.writeStartElement("xs:simpleType");
                      xmlWriter.writeStartElement("xs:restriction");
                      xmlWriter.writeAttribute("base","xs:decimal");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();


                     //

     xmlWriter.writeEndElement();
     xmlWriter.writeEndDocument();
   // QTextStream stream( &file );
   // stream << document.toString();
    file.close();
      qDebug() << "Вошли сюда !@!!!!!";
}
}



void upload_xml::xml_spisanie()
{
    qDebug() << "Вошли сюда";

    QFile file("e:/spisanie.xml");
    if (file.open(QIODevice::WriteOnly))
    {
     QXmlStreamWriter xmlWriter(&file);
     QTextCodec* defaultTextCodec = QTextCodec::codecForName("Windows-1251");
     QTextDecoder *decoder = new QTextDecoder(defaultTextCodec);
   //  QString str = decoder->toUnicode(replyF->readAll());

     xmlWriter.setAutoFormatting(true);  // Устанавливаем автоформатирование текста
     xmlWriter.writeStartDocument();
      xmlWriter.writeStartElement("xs:schema");// Запускаем запись в документ
      xmlWriter.writeAttribute( "xmlns:xs","http://www.w3.org/2001/XMLSchema");
      xmlWriter.writeAttribute( "elementFormDefault","qualified");


         xmlWriter.writeStartElement("xs:element");   // Записываем первый элемент с его именем
             xmlWriter.writeAttribute("name","Файл");
          xmlWriter.writeStartElement("xs:complexType");
            xmlWriter.writeStartElement("xs:sequence");
              xmlWriter.writeStartElement("xs:element");
              xmlWriter.writeAttribute("name","СписаниеПродукции");
              xmlWriter.writeStartElement("xs:complexType");
                  xmlWriter.writeStartElement("xs:sequence");
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","ПричинаВыбытия");
                      xmlWriter.writeStartElement("xs:simpleType");
       xmlWriter.writeStartElement("xs:restriction");
       xmlWriter.writeAttribute("base","xs:string");
           xmlWriter.writeStartElement("xs:minLength");
          xmlWriter.writeAttribute("value","5");

          //- Закрыли первую группу
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
// Дата акта

           xmlWriter.writeStartElement("xs:element");
           xmlWriter.writeAttribute("name","ДатаАкта");
           xmlWriter.writeStartElement("xs:simpleType");
           xmlWriter.writeStartElement("xs:annotation");
           xmlWriter.writeTextElement("xs:documentation","Дата в формате ДД.ММ.ГГГГ (01.01.1900 - 31.12.2099)");
           xmlWriter.writeEndElement();
           xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
       xmlWriter.writeStartElement("xs:Length");
 xmlWriter.writeAttribute("value","10");
 xmlWriter.writeEndElement();
 xmlWriter.writeStartElement("xs:pattern");
 xmlWriter.writeAttribute("value","MTTPS-([0-9]{13}|[0-9]{15})-((((19|20)[0-9]{2})-(((0[1-9]{1}|1[0-2]{1})-(0[1-9]{1}|1[0-9]{1}|2[0-8]{1}))|((01|0[3-9]{1}|1[0-2]{1})-(29|30))|((01|03|05|07|08|10|12)-31)))-\d+|(((19|20)(((0|2|4|6|8)(0|4|8))|((1|3|5|7|9)(2|6)))-02-29))-\d+)");
 xmlWriter.writeEndElement();
 xmlWriter.writeEndElement();
 xmlWriter.writeEndElement();
 xmlWriter.writeEndElement();

  // Номер Акта !!!!!
          xmlWriter.writeStartElement("xs:element");
          xmlWriter.writeAttribute("name","НомерАкта");
          xmlWriter.writeStartElement("xs:simpleType");
          xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
      xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","1");
xmlWriter.writeEndElement();
         xmlWriter.writeStartElement("xs:maxLength");
         xmlWriter.writeAttribute("value","20");
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
      // конец
//Дата
   /*      xmlWriter.writeStartElement("xs:element");
         xmlWriter.writeAttribute("name","ДатаОснования");
         xmlWriter.writeStartElement("xs:simpleType");
         xmlWriter.writeStartElement("xs:annotation");
          xmlWriter.writeTextElement("xs:documentation","Дата в формате ДД.ММ.ГГГГ (01.01.1900 - 31.12.2099)");
          xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:restriction");
          xmlWriter.writeAttribute("base","xs:string");
         xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","1");
xmlWriter.writeEndElement();
         xmlWriter.writeStartElement("xs:maxLength");
         xmlWriter.writeAttribute("value","((((0[1-9]{1}|1[0-9]{1}|2[0-8]{1})\.(0[1-9]{1}|1[0-2]{1}))|((29|30)\.(01|0[3-9]{1}|1[0-2]{1}))|(31\.(01|03|05|07|08|10|12)))\.((19|20)[0-9]{2}))|(29\.02\.((19|20)(((0|2|4|6|8)(0|4|8))|((1|3|5|7|9)(2|6)))))");
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();*/

//
         xmlWriter.writeStartElement("xs:element");
         xmlWriter.writeAttribute("maxOccurs","unbounded");
         xmlWriter.writeAttribute("minOccurs","1");
         xmlWriter.writeAttribute("name","СведенияОВыбытии");
         xmlWriter.writeAttribute("type","СведенияОВыбытии");

         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();
         xmlWriter.writeEndElement();

   //  Имя файла
          xmlWriter.writeStartElement("xs:attribute");
            xmlWriter.writeAttribute("name","ИмяФайла");
            xmlWriter.writeAttribute("use","required");
           xmlWriter.writeStartElement("xs:simpleType");
                 xmlWriter.writeStartElement("xs:annotation");
                 xmlWriter.writeTextElement("xs:documentation","Уведомление о выявленном несоответствии");
                               //xmlWriter.writeEndElement();
                xmlWriter.writeEndElement();

           xmlWriter.writeStartElement("xs:restriction");
           xmlWriter.writeAttribute("base","xs:string");
          xmlWriter.writeStartElement("xs:minLength");
         xmlWriter.writeAttribute("value","1");
         xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:maxLength");
          xmlWriter.writeAttribute("value","36");
          xmlWriter.writeEndElement();
          xmlWriter.writeStartElement("xs:pattern");
          xmlWriter.writeAttribute("value","MTTPS-([0-9]{13}|[0-9]{15})-((((19|20)[0-9]{2})-(((0[1-9]{1}|1[0-2]{1})-(0[1-9]{1}|1[0-9]{1}|2[0-8]{1}))|((01|0[3-9]{1}|1[0-2]{1})-(29|30))|((01|03|05|07|08|10|12)-31)))-\d+|(((19|20)(((0|2|4|6|8)(0|4|8))|((1|3|5|7|9)(2|6)))-02-29))-\d+)");
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
           xmlWriter.writeEndElement();
//

           xmlWriter.writeStartElement("xs:attribute");
             xmlWriter.writeAttribute("name","ВерсияФормата");
             xmlWriter.writeAttribute("use","required");
            xmlWriter.writeStartElement("xs:simpleType");
            xmlWriter.writeStartElement("xs:restriction");
            xmlWriter.writeAttribute("base","xs:string");
           xmlWriter.writeStartElement("xs:minLength");
          xmlWriter.writeAttribute("value","1");
          xmlWriter.writeEndElement();
           xmlWriter.writeStartElement("xs:maxLength");
           xmlWriter.writeAttribute("value","10");
           xmlWriter.writeEndElement();
           xmlWriter.writeStartElement("xs:enumeration");
           xmlWriter.writeAttribute("value","01.001.001");
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();
            xmlWriter.writeEndElement();



//
            xmlWriter.writeStartElement("xs:attribute");
              xmlWriter.writeAttribute("name","ВерсияПрограммы");
              xmlWriter.writeAttribute("use","optional");
             xmlWriter.writeStartElement("xs:simpleType");
             xmlWriter.writeStartElement("xs:restriction");
             xmlWriter.writeAttribute("base","xs:string");
            xmlWriter.writeStartElement("xs:minLength");
           xmlWriter.writeAttribute("value","1");
           xmlWriter.writeEndElement();
            xmlWriter.writeStartElement("xs:maxLength");
            xmlWriter.writeAttribute("value","100");
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();
             xmlWriter.writeEndElement();

//

             xmlWriter.writeStartElement("xs:attribute");
               xmlWriter.writeAttribute("name","ТипДокумента");
               xmlWriter.writeAttribute("use","required");
              xmlWriter.writeStartElement("xs:simpleType");
              xmlWriter.writeStartElement("xs:restriction");
              xmlWriter.writeAttribute("base","xs:string");
             xmlWriter.writeStartElement("xs:minLength");
            xmlWriter.writeAttribute("value","1");
            xmlWriter.writeEndElement();
             xmlWriter.writeStartElement("xs:maxLength");
             xmlWriter.writeAttribute("value","40");
             xmlWriter.writeEndElement();
             xmlWriter.writeStartElement("xs:enumeration");
             xmlWriter.writeAttribute("value","СписаниеПродукции");
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();
              xmlWriter.writeEndElement();

              //

                     xmlWriter.writeStartElement("xs:complexType");
                     xmlWriter.writeAttribute("name","СведенияОВыбытии");
                     xmlWriter.writeStartElement("xs:sequence");
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","НомерСтроки");
                     xmlWriter.writeStartElement("xs:simpleType");
                     xmlWriter.writeStartElement("xs:restriction");
                     xmlWriter.writeAttribute("base","xs:integer");
                     xmlWriter.writeStartElement("xs:totalDigits");
                     xmlWriter.writeAttribute("value","9");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     //

                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","GTINПродукции");
                     xmlWriter.writeStartElement("xs:simpleType");
                     xmlWriter.writeStartElement("xs:restriction");
                     xmlWriter.writeAttribute("base","xs:integer");
                     xmlWriter.writeStartElement("xs:length ");
                     xmlWriter.writeAttribute("value","14");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();

                     //

                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","КодИдентификации");
                      xmlWriter.writeStartElement("xs:annotation");
                      xmlWriter.writeTextElement("xs:documentation","Это последние 7 символово из кода DataMatrix 04606203079452KgcFFNE Пример:KgcFFNE");
                      xmlWriter.writeEndElement();
                     //   xmlWriter.writeEndElement();
                      //  xmlWriter.writeEndElement();
                      xmlWriter.writeStartElement("xs:simpleType");
                      xmlWriter.writeStartElement("xs:restriction");
                      xmlWriter.writeAttribute("base","xs:string");
                     xmlWriter.writeStartElement("xs:length");
                     xmlWriter.writeAttribute("value","7");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     //
                     xmlWriter.writeStartElement("xs:element");
                     xmlWriter.writeAttribute("name","ИмяПродукции");
                       xmlWriter.writeStartElement("xs:simpleType");
                      xmlWriter.writeStartElement("xs:restriction");
                      xmlWriter.writeAttribute("base","xs:string");
                     xmlWriter.writeStartElement("minLength");
                     xmlWriter.writeAttribute("value","5");
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();
                     xmlWriter.writeEndElement();

                     //



                     //

     xmlWriter.writeEndElement();
     xmlWriter.writeEndDocument();
   // QTextStream stream( &file );
   // stream << document.toString();
    file.close();
      qDebug() << "Вошли сюда !@!!!!!";
}
}
void upload_xml::xml_agr()
{
    qDebug() << "Вошли сюда";

    QFile file("e:/agr.xml");
    if (file.open(QIODevice::WriteOnly))
    {
     QXmlStreamWriter xmlWriter(&file);
     QTextCodec* defaultTextCodec = QTextCodec::codecForName("Windows-1251");
     QTextDecoder *decoder = new QTextDecoder(defaultTextCodec);

     xmlWriter.setAutoFormatting(true);  // Устанавливаем автоформатирование текста
     xmlWriter.writeStartDocument();
      xmlWriter.writeStartElement("xs:schema");// Запускаем запись в документ
      xmlWriter.writeAttribute( "xmlns:xs","http://www.w3.org/2001/XMLSchema");
      xmlWriter.writeAttribute( "elementFormDefault","qualified");


      xmlWriter.writeStartElement("xs:element");   // Записываем первый элемент с его именем
      xmlWriter.writeAttribute("name","Файл");
      xmlWriter.writeStartElement("xs:complexType");
        xmlWriter.writeStartElement("xs:sequence");
          xmlWriter.writeStartElement("xs:element");
          xmlWriter.writeAttribute("name","УведомлениеОбАгрегировании");
          xmlWriter.writeStartElement("xs:complexType");
              xmlWriter.writeStartElement("xs:sequence");
                 xmlWriter.writeStartElement("xs:element");
                 xmlWriter.writeAttribute("name","КодПомещения");
                  xmlWriter.writeStartElement("xs:simpleType");
   xmlWriter.writeStartElement("xs:restriction");
   xmlWriter.writeAttribute("base","xs:string");
       xmlWriter.writeStartElement("xs:minLength");
      xmlWriter.writeAttribute("value","1");
       xmlWriter.writeEndElement();
      xmlWriter.writeStartElement("xs:maxLength");
      xmlWriter.writeAttribute("value","10");
      //- Закрыли первую группу
       xmlWriter.writeEndElement();
       xmlWriter.writeEndElement();
       xmlWriter.writeEndElement();
       xmlWriter.writeEndElement();
// адрес помещения
       xmlWriter.writeStartElement("xs:element");
       xmlWriter.writeAttribute("name","АдресПомещения");
       xmlWriter.writeStartElement("xs:simpleType");
      xmlWriter.writeStartElement("xs:restriction");
      xmlWriter.writeAttribute("base","xs:string");
   xmlWriter.writeStartElement("xs:minLength");
xmlWriter.writeAttribute("value","10");
xmlWriter.writeEndElement();
      xmlWriter.writeStartElement("xs:maxLength");
      xmlWriter.writeAttribute("value","200");
      xmlWriter.writeEndElement();
      xmlWriter.writeEndElement();
      xmlWriter.writeEndElement();
      xmlWriter.writeEndElement();
    // Новая транспортная

      xmlWriter.writeStartElement("xs:element");
      xmlWriter.writeAttribute("maxOccurs","unbounded");
      xmlWriter.writeAttribute("minOccurs","0");
      xmlWriter.writeAttribute("name","НоваяТранспортная");

               xmlWriter.writeStartElement("xs:complexType");
               xmlWriter.writeStartElement("xs:sequence");
               xmlWriter.writeStartElement("xs:element");
               xmlWriter.writeAttribute("name","НомерСтроки");
               xmlWriter.writeAttribute("type","НомерСтроки");
               xmlWriter.writeEndElement();
               xmlWriter.writeStartElement("xs:element");
               xmlWriter.writeAttribute("name","AI");
               xmlWriter.writeStartElement("xs:simpleType");
               xmlWriter.writeStartElement("xs:restriction");
               xmlWriter.writeAttribute("base","xs:string");
               xmlWriter.writeStartElement("xs:Length");
               xmlWriter.writeAttribute("value","2");
               xmlWriter.writeStartElement("xs:enumeration");
               xmlWriter.writeAttribute("value","00");
               xmlWriter.writeEndElement();
               xmlWriter.writeStartElement("xs:enumeration");
               xmlWriter.writeAttribute("value","01");
               xmlWriter.writeEndElement();
               xmlWriter.writeStartElement("xs:enumeration");
               xmlWriter.writeAttribute("value","02");
               xmlWriter.writeEndElement();
               xmlWriter.writeEndElement();
               xmlWriter.writeEndElement();
               xmlWriter.writeEndElement();



               xmlWriter.writeEndElement();
               xmlWriter.writeEndDocument();
             // QTextStream stream( &file );
             // stream << document.toString();
                file.close();
                qDebug() << "Вошли сюда !@!!!!!";
    }



}
