#ifndef FACTORY_H
#define FACTORY_H

#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>

class factory
{
    QString location;
    int idf, idc, tot_e, tot_m, capacity;

public:
    factory(){};
    factory(int, int, int, int, int, QString);

    // getters
    int getidf() { return idf; }
    int getidc() { return idc; }
    int getcapacity() { return capacity; }
    int gettot_e() { return tot_e; }
    QString getlocation() { return location; }
    int gettot_m() { return tot_m; }

    // setters
    void setidf(int n) { this->idf = n; }
    void setidc(int &e) { this->idc = e; }
    void setcapacity(int i) { this->capacity = i; }
    void settot_e(int a) { this->tot_e = a; }
    void setlocation(QString p) { location = p; }
    void settot_m(int &t) { this->tot_m = t; }

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool search(int);
    bool update(int, int, int, int, int, QString);
    bool getFactoryData(int idf);  // new method to retrieve data
};

#endif // FACTORY_H
