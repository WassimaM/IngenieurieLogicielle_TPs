#ifndef Feuillet_h
#define Feuillet_h

class Document;
class Objet Graphique;

class Feuillet {

 public:

    virtual void ouvrir();

    virtual void Fermer();

 public:
    String nom;

 public:

    /**
     * @element-type Document
     */
    Document *myDocument;

    /**
     * @element-type Document
     */
    Document *myDocument;

    /**
     * @element-type Objet Graphique
     */
    Objet Graphique *myObjet Graphique;
};

#endif // Feuillet_h
