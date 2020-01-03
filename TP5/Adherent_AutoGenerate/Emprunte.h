#ifndef Emprunte_h
#define Emprunte_h

#include <vector>

#include "date.h"

class adhérents;
class Livres;

class Emprunte {

 public:

    virtual void pronologie_dateretour();

 public:
    date date_emprunt;
    date date_retour;

 public:

    /**
     * @element-type adhérents
     */
    std::vector< adhérents* > myadhérents;

    Livres *myLivres;
};

#endif // Emprunte_h
