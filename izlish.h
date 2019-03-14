#ifndef IZLISH_H
#define IZLISH_H

#include <QMainWindow>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>

namespace Ui {
class izlish;
}

class izlish : public QMainWindow
{
    Q_OBJECT

public:
    explicit izlish(QWidget *parent = nullptr);
    ~izlish();
       QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
       int idx1, id_ch;
        QSqlQueryModel *zapros_upd;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();
    void obnov();
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();
   void line_css();
private:
    Ui::izlish *ui;
protected:
    void closeEvent(QCloseEvent *event);
};

#endif // IZLISH_H
