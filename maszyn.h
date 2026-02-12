#ifndef maszyn_H
#define maszyn_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "konta.h"

using namespace std;

//ta klasa to taki fundamencik pod inne maszyny 
class maszyn {
    protected:
    int sloty;
    int gry;
    int *T;   //w tym sa zawarte losowania
    int wygrana;
    public:
    void wyswietlacz();
    int get_gry();
    int get_wygrana();
    virtual void los()=0;  //virtualne funkcja stworzona tylko by byla podmieniona przez odpowiednia
    virtual ~maszyn();
};
#endif
