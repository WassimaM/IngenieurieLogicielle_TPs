#ifndef journaux_h
#define journaux_h

#include "date.h"
#include "document.h"


class journaux : public document {

 public:
    date date_parution;
};

#endif // journaux_h
