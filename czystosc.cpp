#include "czystosc.h"
    
    
maszyna_czystosc::maszyna_czystosc(int s,int g){   //tworzy maszyne losujaca z odpowiednimi parametrami
    srand( time( NULL ) );
    this->sloty =s;
    this->gry=g;
    this->T=new int[sloty];
    wygrana=0;

}
    maszyna_czystosc::~maszyna_czystosc(){
        delete T;
      
    }
    
    void maszyna_czystosc::los(){                         //los polega na losowaniu kolejnych cyfr i odrazu porownywaniu z poprzednimi
        T[0]=10;                             //gdy co najmniej 3 takie same zapamietuje a nastepnie dalej losuje i sprawdza
        int znowu=0;
        int maks_znowu=-1;
        for(int i=0;i<sloty;i++){
            T[i+1]=rand()%3;
            if(T[i+1]==T[i]){
                znowu++;
            }
            else if(znowu>1 && znowu>maks_znowu){
                maks_znowu=znowu;
                int iloraz=1;
                for(int n=0;n<znowu-3;n++){
                    iloraz=iloraz+n;
            }
                switch(T[i+1]){        //tu gdy juz bylo 3 albo wiecej ale ciag tych samych znakow sie konczy sprawdza nagrode
                    case 0:
                    this->wygrana=wygrana/2;
                    break;
                    case 1:
                    gry=gry+1*iloraz;
                    break;
                    case 2:
                    wygrana=wygrana+500*iloraz;
                    break;

                }
                znowu=0;
            }
            else{
                znowu=0;
            }
        }
        this->gry--;
    }