#ifndef document_h
#define document_h

#include <vector>

#include "string.h"

class bobliotheque;

class document {

 public:
    string titre;

 public:

    /**
     * @element-type bobliotheque
     */
    std::vector< bobliotheque* > mybobliotheque;
};

#endif // document_h
