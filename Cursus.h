#ifndef CURSUS_H_INCLUDED
#define CURSUS_H_INCLUDED

#include "includes.h"

class Cursus
{
    QString Code;
    QString Titre;
    QString Responsable;
public:
    Cursus() {}
    Cursus(QString c,QString t, QString r):Code(c),Titre(t),Responsable(r){}
    QString getCode() const {return this->Code;}
    QString getTitre() const {return this->Titre;}
    QString getResp() const {return this->Responsable;}
    void editCursus(QString t, QString r){
        Titre=t;
        Responsable=r;
    }
    void afficherCursus() const{
        cout<<"***Affichage Cursus***\nCode : "<<Code.toStdString()
           <<"\nTitre : "<<Titre.toStdString()
          <<"\nResponsable : "<<Responsable.toStdString()
         <<"\n******\n";
    }
    //bool operator==(const Cursus* cur) const;
};


#endif // CURSUS_H_INCLUDED
