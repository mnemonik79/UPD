/********************************************************************************
** Form generated from reading UI file 'spisanie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPISANIE_H
#define UI_SPISANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spisanie
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QTableView *tableView_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *spisanie)
    {
        if (spisanie->objectName().isEmpty())
            spisanie->setObjectName(QString::fromUtf8("spisanie"));
        spisanie->resize(624, 418);
        QFont font;
        font.setPointSize(12);
        spisanie->setFont(font);
        centralwidget = new QWidget(spisanie);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(15, 90, 491, 211));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 10, 91, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 28, 61, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 48, 61, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 50, 47, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(105, 10, 201, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(105, 30, 201, 20));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(105, 50, 201, 20));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(390, 50, 161, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 312, 75, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 312, 101, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 312, 75, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 561, 231));
        widget->setAutoFillBackground(true);
        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(20, 40, 501, 151));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(26, 192, 91, 31));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 192, 91, 30));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 161, 21));
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 10, 81, 20));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 312, 91, 31));
        spisanie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(spisanie);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 624, 21));
        spisanie->setMenuBar(menubar);
        statusbar = new QStatusBar(spisanie);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        spisanie->setStatusBar(statusbar);

        retranslateUi(spisanie);

        QMetaObject::connectSlotsByName(spisanie);
    } // setupUi

    void retranslateUi(QMainWindow *spisanie)
    {
        spisanie->setWindowTitle(QApplication::translate("spisanie", "\320\241\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label->setText(QApplication::translate("spisanie", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("spisanie", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        label_3->setText(QApplication::translate("spisanie", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_4->setText(QApplication::translate("spisanie", "\320\224\320\260\321\202\320\260", nullptr));
        pushButton->setText(QApplication::translate("spisanie", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("spisanie", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("spisanie", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_4->setText(QApplication::translate("spisanie", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QApplication::translate("spisanie", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_5->setText(QApplication::translate("spisanie", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\272\320\276\320\264\321\203", nullptr));
        pushButton_6->setText(QApplication::translate("spisanie", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spisanie: public Ui_spisanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPISANIE_H
