#ifndef czystosc_H
#define czlowiek_H
#include "maszyn.h"


class maszyna_czystosc: public maszyn{
    public:
    maszyna_czystosc(int s,int g);
    ~maszyna_czystosc();
    void los();    //tu overriduje virtualna funkcje


};


#endif