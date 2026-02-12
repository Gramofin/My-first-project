#ifndef szczescia_H
#define szczescia_H
#include "maszyn.h"


class maszyna_szczescia: public maszyn{
    public:
    maszyna_szczescia(int s,int g);
    ~maszyna_szczescia();
    void los();


};


#endif