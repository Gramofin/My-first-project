#include "rownosc.h"
    

maszyna_rownosc::maszyna_rownosc(int s,int g){
    srand( time( NULL ) ); //by rozne losy
    this->sloty =s;
    this->gry=g;
    this->T=new int[sloty];
    wygrana=0;              //wartosc poczatkowa
}
    maszyna_rownosc::~maszyna_rownosc(){
        delete T;
    }
    
    void maszyna_rownosc::los(){
        T[0]=10;            //by w porownywaniu miec wyraz 0
        int znowu=0;
        int maks_znowu=-1;
        for(int i=0;i<sloty;i++){
            T[i+1]=rand()%10;        //by rowno losowalo miedcy 0-9
            if(T[i+1]==T[i]){      
                znowu++;              //tu liczy ile razy sie powtarza cyfra
            }
            else if(znowu>1 && znowu>maks_znowu){    //tu by chociaz 3 byly takie same i wieksze niz inne polaczenia
                maks_znowu=znowu;
                int iloraz=1;
                for(int n=0;n<znowu-3;n++){
                    iloraz=iloraz+n*n;               //tu licze taki cos by niby bardziej sie oplacalo
            }
                switch(T[i+1]){                      //tu decyduje co wygrywa zaleznie co sie trafilo
                    case 0:
                    this->wygrana=wygrana/2;
                    break;
                    case 1:
                    gry=gry+1*iloraz;
                    break;
                    case 2:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 3:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 4:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 5:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 6:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 7:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 8:
                    wygrana=wygrana+500*iloraz;
                    break;
                    case 9:
                    wygrana=wygrana+500*iloraz;
                    break;

                }
                znowu=0;                         //reset 
            }
            else{
                znowu=0;                        //to poprostu zero albo 1 polaczenie
            }
        }
        this->gry--;
    }