#ifndef maszyna1_H
#define maszyna1_H
#include "maszyn.h"


class maszyna1: public maszyn{
    public:
    maszyna1(int s,int g);  //ustalenie wielkosci
    ~maszyna1();
    void los(); //najwazniejsz funkcja


};


#endif