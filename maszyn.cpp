#include "maszyn.h"
    void maszyn::wyswietlacz(){
        cout<<endl;
        for(int i=0;i<sloty;i++)
        {
            cout<<T[i+1];
            
        }
        cout<<endl;
    }
int maszyn::get_gry(){
    return gry;
}
int maszyn::get_wygrana(){
    return wygrana;
}
