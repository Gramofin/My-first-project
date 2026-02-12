#ifndef rownosc_H
#define rownosc_H
#include "maszyn.h"


class maszyna_rownosc: public maszyn{
    public:
    maszyna_rownosc(int s,int g);  //ustalenie wielkosci
    ~maszyna_rownosc();
    void los(); //najwazniejsz funkcja


};


#endif