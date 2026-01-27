#ifndef konta_H
#define konta_H

#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

class konta{
    string nazwa;       //twoja nazwa i piniadze
    int hajs;
    public:
    konta(string naz);
    ~konta();
    void dodaj(int puls);
    int get_hajs();
    void zapis();
};
#endif