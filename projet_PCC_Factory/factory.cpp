#include "factory.h"
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QRegularExpression>
#include <QSqlQueryModel>
#include "connection.h"

factory::factory(int idf, int idc, int tot_e, int tot_m, int capacity, QString location) {
    this->idf = idf;
    this->idc = idc;
    this->tot_e = tot_e;
    this->tot_m = tot_m;
    this->capacity = capacity;
    this->location = location;
}

bool factory::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO FACTORY (FACTORY_ID, LOCATION, CAPACITY, TOTAL_EMPLOYEES, TOTAL_MACHINES, CHEF_ID) "
                  "VALUES (:idf, :location, :capacity, :tot_e, :tot_m, :idc)");
    query.bindValue(":idf", idf);
    query.bindValue(":location", location);
    query.bindValue(":capacity", capacity);
    query.bindValue(":tot_e", tot_e);
    query.bindValue(":tot_m", tot_m);
    query.bindValue(":idc", idc);

    return query.exec();
}

QSqlQueryModel* factory::afficher() {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FACTORY");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("FACTORY_ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("LOCATION"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CAPACITY"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TOTAL_EMPLOYEES"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TOTAL_MACHINES"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CHEF_ID"));
    return model;
}

bool factory::supprimer(int idf) {
    QSqlQuery query;
    query.prepare("DELETE FROM FACTORY WHERE FACTORY_ID = :idf");
    query.bindValue(":idf", idf);
    return query.exec();
}

bool factory::search(int idf) {
    QSqlQuery query;
    query.prepare("SELECT * FROM FACTORY WHERE FACTORY_ID = :idf");
    query.bindValue(":idf", idf);
    return query.exec();
}

bool factory::update(int idf, int idc, int tot_e, int tot_m, int capacity, QString location) {
    QSqlQuery query;
    query.prepare("UPDATE FACTORY SET LOCATION=:location, CAPACITY=:capacity, TOTAL_EMPLOYEES=:tot_e, TOTAL_MACHINES=:tot_m, CHEF_ID=:idc "
                  "WHERE FACTORY_ID = :idf");
    query.bindValue(":idf", idf);
    query.bindValue(":idc", idc);
    query.bindValue(":tot_e", tot_e);
    query.bindValue(":tot_m", tot_m);
    query.bindValue(":capacity", capacity);
    query.bindValue(":location", location);
    return query.exec();
}

// New method to fetch and populate the factory data by id
bool factory::getFactoryData(int idf) {
    QSqlQuery query;
    query.prepare("SELECT * FROM FACTORY WHERE FACTORY_ID = :idf");
    query.bindValue(":idf", idf);

    if (query.exec() && query.next()) {
        this->idf = query.value("FACTORY_ID").toInt();
        this->idc = query.value("CHEF_ID").toInt();
        this->tot_e = query.value("TOTAL_EMPLOYEES").toInt();
        this->tot_m = query.value("TOTAL_MACHINES").toInt();
        this->capacity = query.value("CAPACITY").toInt();
        this->location = query.value("LOCATION").toString();
        return true;
    }
    return false;
}
