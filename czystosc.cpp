#include "czystosc.h"
    
    
maszyna2::maszyna2(int s,int g){
    srand( time( NULL ) );
    this->sloty =s;
    this->gry=g;
    this->T=new int[sloty];
    wygrana=0;

}
    maszyna2::~maszyna2(){
        delete T;
      
    }
    
    void maszyna2::loso(){
        T[0]=10;
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
                switch(T[i+1]){
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