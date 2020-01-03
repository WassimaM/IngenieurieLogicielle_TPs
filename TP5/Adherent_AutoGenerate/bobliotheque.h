#ifndef bobliotheque_h
#define bobliotheque_h

#include <vector>


class adhérents;
class document;

class bobliotheque {

 public:

    virtual void inscrit_adherent();

    virtual void desincrit_adherent();

    virtual void ajouter_document();

 public:

    /**
     * @element-type adhérents
     */
    std::vector< adhérents* > myadhérents;

    document *mydocument;
};

#endif // bobliotheque_h
