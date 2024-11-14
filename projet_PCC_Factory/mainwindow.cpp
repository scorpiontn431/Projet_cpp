#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "factory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->StackedWidget->setCurrentWidget(ui->principale);
    ui->tableView->setModel(cl.afficher());

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::on_add_clicked);
    connect(ui->annuler, &QPushButton::clicked, this, &MainWindow::on_annuler_clicked);
    connect(ui->sup, &QPushButton::clicked, this, &MainWindow::on_sup_clicked);
    connect(ui->ajout_cl_2, &QPushButton::clicked, this, &MainWindow::on_ajout_cl_2_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->ajout);
}

void MainWindow::on_annuler_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->principale);
}

void MainWindow::on_sup_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->suppression);
}

void MainWindow::on_cancel_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->principale);
}

void MainWindow::on_update_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->modif);
}

// Search for the update and show old data
void MainWindow::on_ajout_cl_2_clicked()
{
    int idf = ui->search_2->text().toInt();

    // Check if the factory exists
    if (cl.search(idf) && cl.getFactoryData(idf)) {
        // Populate UI fields with the old data
        ui->chi->setText(QString::number(cl.getidc()));
        ui->totm->setText(QString::number(cl.gettot_m()));
        ui->tote->setText(QString::number(cl.gettot_e()));
        ui->cap->setText(QString::number(cl.getcapacity()));
        ui->loc->setText(cl.getlocation());

        // Switch to update page
        ui->StackedWidget->setCurrentWidget(ui->update_if);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Try another ID"),
                              QObject::tr("ERROR 404.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

// Modification of information
void MainWindow::on_update_2_clicked()
{
    int idf = ui->search_2->text().toInt();
    int idc = ui->chi->text().toInt();
    int tot_m = ui->totm->text().toInt();
    int tot_e = ui->tote->text().toInt();
    int capacity = ui->cap->text().toInt();
    QString location = ui->loc->text();

    bool test = cl.update(idf, idc, tot_e, tot_m, capacity, location);
    if (test) {
        ui->tableView->setModel(cl.afficher());
        QMessageBox::information(nullptr, QObject::tr("Update"),
                                 QObject::tr("Updated successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Won't be Updated"),
                              QObject::tr("ERROR 404.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_cancl_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->principale);
}

void MainWindow::on_annuler_2_clicked()
{
    ui->StackedWidget->setCurrentWidget(ui->principale);
}

// Deleting an item from the database
void MainWindow::on_delete_2_clicked()
{
    int id = ui->id_sup->text().toInt();

    bool test = cl.supprimer(id);
    if (test) {
        ui->tableView->setModel(cl.afficher());
        QMessageBox::information(nullptr, QObject::tr("Delete"),
                                 QObject::tr("The item was deleted successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Won't be Deleted"),
                              QObject::tr("ERROR 404.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_ajout_cl_clicked()
{
    int idf = ui->idf->text().toInt();
    int idc = ui->idc->text().toInt();
    int tot_m = ui->tot_m->text().toInt();
    int tot_e = ui->tot_e->text().toInt();
    int capacity = ui->capacity->text().toInt();
    QString location = ui->location->text();

    factory c(idf, idc, tot_e, tot_m, capacity, location);
    bool test = c.ajouter();
    if (test) {
        ui->tableView->setModel(cl.afficher());
        QMessageBox::information(nullptr, QObject::tr("Add Successful"),
                                 QObject::tr("Client added successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Won't be added"),
                              QObject::tr("ERROR 404.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}
