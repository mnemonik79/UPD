#include "esutb.h"
#include "ui_esutb.h"
#include "izlish.h"
#include "spisanie.h"
esutb::esutb(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::esutb)
{
    ui->setupUi(this);
    //https://server131.hosting.reg.ru/
    dbase.setDatabaseName("main.db");
    dbase.setUserName("GoodsInput");
    dbase.setPassword("2018");
  ui->pushButton->setToolTip("Внесение товара в базу, загрузка Счета фактуры");
  ui->tab->setToolTip("Перечеь загруженных и выгруженных документов");
    //
    //ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);

    // Делаем красивую кнопку
  // TabWidget *tabWidget=new  TabWidget();
  ui->tab->setStyleSheet("QToolTip{background-color: rgb(245,245,245);  border: 0px; padding: 0px; border-radius: 0px; }");
    ui->pushButton->setStyleSheet("QToolTip{background-color: rgb(245,245,24);  border: 0px ; padding: 0px; border-radius: 0px; }");
    ui->pushButton->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");
    ui->pushButton_2->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");
    ui->pushButton_3->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");
    ui->pushButton_4->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_5->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_6->setStyleSheet("  background-color"
                                  ":cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_7->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");
    ui->pushButton_8->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_9->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_10->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

    ui->pushButton_11->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");
    ui->pushButton_12->setStyleSheet("  background-color"
                                  ": cornsilk; border-style: outset; border-width: 2px;"
                                  "border-radius: 10px;    border-color: grey;"
                                  "  font: bold 12px; min-width: 8em; padding: 6px;");

ui->tabWidget_2->setStyleSheet(" font: bold 12px;");
// ui->tabWidget->setStyleSheet(" background-color: Teal; border-style: outset;");
// ui->tab->setStyleSheet(" background-color: Teal; border-style: outset;");
//ui->tabWidget->setStyleSheet("QHeaderView::section {background-color:Teal}");
ui->tabWidget_2->setStyleSheet("QHeaderView::section { border-width: 1px;border-radius: 2px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");
ui->tabWidget_2->setStyleSheet("border-width: 0px;border-radius: 0px;");
ui->tabWidget->setStyleSheet("border-width: 0px;border-radius: 0px;");
ui->tabWidget->setStyleSheet("border-width: 0px;border-radius: 0px;");
//ui->lineEdit->setStyleSheet("color: black; background-color: wheat;border-style: outset;  border-width: 1px;border-color: green;");
ui->tableView->setStyleSheet("QTableView QTableCornerButton::section { border: 0px outset grey;background-color: grey;}");
ui->tableView->setStyleSheet("QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");
//ui->tableView->setStyleSheet("border-width: 6px;border-radius: 4px;");
//ui->label->setStyleSheet("border-width:0px;border-radius: 0px; font: bold 12px;  ");

ui->tableView_2->setStyleSheet("QTableView QTableCornerButton::section { border: 0px outset grey;background-color: grey;}");
ui->tableView_2->setStyleSheet("QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");

ui->tableView_3->setStyleSheet("QTableView QTableCornerButton::section { border: 0px outset grey;background-color: grey;}");
ui->tableView_3->setStyleSheet("QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");

ui->tableView_4->setStyleSheet("QTableView QTableCornerButton::section { border: 0px outset grey;background-color: grey;}");
ui->tableView_4->setStyleSheet("QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");

ui->tableView_5->setStyleSheet("QTableView QTableCornerButton::section { border: 0px outset grey;background-color: grey;}");
ui->tableView_5->setStyleSheet("QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}");


ui->label->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_2->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_3->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_4->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_5->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_6->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_7->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_8->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_9->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_10->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");
ui->label_11->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;padding: 0px;}");

ui->label_12->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_13->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_14->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_15->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_16->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_17->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_18->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_19->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_20->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_21->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");
ui->label_22->setStyleSheet("QLabel{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;padding: 0px;}");

// Сверка
ui->label_23->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_24->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_25->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_26->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_27->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_28->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_29->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_30->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_31->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_32->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_33->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
ui->label_34->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");

ui->label_32->setText("");
ui->label_33->setText("");
ui->label_34->setText("");

ui->label_12->setText("");
ui->label_13->setText("");
ui->label_14->setText("");
ui->label_15->setText("");
ui->label_16->setText("");
ui->label_17->setText("");
ui->label_18->setText("");
ui->label_19->setText("");
ui->label_20->setText("");
ui->label_21->setText("");
ui->label_22->setText("");
line_css();
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
  ui->tabWidget_2->setCurrentIndex(0);
  zapros_upd = new QSqlQueryModel();
  zapros_upd1 = new QSqlQueryModel();

    // zapros_upd = new QSqlQueryModel();
  // zapros_upd->setQuery("SELECT * FROM upd_tabak ");
     QSqlQuery query;
   // query.exec("SELECT * FROM upd_tabak");
 query.next();
  if(!query.exec("SELECT * FROM upd_tabak")){
       qDebug() << "error HeroviConect " ;
       qDebug() << query.lastError().text();
      // return false;
   } else {
      // return true;
   }

// qDebug() << query
  zapros_upd->setQuery(" SELECT upd_tabak.ID,upd_tabak.Nomer as Nomer,kontragents.ShortName as Kont,upd_tabak.data as DATA,upd_tabak.Summa as Summa FROM upd_tabak LEFT JOIN kontragents ON upd_tabak.id_kontr = kontragents.id ");
//
 //    zapros_upd->setQuery("SELECT * FROM bill ");

    // ui->tableView->setModel( zapros_upd);

     //
         ui->tableView->setModel(zapros_upd);     // Устанавливаем модель на TableView
         ui->tableView->setColumnHidden(0, true);    // Скрываем колонку с id записей
         // Разрешаем выделение строк
         ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
         // Устанавливаем режим выделения лишь одно строки в таблице
         ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
         // Устанавливаем размер колонок по содержимому
         ui->tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
     //    ui->tableView->resizeColumnsToContents();
      //   ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
     //    ui->tableView->horizontalHeader()->setStretchLastSection(true);
        // количество колонок

         ui->tableView->hideColumn(4);
         ui->tableView->setAlternatingRowColors(true);
//setAlternatingRowColors(true);
   // ui->tableView->setColumnHidden( zapros_upd->(), true);
     zapros_upd->setHeaderData(1, Qt::Horizontal, tr("Номер"));//
     zapros_upd->setHeaderData(2, Qt::Horizontal, tr("Контрагент"));
     zapros_upd->setHeaderData(3, Qt::Horizontal, tr("Дата"));
     zapros_upd->setHeaderData(4, Qt::Horizontal, tr("Сумма"));
    // zapros_upd->setHeaderData(5, Qt::Horizontal, tr("Сумма"));

}

esutb::~esutb()
{
    delete ui;
}

void esutb::on_tableView_clicked(const QModelIndex &index)
{
    zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toString();
}

void esutb::on_tableView_doubleClicked(const QModelIndex &index)
{
//  zapros_kontr = new QSqlQueryModel();
    id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();

    zapolnenie(id_ch);
    zapolnenie_tovar(id_ch);
    ui->tabWidget_2->setCurrentIndex(2);
}

void esutb::zapolnenie(int idx)
{
  // zapros_kontr = new QSqlQueryModel();
      QSqlQuery zap;

      if(!zap.exec("SELECT name,inn,kpp,addres FROM company")){
           qDebug() << "Выбор нашей компании ошибка " ;
           qDebug() << zap.lastError().text();
          // return false;
       } else {

          // return true;
       }

   QSqlQuery zapros;
     QString str_zapros=(" SELECT upd_tabak.ID, "
                        " upd_tabak.Nomer as Nomer,kontragents.ShortName "
                        " as Kont,upd_tabak.data as DATA,upd_tabak.Summa "
                        " as Summa, "
                        " kontragents.INN as INN, "
                        " kontragents.KPP as KPP, "
                        " kontragents.country as Count, "
                        " kontragents.RegionCode as RG, "
                        " kontragents.area as AR, "
                        " kontragents.place as PC, "
                        " kontragents.house as HS "
                         " FROM upd_tabak "
                        " INNER JOIN kontragents "
                        " ON upd_tabak.id_kontr = kontragents.id " \
                         " WHERE kontragents.id= "+QVariant(idx).toString());


    // query.next();
      if(!zapros.exec(str_zapros)){
           qDebug() << "Ошибка выбора Контрагента " ;
           qDebug() << zapros.lastError().text();
          // return false;
       } else {
          // return true;
          QString adr=(zapros.value("RG").toString())+","\
          +(zapros.value("Count").toString())+","+\
          (zapros.value("AR").toString())+\
                  " ,"+(zapros.value("PC").toString())+\
                  ", "+(zapros.value("HS").toString());
      zapros.next();
       zap.next();
      ui->label_12->setText(zapros.value("Nomer").toString());
      ui->label_13->setText(zapros.value("Kont").toString());
      ui->label_14->setText(adr);
      ui->label_15->setText(zapros.value("INN").toString()+"/"+zapros.value("KPP").toString());
      ui->label_16->setText(" ");
      ui->label_17->setText(" ");
      ui->label_18->setText(" ");
      ui->label_19->setText(zap.value("name").toString());
      ui->label_21->setText(zap.value("inn").toString()+"/"+zap.value("kpp").toString());
      ui->label_20->setText(zap.value("addres").toString());
      ui->label_22->setText("рубли");

      //       Заполним Поля на Страничке Сверка
      ui->lineEdit_2->setText(zapros.value("Nomer").toString()+" "+(zapros.value("Kont").toString())+"Дата");
   //   ui->lineEdit_3->setText(zapros.value("Nomer").toString()+" "+(zapros.value("Kont").toString())+"Дата");
      }

}

void esutb::zapolnenie_tovar(int idx)
{
   zapros_kontr = new QSqlQueryModel();
    zapros_kontr->setQuery("Select ID,name,kol,price,nds,kod_tov from upd_tabak_tab WHERE ID_upd= "+QVariant(idx).toString());
   ui->tableView_3->setModel(zapros_kontr);     // Устанавливаем модель на TableView
   ui->tableView_3->setColumnHidden(0, true);    // Скрываем колонку с id записей
   // Разрешаем выделение строк
   ui->tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);
   // Устанавливаем режим выделения лишь одно строки в таблице
   ui->tableView_3->setSelectionMode(QAbstractItemView::SingleSelection);
   // Устанавливаем размер колонок по содержимому
   ui->tableView_3->resizeColumnsToContents();
   ui->tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
   ui->tableView_3->horizontalHeader()->setStretchLastSection(true);
  // количество колонок
   ui->tableView_3->hideColumn(5);
   ui->tableView_3->setAlternatingRowColors(true);

// ui->tableView->setColumnHidden( zapros_upd->(), true);
zapros_kontr->setHeaderData(1, Qt::Horizontal, tr("Товар"));//
zapros_kontr->setHeaderData(2, Qt::Horizontal, tr("Количество"));
zapros_kontr->setHeaderData(3, Qt::Horizontal, tr("Прайс"));
zapros_kontr->setHeaderData(4, Qt::Horizontal, tr("НДС"));
zapros_kontr->setHeaderData(5, Qt::Horizontal, tr("КОД"));


//заполняем таблицу 4 на 3й старанице

ui->tableView_4->setModel(zapros_kontr);     // Устанавливаем модель на TableView
ui->tableView_4->setColumnHidden(0, true);    // Скрываем колонку с id записей
// Разрешаем выделение строк
ui->tableView_4->setSelectionBehavior(QAbstractItemView::SelectRows);
// Устанавливаем режим выделения лишь одно строки в таблице
ui->tableView_4->setSelectionMode(QAbstractItemView::SingleSelection);
// Устанавливаем размер колонок по содержимому
ui->tableView_4->resizeColumnsToContents();
ui->tableView_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
ui->tableView_4->horizontalHeader()->setStretchLastSection(true);
// количество колонок
ui->tableView_4->hideColumn(5);
ui->tableView_4->setAlternatingRowColors(true);

zapros_kontr->setHeaderData(1, Qt::Horizontal, tr("Товар"));//
zapros_kontr->setHeaderData(2, Qt::Horizontal, tr("Количество"));
zapros_kontr->setHeaderData(3, Qt::Horizontal, tr("Прайс"));
zapros_kontr->setHeaderData(4, Qt::Horizontal, tr("НДС"));
zapros_kontr->setHeaderData(5, Qt::Horizontal, tr("КОД"));

//заполняем таблицу 5 на  старанице Сверка

ui->tableView_5->setModel(zapros_kontr);     // Устанавливаем модель на TableView
ui->tableView_5->setColumnHidden(0, true);    // Скрываем колонку с id записей
// Разрешаем выделение строк
ui->tableView_5->setSelectionBehavior(QAbstractItemView::SelectRows);
// Устанавливаем режим выделения лишь одно строки в таблице
ui->tableView_5->setSelectionMode(QAbstractItemView::SingleSelection);
// Устанавливаем размер колонок по содержимому
ui->tableView_5->resizeColumnsToContents();
ui->tableView_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
ui->tableView_5->horizontalHeader()->setStretchLastSection(true);
// количество колонок
ui->tableView_5->hideColumn(5);
ui->tableView_5->setAlternatingRowColors(true);

zapros_kontr->setHeaderData(1, Qt::Horizontal, tr("Товар"));//
zapros_kontr->setHeaderData(2, Qt::Horizontal, tr("Количество"));
zapros_kontr->setHeaderData(3, Qt::Horizontal, tr("Прайс"));
zapros_kontr->setHeaderData(4, Qt::Horizontal, tr("НДС"));
zapros_kontr->setHeaderData(5, Qt::Horizontal, tr("КОД"));
// шАПКА
//ВСТАВИТЬ ПРОЦЕДУРУ ЗАПОЛНЕНИЯ ШАПКИ!
zapolnenie_tovar_sverka(idx);
}

void esutb::on_tabWidget_2_currentChanged(int index)
{
    switch (index) {


  case 1:
    {
    id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
    zapolnenie(id_ch);
    zapolnenie_tovar(id_ch);
      qDebug() <<id_ch <<"Смена 2 " ;
      obnov();
    }
   case 2:
      {
        zapros_upd1->setQuery(" SELECT upd_tabak.ID,upd_tabak.Nomer as Nomer,kontragents.ShortName as Kont,upd_tabak.data as DATA,upd_tabak.Summa as Summa FROM upd_tabak LEFT JOIN kontragents ON upd_tabak.id_kontr = kontragents.id where status=='выгружено'");

        ui->tableView_2->setModel(zapros_upd1);     // Устанавливаем модель на TableView
        ui->tableView_2->setColumnHidden(0, true);    // Скрываем колонку с id записей
        // Разрешаем выделение строк
        ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        // Устанавливаем режим выделения лишь одно строки в таблице
        ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        // Устанавливаем размер колонок по содержимому
        ui->tableView_2->resizeColumnsToContents();
        ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableView_2->horizontalHeader()->setStretchLastSection(true);
       // количество колонок
        ui->tableView_2->hideColumn(4);
        ui->tableView_2->setAlternatingRowColors(true);

    // ui->tableView->setColumnHidden( zapros_upd->(), true);
      zapros_upd1->setHeaderData(1, Qt::Horizontal, tr("Номер"));//
      zapros_upd1->setHeaderData(2, Qt::Horizontal, tr("Контрагент"));
      zapros_upd1->setHeaderData(3, Qt::Horizontal, tr("Дата"));
      zapros_upd1->setHeaderData(4, Qt::Horizontal, tr("Сумма"));

     }
    case 3:
       {
       id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
       //zapolnenie(id_ch);
         zapolnenie_tovar(id_ch);
         qDebug() <<id_ch<< "Смена 3  " ;
      }


    }
}

void esutb::on_pushButton_3_clicked()
{
     ui->tabWidget_2->setCurrentIndex(2);
}

void esutb::on_pushButton_2_clicked()
{
     ui->tabWidget_2->setCurrentIndex(3);
}

void esutb::on_pushButton_4_clicked()
{
   id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
   QSqlQuery zapros;
     QString str_zapros=("DELETE FROM upd_tabak WHERE id = "+QVariant(id_ch).toString());
     QString str_zapros2=("DELETE FROM upd_tabak_tab WHERE id_upd = "+QVariant(id_ch).toString());



     if(!zapros.exec(str_zapros)){
          qDebug() << "Выбор нашей компании ошибка " ;
          qDebug() << zapros.lastError().text();
        //return;
      } else {

         // return true;
      }

      if(!zapros.exec(str_zapros2)){
          qDebug() << "Выбор нашей компании ошибка " ;
          qDebug() << zapros.lastError().text();
        //return;
      } else {

         // return true;
      }
obnov();

}

void esutb::on_pushButton_clicked()
{
   // QString str = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.xml *.xds");
    load_xml* pp= new load_xml;
    //Load_xml *LX =new Load_xml;
    //pp->GoodCod((ui->code_edit->text().toInt()),good_barcode,sostav);
    pp->getXML();
}

void esutb::on_pushButton_5_clicked()
{
       ui->tabWidget->setCurrentIndex(1);
}
void esutb::zapolnenie_tovar_sverka(int idy)
{
 QString str=("Select ID,name,kol,price,nds,kod_tov from upd_tabak_tab WHERE ID_upd= "+QVariant(idy).toString());
QSqlQuery tovar(str);
tovar.first();
qDebug()<< "proverka" <<idy;
ui->lineEdit_3->setText(QVariant(tovar.value("kol")).toString());
ui->lineEdit_4->setText(QVariant(tovar.value("price")).toString());
ui->lineEdit_5->setText(QVariant(tovar.value("summa")).toString());
ui->lineEdit_6->setText(QVariant(tovar.value("kod_part")).toString());
ui->lineEdit_7->setText(QVariant(tovar.value("country")).toString());
ui->lineEdit_8->setText(QVariant(tovar.value("data_godnosti")).toString());
ui->lineEdit_9->setText(QVariant(tovar.value("gtd")).toString());
}

void esutb::on_tableView_5_clicked(const QModelIndex &index)
{
    id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
    //zapolnenie(id_ch);
      zapolnenie_tovar_sverka(id_ch);
}

void esutb::on_tabWidget_currentChanged(int index)
{
     //QQmlApplicationEngine engine;
//  QWebEngineView *view = new QWebEngineView();
//    webWeiw.load(QUrl("https://честныйзнак.рф/"));
}

void esutb::on_pushButton_6_clicked()
{
    ui->widget->load(QUrl("https://ismotp.crptech.ru/login-kep"));
   // ui->widget->load(QUrl("https://mail.ru"));
    ui->widget->show();
}
void esutb::keyPressEvent(QKeyEvent *event)
{
if (ui->tabWidget->currentIndex ()==1)
  {
      qDebug() << event->key();
      if ((event->key()>=Qt::Key_0 && event->key()<=Qt::Key_9)     //Цифровые клавиши 0..9
              || (event->key() >=65 && event->key() <=122)         //Англ буквы
              || (event->key() >=1040 && event->key() <=1071)) {   //Русские буквы
          //Здесь собираем Barcode
          QString str = QString(event->key());//qDebug() <<str;
          Barcode = Barcode+str; //в глобальную переменную складываем цифры и буквы АМ
      }

      //Перемещение по строкам для выбора Товара
      if (event->key() == Qt::Key_Enter) {
         qDebug() << event->key()<< "Штрих код получен";
         ui->label_32->setText(Barcode);

          find_AM();
      }

  //    // кнопка Выбор
  //    if (event->key() == Qt::Key_Enter || event->key( )== Qt::Key_Return){
  //        on_select_clicked();
  //    }
      // кнопка Отмена
      if (event->key() == Qt::Key_Escape){
       //   close();
      }

      /*
      if (event->key()==13)
      { qDebug() << "11111";}
      switch (event->key())
      {


    case Qt::Key_Up:
        qDebug() <<"Вы выбрали вверх ";
        break;
    case Qt::Key_Down:
      {
          qDebug() <<"Вы выбрали ввниз ";

        QPixmap pixmap1("tux3.png");

        ui->label_33->setPixmap(pixmap1);
         pixmap1.load("tux4.png");
        ui->label_34->setPixmap(pixmap1);
         ui->label_32->setText("ВНИМАНИЕ ТОВАР НЕ ОПОЗНАН");

            break;}
    case Qt::Key_Left:
        qDebug() <<"Вы выбрали влево ";
        break;
    case Qt::Key_Right:
         qDebug() <<"Вы выбрали вправо ";
        break;
    case Qt::Key_Enter:
         qDebug() <<"Вы выбрали Ентер ";

         QPixmap pixmap("tux.png");

         ui->label_33->setPixmap(pixmap);
         pixmap.load("tux2.png");
         ui->label_34->setPixmap(pixmap);
         ui->label_32->setText("Сигареты  марка KENT, пр-во Китай");
        break;
    }*/
  }
}

void esutb::on_pushButton_7_clicked()
{
    xml_ttn* pp= new xml_ttn;
    //Load_xml *LX =new Load_xml;
    //pp->GoodCod((ui->code_edit->text().toInt()),good_barcode,sostav);
    pp->getXML();
}

void esutb::on_pushButton_10_clicked()
{
    qDebug() << "Выводим, форму ";
}

void esutb::on_pushButton_9_clicked()
{

    izlish *w = new izlish ;
 //   izlish s;
    w->show();


    // upload_xml* pp= new upload_xml;
    //Load_xml *LX =new Load_xml;
    //pp->GoodCod((ui->code_edit->text().toInt()),good_barcode,sostav);
    // pp->xml_form();
    //obnov();
}

void esutb::on_pushButton_11_clicked()
{
    spisanie *h = new spisanie ;
   //izlish s;
    h->show();
   //upload_xml* pp= new upload_xml;
   //Load_xml *LX =new Load_xml;
   //pp->GoodCod((ui->code_edit->text().toInt()),good_barcode,sostav);
   // pp->xml_spisanie();
}

void esutb::on_pushButton_8_clicked()
{
    upload_xml* pp= new upload_xml;
     //Load_xml *LX =new Load_xml;
     //pp->GoodCod((ui->code_edit->text().toInt()),good_barcode,sostav);
     pp->xml_agr();
}
void esutb::obnov()
{
    zapros_upd->setQuery(" SELECT upd_tabak.ID,upd_tabak.Nomer as Nomer,kontragents.ShortName as Kont,upd_tabak.data as DATA,upd_tabak.Summa as Summa FROM upd_tabak LEFT JOIN kontragents ON upd_tabak.id_kontr = kontragents.id ");
  //
   //    zapros_upd->setQuery("SELECT * FROM bill ");

      // ui->tableView->setModel( zapros_upd);
qDebug() << "Заходим! выполняем ";
       //
           ui->tableView->setModel(zapros_upd);     // Устанавливаем модель на TableView
           ui->tableView->setColumnHidden(0, true);    // Скрываем колонку с id записей
           // Разрешаем выделение строк
           ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
           // Устанавливаем режим выделения лишь одно строки в таблице
           ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
           // Устанавливаем размер колонок по содержимому
           ui->tableView->resizeColumnsToContents();
           ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
           ui->tableView->horizontalHeader()->setStretchLastSection(true);
          // количество колонок
           ui->tableView->hideColumn(4);
           ui->tableView->setAlternatingRowColors(true);

     // ui->tableView->setColumnHidden( zapros_upd->(), true);
       zapros_upd->setHeaderData(1, Qt::Horizontal, tr("Номер Счет фактуры"));//
       zapros_upd->setHeaderData(2, Qt::Horizontal, tr("Контрагент"));
       zapros_upd->setHeaderData(3, Qt::Horizontal, tr("Дата"));
       zapros_upd->setHeaderData(4, Qt::Horizontal, tr("Сумма"));
    \
}

void esutb::on_lineEdit_editingFinished()
{ QString st=ui->lineEdit->text();
   st=st.trimmed();
   qDebug() << st;

   if (st.length()>=1)

{  // like '%слово%'.
    zapros_upd->setQuery(" SELECT upd_tabak.ID,upd_tabak.Nomer as Nomer,kontragents.ShortName as Kont,upd_tabak.data as DATA,upd_tabak.Summa as Summa FROM upd_tabak LEFT JOIN kontragents ON upd_tabak.id_kontr = kontragents.id where nomer=='"+st+"'");

    ui->tableView->setModel(zapros_upd);     // Устанавливаем модель на TableView
    ui->tableView->setColumnHidden(0, true);    // Скрываем колонку с id записей
    // Разрешаем выделение строк
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем режим выделения лишь одно строки в таблице
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Устанавливаем размер колонок по содержимому
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
   // количество колонок
    ui->tableView->hideColumn(4);
    ui->tableView->setAlternatingRowColors(true);

// ui->tableView->setColumnHidden( zapros_upd->(), true);
zapros_upd->setHeaderData(1, Qt::Horizontal, tr("Номер Счет фактуры"));//
zapros_upd->setHeaderData(2, Qt::Horizontal, tr("Контрагент"));
zapros_upd->setHeaderData(3, Qt::Horizontal, tr("Дата"));
zapros_upd->setHeaderData(4, Qt::Horizontal, tr("Сумма"));
   }
   else {
       obnov();
   }



}
// Поиск по баркоду
void esutb::find_AM()   {
    Barcode = egaisReplace(Barcode);// перевод из рус. букв в англ.
    qDebug() <<"Ищем АМ " << Barcode;

    QSqlQuery query_findAM("SELECT kod_tov, status FROM upd_tabak_tab WHERE kod_tov='"+Barcode+"' AND status='проверен'");
    if(query_findAM.next()){
        if(query_findAM.value(1).toInt() > 0){
            QMessageBox::information(0, "Сообщение","Этот,  Товар был проверен. ");
            Barcode.clear();
            return;
        }
        FindAM++;
       // ui->label_4->setText(QString::number(FindAM));
        QSqlQuery query_tovar("SELECT id_UPD,name FROM upd_tabak_tab WHERE `kod_tov`='" + query_findAM.value(0).toString() + "'");
        query_tovar.next();

        QPixmap pixmap("tux.png");
        ui->label_33->setPixmap(pixmap);
        pixmap.load("tux2.png");
        ui->label_34->setPixmap(pixmap);
        ui->label_32->setText(query_tovar.value(1).toString());

        //
        id_ch=query_tovar.value(0).toInt();
        zapolnenie(id_ch);
        zapolnenie_tovar(id_ch);

        //ui->label_name->setText(query_tovar.value(0).toString());
      //  ui->label_find->setText("НАЙДЕНА");
    //    ui->label_find->setStyleSheet("QLabel { color: green }");
        QSqlQuery query_up("UPDATE `upd_tabak_tab` SET `status`='проверен' WHERE `kod_tov`='"+Barcode+"'");

        if(FindAM == TotalAM){
         //   QSqlQuery query_upTTN("UPDATE `ttn` SET `hasAM`=2 WHERE WBRegId='"+WBRegId+"'");
            QMessageBox::information(0, "Сообщение","Найдены все Акцизные Марки ! ");
       //     emit UpdateTableTTN();
            close();
            //return;
        }
    }else{


         QPixmap pixmap1("tux3.png");
         ui->label_33->setPixmap(pixmap1);
         pixmap1.load("tux4.png");
         ui->label_34->setPixmap(pixmap1);
         ui->label_32->setText("ВНИМАНИЕ ТОВАР НЕ ОПОЗНАН");


  //      ui->label_name->setText("");
 //       ui->label_find->setText("НЕ НАЙДЕНА");
        //ui->label_find->setStyleSheet("QLabel { color: red }");
//        ui->label_find->setBackgroundRole(QPalette::WindowText ); //Qt::red
    }

    Barcode.clear();
}
// перевод из рус. букв в англ.
QString esutb::egaisReplace(QString str){
    str.replace("Я","Z");
    str.replace("Ч","X");
    str.replace("С","C");
    str.replace("М","V");
    str.replace("И","B");
    str.replace("Т","N");
    str.replace("Ь","M");
    str.replace("Ф","A");
    str.replace("Ы","S");
    str.replace("В","D");
    str.replace("А","F");
    str.replace("П","G");
    str.replace("Р","H");
    str.replace("О","J");
    str.replace("Л","K");
    str.replace("Д","L");
    str.replace("Й","Q");
    str.replace("Ц","W");
    str.replace("У","E");
    str.replace("К","R");
    str.replace("Е","T");
    str.replace("Н","Y");
    str.replace("Г","U");
    str.replace("Ш","I");
    str.replace("Щ","O");
    str.replace("З","P");

    return str;
}

void esutb::on_lineEdit_2_editingFinished()
{
    QString st=ui->lineEdit_2->text();
       st=st.trimmed();
       qDebug() << st;

       if (st.length()>=1)

    {  // like '%слово%'.
        QSqlQuery str2(" SELECT upd_tabak.ID,upd_tabak.Nomer as Nomer,kontragents.ShortName as Kont,upd_tabak.data as DATA,upd_tabak.Summa as Summa FROM upd_tabak LEFT JOIN kontragents ON upd_tabak.id_kontr = kontragents.id where nomer=='"+st+"'");
    str2.next();
      id_ch=str2.value("ID").toInt();
        zapolnenie_tovar_sverka(id_ch);
       }
       else {
         //  obnov();
       }
}

void esutb::on_lineEdit_10_editingFinished(QKeyEvent *event)
{
      qDebug() << event->key()<< "Штрих код получен";
     QString str1 = ui->lineEdit_10->text();
     if (event->key() == Qt::Key_Enter) {
        qDebug() << event->key()<< "Штрих код получен";
     QSqlQuery str3("SELECT name FROM upd_tabak_tab WHERE `kod_tov`='" + str1 + "'");
     str3.next();
     if(str3.value(1).toInt() > 0){
         QMessageBox::information(0, "Сообщение","Товар найден ");
        // Barcode.clear();
        // return;
     }
     else {
         QMessageBox::information(0, "Сообщение","Товар в базе не найден ");

     }
     }
}

void esutb::line_css()
{
    ui->lineEdit->setStyleSheet("QLineEdit{background-color: cornsilk;border: 2px outset darkgrey;border-radius: 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");
    ui->lineEdit_2->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;}");
    ui->lineEdit_3->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;}");
    ui->lineEdit_4->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;}");

   ui->comboBox->setStyleSheet("QComboBox{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");

   ui->dateEdit->setStyleSheet("QDateEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");
   ui->dateEdit_2->setStyleSheet("QDateEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");


  // ui->tableView->setStyleSheet("QTableView { background-color: cornsilk;border: 5px outset grey;background-color: grey;}");
   ui->tableView->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
   ui->tableView_2->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
   ui->tableView_3->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
   ui->tableView_4->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
   ui->tableView_5->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");

}
