#include "maszyn.h"
#include "rownosc.h"
#include "szczescia.h"
#include "czystosc.h"
#include "konta.h"

void konfiguracja(int& ilosc_slotow,int& gierki, konta& gracz,int& wybor_maszyn){
    wybor_maszyn=99;
            {cout<<"ma 3 sloty o ile zwiekszasz?"<<endl;                       // mozesz zwiekszyc ilosc losowanychcyfr
            cin>>ilosc_slotow;
            cout<<"za jedna gre "<<5*(1+ilosc_slotow)<<" to ile razy grasz? ";
            cin>>gierki;                                                  //ile razy losujesz za co sie placi
            if(5*(1+ilosc_slotow)*gierki<=gracz.get_hajs()){
                gracz.dodaj(5*(1+ilosc_slotow)*gierki*(-1));
            }
            else{
                cout<<"Nie stac cie!"<<endl;
                gierki=0;
            }
            
            
    
}}
void akcja(maszyn& k,int& czy_gra,konta& gracz){                         //ta funkcja wykonuje losy
            while(k.get_gry()!=0 && czy_gra!=2){
                
                cout<<"pozostaly ci "<<k.get_gry()<<endl;
                cout<<"(1) graj  (2) odejdz  "<<endl;                       
                cin>>czy_gra;
                switch(czy_gra){
                    case 1:
                    {k.los();
                    k.wyswietlacz();
                    cout<<"tu wygrales: "<<k.get_wygrana()<<endl;
                    break;}
                    case 2:
                    {break;}


                }

            }czy_gra=99;                                           
            gracz.dodaj(k.get_wygrana());}


int main(){
    int wybor_maszyn=99;                  //zmiennie potrzebne na teraz do komunkacji czlowiek-terminal
    int czy_gra;
    string imie;
    int ilosc_slotow;
    int gierki;
    cout<<"Witaj, by grac wybieraj opcje wpisujac cyfry podane w nawiadach"<<endl;
    cout<<"Cos sie dzieje gdy wylosujesz 3 albo wiecej tych samych cyfr obok siebie"<<endl;
    cout<<"powodzenia"<<endl;

    while(1){                                            //wielka pentla
        cout<<"kim jestes?"<<endl;
        cin>>imie;
        konta gracz(imie);                                  //pyta na jakim koncie grasz by zapisac progerss
        while(wybor_maszyn!=9){
        cout<<"masz taki budzet "<<gracz.get_hajs()<<endl;
        cout<<"(0)  wyjscie, (9)zmien gracza,  maszyny: (1) rownosci , (2) czystosci , (3) radosci"<<endl;
        cin>>wybor_maszyn;
        switch(wybor_maszyn){
            case 0 :
            {gracz.zapis();                                      //wyjscie i zapis
                return(0);}
            case 9 :
            {gracz.zapis();                                      //zmiana konta i zapis
                break;}
            case 1:{
            konfiguracja(ilosc_slotow,gierki,gracz,wybor_maszyn);      //poszegolne maszyny losujace
            maszyna_rownosc rownosc(ilosc_slotow+3,gierki);
            akcja(rownosc,czy_gra,gracz);
            break;}
            case 2:{
            konfiguracja(ilosc_slotow,gierki,gracz,wybor_maszyn);
            maszyna_czystosc czystosc(ilosc_slotow+3,gierki);
            akcja(czystosc,czy_gra,gracz);
            break;}
            case 3:{
            konfiguracja(ilosc_slotow,gierki,gracz,wybor_maszyn);
            maszyna_szczescia radosc(ilosc_slotow+3,gierki);
            akcja(radosc,czy_gra,gracz);
            break;}


        }

    }
    wybor_maszyn=99;

    }
         
}