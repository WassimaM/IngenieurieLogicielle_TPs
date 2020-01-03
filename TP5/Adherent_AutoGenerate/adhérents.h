#ifndef adhérents_h
#define adhérents_h

#include "string.h"

class Emprunte;
class bobliotheque;

class adhérents {

 public:

    virtual void emprunt_Livre();

    virtual void restituer_Livre();

 public:
    string prenom;
    string nom;

 public:

    /**
     * @element-type Emprunte
     */
    Emprunte *myEmprunte;

    bobliotheque *mybobliotheque;
};

#endif // adhérents_h
