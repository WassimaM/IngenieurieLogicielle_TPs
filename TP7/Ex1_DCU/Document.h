#ifndef Document_h
#define Document_h

class Feuillet;

class Document {

 public:

    virtual void ouvrir();

    virtual void fermer();

 public:
    String nom;

 public:

    /**
     * @element-type Feuillet
     */
    Feuillet *myFeuillet;

    /**
     * @element-type Feuillet
     */
    Feuillet *myFeuillet;
};

#endif // Document_h
