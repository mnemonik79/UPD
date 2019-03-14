/********************************************************************************
** Form generated from reading UI file 'izlish.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IZLISH_H
#define UI_IZLISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_izlish
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_15;
    QLabel *label_15;
    QLineEdit *lineEdit_16;
    QSplitter *splitter_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView;
    QSplitter *splitter;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSplitter *splitter_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QSplitter *splitter_3;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *izlish)
    {
        if (izlish->objectName().isEmpty())
            izlish->setObjectName(QString::fromUtf8("izlish"));
        izlish->setWindowModality(Qt::WindowModal);
        izlish->resize(1024, 567);
        izlish->setMinimumSize(QSize(1024, 567));
        izlish->setMaximumSize(QSize(1024, 567));
        izlish->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(izlish);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 541, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 208, 851, 261));
        widget->setAutoFillBackground(true);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 35, 191, 21));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 63, 151, 21));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 85, 101, 31));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 110, 111, 31));
        lineEdit_11 = new QLineEdit(widget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(220, 40, 181, 20));
        lineEdit_12 = new QLineEdit(widget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(220, 63, 181, 20));
        lineEdit_13 = new QLineEdit(widget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(220, 89, 181, 20));
        lineEdit_15 = new QLineEdit(widget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(220, 113, 181, 21));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 137, 61, 31));
        lineEdit_16 = new QLineEdit(widget);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(220, 139, 181, 20));
        splitter_4 = new QSplitter(widget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(40, 190, 281, 41));
        splitter_4->setOrientation(Qt::Horizontal);
        pushButton_5 = new QPushButton(splitter_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        splitter_4->addWidget(pushButton_5);
        pushButton_6 = new QPushButton(splitter_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        splitter_4->addWidget(pushButton_6);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 208, 981, 261));
        tableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { border-width: 2px; background-color:linen;border-radius: 4px;    border-color: green;border: 3px outset grey;font: bold 12px; width: 1em;height: 15px ; padding: 3px;}\n"
"QTableView QTableCornerButton::section { border: 2px outset cornsilk;background-color: cornsilk;}"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(8, 55, 141, 141));
        splitter->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter->addWidget(label_3);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter->addWidget(label_4);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter->addWidget(label_5);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(150, 53, 481, 131));
        splitter_2->setOrientation(Qt::Vertical);
        lineEdit_3 = new QLineEdit(splitter_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        splitter_2->addWidget(lineEdit_3);
        lineEdit_4 = new QLineEdit(splitter_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        splitter_2->addWidget(lineEdit_4);
        lineEdit = new QLineEdit(splitter_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        splitter_2->addWidget(lineEdit);
        lineEdit_2 = new QLineEdit(splitter_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        splitter_2->addWidget(lineEdit_2);
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(20, 470, 431, 41));
        splitter_3->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter_3->addWidget(pushButton);
        pushButton_7 = new QPushButton(splitter_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        splitter_3->addWidget(pushButton_7);
        pushButton_2 = new QPushButton(splitter_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        splitter_3->addWidget(pushButton_2);
        izlish->setCentralWidget(centralwidget);
        pushButton_7->raise();
        tableView->raise();
        label_5->raise();
        lineEdit_2->raise();
        pushButton_2->raise();
        label_3->raise();
        label->raise();
        lineEdit->raise();
        label_4->raise();
        lineEdit_4->raise();
        lineEdit_3->raise();
        label_2->raise();
        pushButton->raise();
        widget->raise();
        menubar = new QMenuBar(izlish);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        izlish->setMenuBar(menubar);
        statusbar = new QStatusBar(izlish);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        izlish->setStatusBar(statusbar);

        retranslateUi(izlish);

        QMetaObject::connectSlotsByName(izlish);
    } // setupUi

    void retranslateUi(QMainWindow *izlish)
    {
        izlish->setWindowTitle(QCoreApplication::translate("izlish", "\320\222\320\262\320\276\320\264 \320\270\320\267\320\273\320\270\321\210\320\272\320\276\320\262 \320\277\321\200\320\276\320\264\321\203\320\272\321\206\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("izlish", "<html><head/><body><p align=\"center\"><span style=\" font-family:'sans-serif';\">\320\237\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\270\320\267\320\273\320\270\321\210\320\272\320\276\320\262 \321\202\320\260\320\261\320\260\321\207\320\275\320\276\320\271 \320\277\321\200\320\276\320\264\321\203\320\272\321\206\320\270\320\270 \320\275\320\260 \320\261\320\260\320\273\320\260\320\275\321\201</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("izlish", "\320\235\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("izlish", "\320\232\320\276\320\264 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("izlish", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_14->setText(QCoreApplication::translate("izlish", "\320\250\321\202\321\200\320\270\321\205 \320\272\320\276\320\264", nullptr));
        label_15->setText(QCoreApplication::translate("izlish", "\320\246\320\265\320\275\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("izlish", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("izlish", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("izlish", "\320\237\320\276\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("izlish", "\320\220\320\264\321\200\320\265\321\201 \320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("izlish", "\320\235\320\276\320\274\320\265\321\200 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("izlish", "\320\224\320\260\321\202\320\260 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("izlish", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("izlish", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("izlish", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class izlish: public Ui_izlish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IZLISH_H
