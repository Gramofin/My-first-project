#ifndef konta_H
#define konta_H

#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

class konta{
    string nazwa;       //twoja nazwa i pieniadze
    int hajs;
    public:
    konta(string naz);
    ~konta();
    void dodaj(int puls);  //funkcja zmieniajaca budzet
    int get_hajs();   // by wypisywac stan konta
    void zapis();    //do zapisania stanu konta w pliku tekstowym
};
#endif