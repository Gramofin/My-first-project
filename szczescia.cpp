#include "szczescia.h"
    
    
maszyna_szczescia::maszyna_szczescia(int s,int g){     //tworzy maszyne losujaca z odpowiednimi parametrami
    srand( time( NULL ) );
    this->sloty =s;
    this->gry=g;
    this->T=new int[sloty];
    wygrana=0;

}
    maszyna_szczescia::~maszyna_szczescia(){
        delete T;
      
    }
    
    void maszyna_szczescia::los(){                //los polega na losowaniu kolejnych cyfr i odrazu porownywaniu z poprzednimi
        T[0]=10;                                  //gdy co najmniej 3 takie same zapamietuje a nastepnie dalej losuje i sprawdza
        int znowu=0;                             
        int maks_znowu=-1;
        for(int i=0;i<sloty;i++){
            T[i+1]=rand()%8;
            if(T[i+1]==T[i]){
                znowu++;
            }
            else if(znowu>1 && znowu>maks_znowu){       //tu gdy juz bylo 3 albo wiecej ale ciag tych samych znakow sie konczy sprawdza nagrode
                maks_znowu=znowu;
                int iloraz=1;
                for(int n=0;n<znowu-3;n++){
                    iloraz=iloraz+n;
            }
                switch(T[i+1]){
                    case 0:
                    this->wygrana=wygrana/4;
                    break;
                    case 2:
                    gry=gry+1*iloraz;
                    break;
                    case 1:
                    this->wygrana=wygrana/4;
                    break;
                    case 3:
                    gry=gry+1*iloraz;
                    break;
                    case 4:
                    wygrana=wygrana+5*iloraz;
                    break;
                    case 5:
                    wygrana=wygrana+5*iloraz;
                    break;
                    case 6:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 7:
                    wygrana=wygrana+50000*iloraz;
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