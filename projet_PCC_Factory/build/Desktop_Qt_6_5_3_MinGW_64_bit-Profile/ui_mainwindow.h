/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *search;
    QPushButton *add;
    QPushButton *filter;
    QStackedWidget *StackedWidget;
    QWidget *update_if;
    QLineEdit *cap;
    QLabel *label_32;
    QLabel *label_18;
    QLineEdit *totm;
    QLabel *label_33;
    QLineEdit *chi;
    QFrame *line_4;
    QLineEdit *tote;
    QPushButton *annuler_2;
    QPushButton *update_2;
    QLineEdit *loc;
    QLabel *label_34;
    QLabel *label_35;
    QWidget *modif;
    QPushButton *ajout_cl_2;
    QLabel *label_11;
    QGroupBox *groupBox_3;
    QLineEdit *search_2;
    QLabel *label_12;
    QPushButton *cancl;
    QWidget *principale;
    QLabel *num_c;
    QLabel *label_5;
    QPushButton *next;
    QPushButton *prev;
    QLabel *label_6;
    QComboBox *slide;
    QLabel *label_2;
    QPushButton *update;
    QPushButton *sup;
    QTableView *tableView;
    QWidget *suppression;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLineEdit *id_sup;
    QLabel *label_10;
    QPushButton *delete_2;
    QPushButton *cancel;
    QWidget *ajout;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *idf;
    QLineEdit *capacity;
    QLineEdit *tot_e;
    QLineEdit *tot_m;
    QLineEdit *idc;
    QLineEdit *location;
    QPushButton *ajout_cl;
    QPushButton *annuler;
    QFrame *line_3;
    QPushButton *pushButton_12;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_30;
    QPushButton *pushButton;
    QLabel *label_31;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1490, 764);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(280, 90, 1151, 621));
        groupBox->setStyleSheet(QString::fromUtf8("color:grey;\n"
"border-color:black;"));
        search = new QLineEdit(groupBox);
        search->setObjectName("search");
        search->setGeometry(QRect(10, 40, 161, 24));
        search->setStyleSheet(QString::fromUtf8("border-radius:20px;border-color:black;\n"
"QLineEdit{\n"
"border-raduis:15px;\n"
"}"));
        add = new QPushButton(groupBox);
        add->setObjectName("add");
        add->setGeometry(QRect(940, 40, 131, 24));
        add->setStyleSheet(QString::fromUtf8("background-color:rgb(27, 160, 25);\n"
"color:white;\n"
"QPushButton{\n"
"border-radius:15px;\n"
"}"));
        filter = new QPushButton(groupBox);
        filter->setObjectName("filter");
        filter->setGeometry(QRect(1080, 30, 61, 41));
        StackedWidget = new QStackedWidget(groupBox);
        StackedWidget->setObjectName("StackedWidget");
        StackedWidget->setGeometry(QRect(10, 80, 1121, 461));
        StackedWidget->setStyleSheet(QString::fromUtf8(""));
        update_if = new QWidget();
        update_if->setObjectName("update_if");
        cap = new QLineEdit(update_if);
        cap->setObjectName("cap");
        cap->setGeometry(QRect(120, 190, 251, 31));
        cap->setStyleSheet(QString::fromUtf8("color:black;"));
        label_32 = new QLabel(update_if);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(570, 260, 101, 20));
        label_18 = new QLabel(update_if);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(780, 40, 91, 20));
        totm = new QLineEdit(update_if);
        totm->setObjectName("totm");
        totm->setGeometry(QRect(770, 180, 251, 31));
        totm->setStyleSheet(QString::fromUtf8("color:black;"));
        label_33 = new QLabel(update_if);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(120, 40, 121, 20));
        chi = new QLineEdit(update_if);
        chi->setObjectName("chi");
        chi->setGeometry(QRect(470, 300, 251, 31));
        chi->setStyleSheet(QString::fromUtf8("color:black;"));
        line_4 = new QFrame(update_if);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(570, 60, 20, 161));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tote = new QLineEdit(update_if);
        tote->setObjectName("tote");
        tote->setGeometry(QRect(770, 70, 251, 31));
        tote->setStyleSheet(QString::fromUtf8("color:black;"));
        annuler_2 = new QPushButton(update_if);
        annuler_2->setObjectName("annuler_2");
        annuler_2->setGeometry(QRect(620, 370, 83, 29));
        update_2 = new QPushButton(update_if);
        update_2->setObjectName("update_2");
        update_2->setGeometry(QRect(500, 370, 83, 29));
        update_2->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(27, 160, 25);\n"
"color:white;\n"
"QPushButton{\n"
"border-radius:15px;\n"
"}"));
        loc = new QLineEdit(update_if);
        loc->setObjectName("loc");
        loc->setGeometry(QRect(120, 70, 251, 31));
        loc->setStyleSheet(QString::fromUtf8("color:black;"));
        label_34 = new QLabel(update_if);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(780, 150, 91, 20));
        label_35 = new QLabel(update_if);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(120, 160, 63, 20));
        StackedWidget->addWidget(update_if);
        modif = new QWidget();
        modif->setObjectName("modif");
        ajout_cl_2 = new QPushButton(modif);
        ajout_cl_2->setObjectName("ajout_cl_2");
        ajout_cl_2->setGeometry(QRect(420, 330, 83, 29));
        ajout_cl_2->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(27, 160, 25);\n"
"color:white;\n"
"QPushButton{\n"
"border-radius:15px;\n"
"}"));
        label_11 = new QLabel(modif);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(280, 0, 491, 101));
        label_11->setStyleSheet(QString::fromUtf8("font: 700 28pt \"Segoe UI\";\n"
"color:black;\n"
""));
        groupBox_3 = new QGroupBox(modif);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(320, 110, 421, 211));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        search_2 = new QLineEdit(groupBox_3);
        search_2->setObjectName("search_2");
        search_2->setGeometry(QRect(110, 110, 171, 31));
        search_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:20px;\n"
"border-color:black;\n"
"\n"
"border-raduis:15px;\n"
"}"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(110, 70, 141, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        cancl = new QPushButton(modif);
        cancl->setObjectName("cancl");
        cancl->setGeometry(QRect(580, 330, 83, 29));
        cancl->setStyleSheet(QString::fromUtf8("color:black;"));
        StackedWidget->addWidget(modif);
        principale = new QWidget();
        principale->setObjectName("principale");
        num_c = new QLabel(principale);
        num_c->setObjectName("num_c");
        num_c->setGeometry(QRect(590, 410, 63, 20));
        num_c->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Historic\";"));
        label_5 = new QLabel(principale);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(380, 410, 211, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color:grey;"));
        next = new QPushButton(principale);
        next->setObjectName("next");
        next->setGeometry(QRect(980, 410, 21, 21));
        prev = new QPushButton(principale);
        prev->setObjectName("prev");
        prev->setGeometry(QRect(950, 410, 21, 21));
        label_6 = new QLabel(principale);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 410, 63, 20));
        slide = new QComboBox(principale);
        slide->addItem(QString());
        slide->addItem(QString());
        slide->addItem(QString());
        slide->addItem(QString());
        slide->addItem(QString());
        slide->addItem(QString());
        slide->addItem(QString());
        slide->setObjectName("slide");
        slide->setGeometry(QRect(80, 410, 51, 28));
        label_2 = new QLabel(principale);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1040, 120, 49, 16));
        update = new QPushButton(principale);
        update->setObjectName("update");
        update->setGeometry(QRect(1020, 160, 80, 24));
        sup = new QPushButton(principale);
        sup->setObjectName("sup");
        sup->setGeometry(QRect(1020, 240, 80, 24));
        tableView = new QTableView(principale);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 30, 981, 351));
        tableView->setStyleSheet(QString::fromUtf8("color:black;"));
        StackedWidget->addWidget(principale);
        suppression = new QWidget();
        suppression->setObjectName("suppression");
        label_3 = new QLabel(suppression);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, -20, 491, 121));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 48pt \"Segoe UI\";\n"
"color:black;"));
        groupBox_2 = new QGroupBox(suppression);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(330, 110, 391, 281));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));
        id_sup = new QLineEdit(groupBox_2);
        id_sup->setObjectName("id_sup");
        id_sup->setGeometry(QRect(130, 130, 151, 21));
        id_sup->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 120, 71, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        delete_2 = new QPushButton(groupBox_2);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(80, 200, 80, 24));
        delete_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color:green;\n"
"color:white;"));
        cancel = new QPushButton(groupBox_2);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(210, 200, 80, 24));
        cancel->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";"));
        StackedWidget->addWidget(suppression);
        ajout = new QWidget();
        ajout->setObjectName("ajout");
        label_16 = new QLabel(ajout);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 30, 63, 20));
        label_17 = new QLabel(ajout);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(690, 30, 63, 20));
        label_26 = new QLabel(ajout);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(40, 140, 121, 20));
        label_27 = new QLabel(ajout);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(690, 140, 91, 20));
        label_28 = new QLabel(ajout);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(40, 260, 63, 20));
        label_29 = new QLabel(ajout);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(690, 250, 101, 20));
        idf = new QLineEdit(ajout);
        idf->setObjectName("idf");
        idf->setGeometry(QRect(40, 60, 251, 31));
        idf->setStyleSheet(QString::fromUtf8("color:black;"));
        capacity = new QLineEdit(ajout);
        capacity->setObjectName("capacity");
        capacity->setGeometry(QRect(680, 60, 251, 31));
        capacity->setStyleSheet(QString::fromUtf8("color:black;"));
        tot_e = new QLineEdit(ajout);
        tot_e->setObjectName("tot_e");
        tot_e->setGeometry(QRect(680, 170, 251, 31));
        tot_e->setStyleSheet(QString::fromUtf8("color:black;"));
        tot_m = new QLineEdit(ajout);
        tot_m->setObjectName("tot_m");
        tot_m->setGeometry(QRect(680, 290, 251, 31));
        tot_m->setStyleSheet(QString::fromUtf8("color:black;"));
        idc = new QLineEdit(ajout);
        idc->setObjectName("idc");
        idc->setGeometry(QRect(40, 190, 251, 31));
        idc->setStyleSheet(QString::fromUtf8("color:black;"));
        location = new QLineEdit(ajout);
        location->setObjectName("location");
        location->setGeometry(QRect(40, 310, 251, 31));
        location->setStyleSheet(QString::fromUtf8("color:black;"));
        ajout_cl = new QPushButton(ajout);
        ajout_cl->setObjectName("ajout_cl");
        ajout_cl->setGeometry(QRect(410, 360, 83, 29));
        ajout_cl->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(27, 160, 25);\n"
"color:white;\n"
"QPushButton{\n"
"border-radius:15px;\n"
"}"));
        annuler = new QPushButton(ajout);
        annuler->setObjectName("annuler");
        annuler->setGeometry(QRect(530, 360, 83, 29));
        line_3 = new QFrame(ajout);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(500, 50, 20, 281));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        StackedWidget->addWidget(ajout);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(1220, 30, 41, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 30, 261, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"font: 36pt \"Segoe UI\";"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(1280, 30, 151, 41));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 271, 611));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(verticalLayoutWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 460, 61, 51));
        label_9->setStyleSheet(QString::fromUtf8("image:url(:/client/clients.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 310, 271, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("backgrounfd-color:grey;\n"
"font: 10pt \"Segoe UI\";"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 190, 51, 41));
        label_8->setStyleSheet(QString::fromUtf8("image:url(:/dashboard/dashboard.png);"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 450, 271, 71));
        pushButton_6->setStyleSheet(QString::fromUtf8("backgrounfd-color:grey;\n"
"font: 10pt \"Segoe UI\";"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 380, 271, 71));
        pushButton_5->setStyleSheet(QString::fromUtf8("backgrounfd-color:grey;\n"
"font: 10pt \"Segoe UI\";"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 20, 241, 101));
        label_4->setStyleSheet(QString::fromUtf8("image:url(:/logo/logo.png);\n"
"font: 36pt \"Segoe UI\";\n"
"image-size:50px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 240, 271, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("backgrounfd-color:grey;\n"
"font: 10pt \"Segoe UI\";"));
        label_30 = new QLabel(frame);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(40, 240, 51, 71));
        label_30->setStyleSheet(QString::fromUtf8("image:url(:/employees/employees.png);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 170, 271, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font:rgb(134, 134, 134);\n"
"font: 10pt \"Segoe UI\";\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	/* Candidates */\n"
"\n"
"width: 220px;\n"
"height: 50px;\n"
"\n"
"\n"
"/* Inside auto layout */\n"
"flex: none;\n"
"order: 9;\n"
"flex-grow: 0;\n"
"\n"
"\n"
"/* Rectangle 42 */\n"
"\n"
"position: absolute;\n"
"width: 220px;\n"
"height: 50px;\n"
"left: 0px;\n"
"top: 300px;\n"
"\n"
"/* Primary/Primary-5% */\n"
"background: rgba(113, 82, 243, 0.05);\n"
"border-radius: 0px 10px 10px 0px;\n"
"\n"
"\n"
"/* Huge-icon/user/solid/users 01 */\n"
"\n"
"position: absolute;\n"
"left: 8.64%;\n"
"right: 80.45%;\n"
"top: 89.43%;\n"
"bottom: 3.71%;\n"
"\n"
"\n"
"\n"
"/* user */\n"
"\n"
"position: absolute;\n"
"width: 18px;\n"
"height: 18px;\n"
"left: 3px;\n"
"top: 3px;\n"
"\n"
"\n"
"\n"
"/* combo shape */\n"
"\n"
"position: absolute;\n"
"width: 18px;\n"
"height: 18px;\n"
"left: 3px;\n"
"top: 3px;\n"
"\n"
"background: #1BA019;\n"
"\n"
"\n"
"/* Ellipse 293 */\n"
"\n"
"position: absolute;\n"
"left: 12.5%;\n"
"r"
                        "ight: 29.17%;\n"
"top: 54.17%;\n"
"bottom: 12.5%;\n"
"\n"
"/* Dark */\n"
"background: #28303F;\n"
"/* Dark-500 */\n"
"border: 1.5px solid #16151C;\n"
"\n"
"\n"
"/* Ellipse 294 */\n"
"\n"
"position: absolute;\n"
"left: 25%;\n"
"right: 41.67%;\n"
"top: 12.5%;\n"
"bottom: 54.17%;\n"
"\n"
"/* Dark */\n"
"background: #28303F;\n"
"/* Dark-500 */\n"
"border: 1.5px solid #16151C;\n"
"\n"
"\n"
"/* Subtract */\n"
"\n"
"position: absolute;\n"
"left: 58.17%;\n"
"right: 25%;\n"
"top: 20.84%;\n"
"bottom: 54.17%;\n"
"\n"
"/* Dark-500 */\n"
"background: #16151C;\n"
"\n"
"\n"
"/* Subtract */\n"
"\n"
"position: absolute;\n"
"left: 66.19%;\n"
"right: 12.5%;\n"
"top: 54.31%;\n"
"bottom: 22.7%;\n"
"\n"
"/* Dark-500 */\n"
"background: #16151C;\n"
"\n"
"\n"
"/* Clients */\n"
"\n"
"position: absolute;\n"
"width: 151px;\n"
"height: 24px;\n"
"left: 59px;\n"
"top: 313px;\n"
"\n"
"/* Body-1 Bold */\n"
"font-family: 'Lexend';\n"
"font-style: normal;\n"
"font-weight: 600;\n"
"font-size: 16px;\n"
"line-height: 24px;\n"
"/* identical to box "
                        "height, or 150% */\n"
"\n"
"color: #1BA019;\n"
"\n"
"\n"
"\n"
"/* Rectangle 7 */\n"
"\n"
"position: absolute;\n"
"width: 3px;\n"
"height: 50px;\n"
"left: 0px;\n"
"top: 300px;\n"
"\n"
"background: #1BA019;\n"
"border-radius: 10px;\n"
"\n"
"\n"
"}"));
        label_31 = new QLabel(frame);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(40, 390, 61, 51));
        label_31->setStyleSheet(QString::fromUtf8("image:url(:/delivery/deliveries.png);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 320, 71, 51));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/factories/factories.png);"));
        pushButton_6->raise();
        pushButton->raise();
        label_9->raise();
        pushButton_4->raise();
        label_8->raise();
        pushButton_5->raise();
        label_4->raise();
        pushButton_2->raise();
        label_30->raise();
        label_31->raise();
        label_7->raise();

        verticalLayout_2->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1490, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        StackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Search", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+ Add new Factory", nullptr));
        filter->setText(QCoreApplication::translate("MainWindow", "\342\230\260 Filter", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Chef ID", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Total Eployees", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        annuler_2->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        update_2->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Total Machines", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Capacity", nullptr));
        ajout_cl_2->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Update Factory informations", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Search icon", nullptr));
        search_2->setText(QString());
        search_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\360\237\224\215 Search", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "The Factory id", nullptr));
        cancl->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        num_c->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "All Condidates that we have is ", nullptr));
        next->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        prev->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Showing:", nullptr));
        slide->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        slide->setItemText(1, QCoreApplication::translate("MainWindow", "10", nullptr));
        slide->setItemText(2, QCoreApplication::translate("MainWindow", "15", nullptr));
        slide->setItemText(3, QCoreApplication::translate("MainWindow", "20", nullptr));
        slide->setItemText(4, QCoreApplication::translate("MainWindow", "25", nullptr));
        slide->setItemText(5, QCoreApplication::translate("MainWindow", "30", nullptr));
        slide->setItemText(6, QCoreApplication::translate("MainWindow", "35", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        sup->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Delete a Factory", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Factory Id", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Factory id", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Factory id", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Capacity", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Chef id", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Total employees", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "location", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Total machine", nullptr));
        ajout_cl->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        annuler->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\360\237\224\224", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Factory", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Sign out \360\237\224\223", nullptr));

        label_9->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Factory", nullptr));
        label_8->setText(QString());
#if QT_CONFIG(whatsthis)
        pushButton_6->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Delivery", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Employees", nullptr));
        label_30->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_31->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
