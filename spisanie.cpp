#include "spisanie.h"
#include "ui_spisanie.h"
#include "esutb.h"
spisanie::spisanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::spisanie)
{
    ui->setupUi(this);
ui->widget->setVisible(false);
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

    QSqlQuery str("select max(id) from upd_tabak");
    str.last();
    idx1=str.value(0).toInt();
    idx1=idx1+1;
    qDebug() << idx1;

    obnov();

}

void spisanie::closeEvent(QCloseEvent *event)
{
   qDebug()<< "тест 1";
   esutb * pp= new esutb;
   pp->obnov();
}

spisanie::~spisanie()
{

    delete ui;
}
void spisanie::obnov()
{
    zapros_upd = new QSqlQueryModel();
    zapros_upd->setQuery("SELECT id,name,kol FROM upd_t1arh WHERE ID_UPD="+QVariant(idx1).toString());


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

void spisanie::on_pushButton_6_clicked()
{
  ui->widget->setVisible(true);
  zapros_upd->setQuery("SELECT id,name,kol FROM upd_tabak_tab");


  ui->tableView_2->setModel(zapros_upd);     // Устанавливаем модель на TableView
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
  ui->tableView_2->hideColumn(3);
  ui->tableView_2->setAlternatingRowColors(true);

// ui->tableView->setColumnHidden( zapros_upd->(), true);
zapros_upd->setHeaderData(1, Qt::Horizontal, tr("Название"));//
zapros_upd->setHeaderData(2, Qt::Horizontal, tr("Количество"));
//zapros_upd->setHeaderData(3, Qt::Horizontal, tr("Дата"));
//zapros_upd->setHeaderData(4, Qt::Horizontal, tr("Сумма"));
// zapros_upd->setHeaderData(5, Qt::Horizontal, tr("Сумма"));

}

void spisanie::on_pushButton_clicked()
{
    QSqlQuery str("DELETE FROM upd_t1arh where id="+QVariant(id_ch).toString());
    obnov();
}

void spisanie::on_tableView_clicked(const QModelIndex &index)
{
        id_ch=zapros_upd->data(zapros_upd->index(ui->tableView->currentIndex().row(), 0)).toInt();
}

void spisanie::on_pushButton_5_clicked()
{
   ui->widget->setVisible(false);
   obnov();
}

void spisanie::on_pushButton_4_clicked()
{
id_ch2=zapros_upd->data(zapros_upd->index(ui->tableView_2->currentIndex().row(), 0)).toInt();
QSqlQuery str ("INSERT INTO upd_t1arh SELECT * FROM upd_tabak_tab Where ID="+QVariant(id_ch2).toString());
QSqlQuery str2 ("UPDATE upd_t1arh set ID_UPD="+QVariant(idx1).toString()+" Where ID="+QVariant(id_ch2).toString());
qDebug() << id_ch2;
 //obnov();
}

void spisanie::on_pushButton_2_clicked()
{
    QString S1=ui->lineEdit->text();
    QString S2=ui->lineEdit_2->text();
    QString S3=ui->lineEdit_3->text();
    QString S4=ui->lineEdit_4->text();
    QString S ="Списание товара";

    QSqlQuery str("INSERT into  upd_tabak(name,nomer,data,naim_post,adres_mesto,status)  VALUES ('"+S+"','"+S3+"','"+S2+"','"+S4+"','"+S1+"','выгружено')");

    for (int i=0; i< ui->tableView->model()->rowCount();i++){
      ui->tableView->selectRow(i);
    //    str.setNum(n)
     id_ch2=zapros_upd->data(zapros_upd->index(i, 0)).toInt();
      qDebug()<<  id_ch2 << i << "На удаление" ;
       qDebug()<<   idx1 << "idx1" ;
   QSqlQuery str2 ("UPDATE upd_tabak_tab set ID_UPD="+QVariant(idx1).toString()+" Where ID="+QVariant(id_ch2).toString());

    }

    this->close();

}
