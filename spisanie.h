#ifndef SPISANIE_H
#define SPISANIE_H

#include <QMainWindow>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>


namespace Ui {
class spisanie;
}

class spisanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit spisanie(QWidget *parent = nullptr);
    ~spisanie();
  QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
  int idx1,id_ch,id_ch2;
  void obnov();
  QSqlQueryModel *zapros_upd;

private slots:
  void on_pushButton_6_clicked();

  void on_pushButton_clicked();

  void on_tableView_clicked(const QModelIndex &index);

  void on_pushButton_5_clicked();

  void on_pushButton_4_clicked();

  void on_pushButton_2_clicked();

private:
    Ui::spisanie *ui;
protected:
    void closeEvent(QCloseEvent *event);
};

#endif // SPISANIE_H
