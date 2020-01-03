#ifndef Livres_h
#define Livres_h

#include "boolean.h"
#include "volumes.h"

class Emprunte;

class Livres : public volumes {

 public:

    virtual void empruntable();

 public:
    boolean disponible;

 public:

    /**
     * @element-type Emprunte
     */
    Emprunte *myEmprunte;
};

#endif // Livres_h
