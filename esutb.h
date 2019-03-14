#ifndef ESUTB_H
#define ESUTB_H
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>
#include <QMainWindow>
#include <QFileDialog>
#include "load_xml.h"
#include "xml_ttn.h"
#include "upload_xml.h"
#include <QUrl>
#include <QtWebEngine/qtwebengineglobal.h>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QGuiApplication>
#include "tabbar.h"
//#include <QWebEngineView>
namespace Ui {
class esutb;
}

class esutb : public QMainWindow
{
    Q_OBJECT

public:
    explicit esutb(QWidget *parent = nullptr);
    ~esutb();
      QSqlQueryModel *zapros_upd;
       QSqlQueryModel *zapros_upd1;
      QSqlQueryModel *zapros_kontr;
        QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
        QString Barcode;
        int TotalAM = 0, FindAM = 0;
        QString WBRegId;
        void obnov();
protected:
   virtual void keyPressEvent(QKeyEvent *event);
private slots:
     void on_tableView_clicked(const QModelIndex &index);

     void on_tableView_doubleClicked(const QModelIndex &index);
     void zapolnenie(int idx);
     void zapolnenie_tovar(int idx);
      void zapolnenie_tovar_sverka(int idx);
     void on_tabWidget_2_currentChanged(int index);

     void on_pushButton_3_clicked();

     void on_pushButton_2_clicked();

     void on_pushButton_4_clicked();

     void on_pushButton_clicked();

     void on_pushButton_5_clicked();

     void on_tableView_5_clicked(const QModelIndex &index);

     void on_tabWidget_currentChanged(int index);

     void on_pushButton_6_clicked();

     void on_pushButton_7_clicked();

     void on_pushButton_10_clicked();

     void on_pushButton_9_clicked();

     void on_pushButton_11_clicked();

     void on_pushButton_8_clicked();

     void on_lineEdit_editingFinished();
     void find_AM();
     QString egaisReplace(QString str);
     void on_lineEdit_2_editingFinished();

     void on_lineEdit_10_editingFinished(QKeyEvent *event);
     void line_css();
private:
    Ui::esutb *ui;
    int id_ch;
};

#endif // ESUTB_H
