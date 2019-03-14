#include "izlish.h"
#include "ui_izlish.h"
#include "esutb.h"
izlish::izlish(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::izlish)
{
    ui->setupUi(this);
ui->widget->setVisible(false);


//https://server131.hosting.reg.ru/
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
QSqlQuery str("select max(id) from upd_tabak");
str.last();
idx1=str.value(0).toInt();
idx1=idx1+1;
qDebug() << idx1;
line_css();
obnov();
}

izlish::~izlish()
{

        delete ui;
}


void izlish::closeEvent(QCloseEvent *event)
{
   qDebug()<< "тест 1";
   esutb * pp= new esutb;
   pp->obnov();
}



void izlish::on_pushButton_clicked()
{
    ui->widget->setVisible(true);
}

void izlish::on_pushButton_5_clicked()
{ // `query` (`type`,`hash`,`mac`,`name`,`hash_string`,`company`)
QString S1=ui->lineEdit_11->text();
QString S2=ui->lineEdit_12->text();
QString S3=ui->lineEdit_13->text();
QString S4=ui->lineEdit_15->text();
QString S5=ui->lineEdit_16->text();

   // QSqlQuery str("INSERT into  upd_tabak_tab(kol,name,prace,kod_tov)  VALUES ('"+S3+"','"+S1+"','"+S5+"','"+S2+"')");
QSqlQuery str("INSERT into  upd_tabak_tab(kol,name,price,kod_tov,ID_Upd)  VALUES ('"+S3+"','"+S1+"','"+S5+"','"+S4+"',"+QVariant(idx1).toString()+")");
//str.exec();
// qDebug() << "ТЕСТ";
 ui->widget->setVisible(false);
 obnov();
}

void izlish::on_pushButton_7_clicked()
{   QString S="Постановка на баланс";
    QString S1=ui->lineEdit->text();
    QString S2=ui->lineEdit_2->text();
    QString S3=ui->lineEdit_3->text();
    QString S4=ui->lineEdit_4->text();
   // QString S5=ui->lineEdit_16->text();

    QSqlQuery str("INSERT into  upd_tabak(name,nomer,data,naim_post,adres_mesto,status)  VALUES ('"+S+"','"+S3+"','"+S2+"','"+S4+"','"+S1+"','выгружено')");
    this->close();
}

void izlish::on_pushButton_6_clicked()
{
      ui->widget->setVisible(false);
}
void izlish::obnov()
{
    zapros_upd = new QSqlQueryModel();
    zapros_upd->setQuery("SELECT id,name,kol FROM upd_tabak_tab WHERE ID_UPD="+QVariant(idx1).toString());


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
    ui->tableView->hideColumn(3);
    ui->tableView->setAlternatingRowColors(true);

  // ui->tableView->setColumnHidden( zapros_upd->(), true);
  zapros_upd->setHeaderData(1, Qt::Horizontal, tr("Название"));//
  zapros_upd->setHeaderData(2, Qt::Horizontal, tr("Количество"));
  //zapros_upd->setHeaderData(3, Qt::Horizontal, tr("Дата"));
  //zapros_upd->setHeaderData(4, Qt::Horizontal, tr("Сумма"));
  // zapros_upd->setHeaderData(5, Qt::Horizontal, tr("Сумма"));

}

void izlish::on_tableView_clicked(const QModelIndex &index)
{
      id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
}

void izlish::on_pushButton_2_clicked()
{
    QSqlQuery str("DELETE FROM upd_tabak_tab where id="+QVariant(id_ch).toString());
    obnov();
    }
void izlish::line_css()
{
    ui->lineEdit->setStyleSheet("QLineEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_2->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_3->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_4->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");


    ui->lineEdit_11->setStyleSheet("QLineEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_12->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_13->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_15->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");
    ui->lineEdit_16->setStyleSheet("QLineEdit{background-color: cornsilk;border: 1px outset darkgrey;font: bold 10px;color:Dodgerblue;}");



  // ui->comboBox->setStyleSheet("QComboBox{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");

 //  ui->dateEdit->setStyleSheet("QDateEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");
  // ui->dateEdit_2->setStyleSheet("QDateEdit{background-color: cornsilk;border: 2px outset darkgrey;font: bold 10px;border-color: gold;font: bold 10px;border-color: grey;color:Dodgerblue;}");


  // ui->tableView->setStyleSheet("QTableView { background-color: cornsilk;border: 5px outset grey;background-color: grey;}");
   ui->tableView->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
 //  ui->tableView_2->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
 //  ui->tableView_3->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
 //  ui->tableView_4->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");
 //  ui->tableView_5->setStyleSheet("QTableView { background-color: cornsilk;border: 0px ;}QHeaderView::section { border-width: 2px;border-radius: 4px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 3px;}QTableView QTableCornerButton::section { border: 0px outset cornsilk;background-color: cornsilk;}");

   ui->pushButton->setStyleSheet("  background-color"
                                 ": cornsilk; border-style: outset; border-width: 2px;"
                                 "border-radius: 10px;    border-color: grey;"
                                 "  font: bold 12px; min-width: 8em; padding: 6px;");

   ui->pushButton_2->setStyleSheet("  background-color"
                                 ": cornsilk; border-style: outset; border-width: 2px;"
                                 "border-radius: 10px;    border-color: grey;"
                                 "  font: bold 12px; min-width: 8em; padding: 6px;");
   ui->pushButton_5->setStyleSheet("  background-color"
                                 ": cornsilk; border-style: outset; border-width: 2px;"
                                 "border-radius: 10px;    border-color: grey;"
                                 "  font: bold 12px; min-width: 8em; padding: 6px;");
   ui->pushButton_6->setStyleSheet("  background-color"
                                 ": cornsilk; border-style: outset; border-width: 2px;"
                                 "border-radius: 10px;    border-color: grey;"
                                 "  font: bold 12px; min-width: 8em; padding: 6px;");
   ui->pushButton_7->setStyleSheet("  background-color"
                                 ": cornsilk; border-style: outset; border-width: 2px;"
                                 "border-radius: 10px;    border-color: grey;"
                                 "  font: bold 12px; min-width: 8em; padding: 6px;");


   ui->label->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_2->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_3->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_4->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_5->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");

   ui->label_11->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_12->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_13->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_14->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
   ui->label_15->setStyleSheet("QLabel{background-color: rgba(219, 219, 219, 80);border: 0px outset darkgrey;font: bold 12px;}");
 //  ui->tableView->setStyleSheet("QHeaderView::section { border-width: 4px;border-radius: 5px;    border-color: grey;font: bold 12px; width: 1em;height: 23px ; padding: 8px;}");
 ui->tableView->setStyleSheet("QTableView { background-color: cornsilk;border-color: black;border: 3px outset grey; }QHeaderView::section { border-width: 2px; background-color: black;border-radius: 4px;    border-color: grey;border: 3px outset grey;font: bold 12px; width: 1em;height: 23px ; padding: 4px;}QTableView QTableCornerButton::section { border: 2px outset cornsilk;background-color: grey;}");




}
