#include "maszyn.h"
#include "maszyna1.h"
#include "maszyna2.h"
#include "maszyna3.h"
#include "konta.h"



int main(){
    int w=99;                  //zmiennie potrzebne na teraz do komunkacji czlowiek terminal
    int iks;
    string imie;
    int kloty;
    int gierki;
    cout<<"Witaj sprawa wyglada tak ze z pracy cie wyrzucili."<<endl<<
    "za twoi syn(ktorego masz) potrzebuje 1000000 na operacje Kolana."<<endl<<
    "Jest operacja bez ktorej twoi syn nie przezyje."<<endl<<
    "Zalazles rozwiazanie jednak, wszystko sprzedales postawiles na hazard."<<endl<<
    "przed toba beda 3 nieznane maszyny i twoim  cele jest znalezienie najbardziej oplacalnej"<<endl<<
    "badz poprostu posiadac wieksze szczescie"<<endl<<
    "operujesz z tym swiatem wybierajac mozliwe opcje poprzez wpisywanie numerow"<<endl<<
    "opcje do wyboru beda otoczone nawiasami"<<endl<<
    "A wiec ..."<<endl;


    while(1){                                            //wielka pentla
        cout<<"kim jestes?"<<endl;
        cin>>imie;
        konta gracz(imie);                                  //pyta na jakim koncie grasz by zapisac progerss
        while(w!=9){
        cout<<"masz taki budzet "<<gracz.get_hajs()<<endl;
        cout<<"(0)  wyjscie, (9)zmien gracza,  maszyny: (1) rownosci , (2) czystosci , (3) radosci"<<endl;
        cin>>w;
        switch(w){
            case 0 :
            {gracz.zapis();                                      //wyjscie i zapis
                return(0);}
            case 9 :
            {gracz.zapis();                                      //zmiana konta i zapis
                break;}
            case 1:
            {cout<<"ma 3 sloty o ile zwiekszasz?"<<endl;                       // mozesz zmienic format maszyny
            cin>>kloty;
            cout<<"za jedna gre "<<5*(1+kloty)<<" to ile razy grasz? ";
            cin>>gierki;                                                  //ile razy krencisz za co sie placi
            if(5*(1+kloty)*gierki>gracz.get_hajs()){
                cout<<"nie stac cie!!"<<endl;
                break;
            }
            gracz.dodaj(5*(1+kloty)*gierki*(-1));
            maszyna1 rownosc(kloty+3,gierki);
            while(rownosc.get_gry()!=0 && iks!=2){
                
                cout<<"pozostaly ci "<<rownosc.get_gry()<<endl;
                cout<<"(1) graj  (2) odejdz  "<<endl;                       //tu juz losujesz albo wychdzisz tracac nie uzytr
                cin>>iks;
                switch(iks){
                    case 1:
                    {rownosc.los();
                    rownosc.wyswietlacz();
                    cout<<"tu wygrales: "<<rownosc.get_wygrana()<<endl;
                    break;}
                    case 2:
                    {break;}


                }

            }iks=99;                                           ///opcje 1 2 3 sa analogiczne do siebie 
            gracz.dodaj(rownosc.get_wygrana());}
            case 2:
            {cout<<"ma 3 sloty o ile zwiekszasz?"<<endl;
            cin>>kloty;
            cout<<"za jedna gre "<<50*(1+kloty)<<" to ile razy grasz? ";
            cin>>gierki;
            if(5*(1+kloty)*gierki>gracz.get_hajs()){
                cout<<"nie stac cie!!"<<endl;
                break;
            }
            gracz.dodaj(5*(1+kloty)*gierki*(-1));
            maszyna2 czystosc(kloty+3,gierki);
            while(czystosc.get_gry()!=0 && iks!=2){
                
                cout<<"pozostaly ci "<<czystosc.get_gry()<<endl;
                cout<<"(1) graj  (2) odejdz  "<<endl;
                cin>>iks;
                switch(iks){
                    case 1:
                    {czystosc.loso();
                    czystosc.wyswietlacz();
                    cout<<"tu wygrales: "<<czystosc.get_wygrana()<<endl;
                    break;}
                    case 2:
                    {break;}


                }

            }iks=99;
            gracz.dodaj(czystosc.get_wygrana());}
            case 3:
            {cout<<"ma 3 sloty o ile zwiekszasz?"<<endl;
            cin>>kloty;
            cout<<"za jedna gre "<<5*(1+kloty)<<" to ile razy grasz? ";
            cin>>gierki;
            if(5*(1+kloty)*gierki>gracz.get_hajs()){
                cout<<"nie stac cie!!"<<endl;
                break;
            }
            gracz.dodaj(5*(1+kloty)*gierki*(-1));
            maszyna3 radosc(kloty+3,gierki);
            while(radosc.get_gry()!=0 && iks!=2){
                
                cout<<"pozostaly ci "<<radosc.get_gry()<<endl;
                cout<<"(1) graj  (2) odejdz  "<<endl;
                cin>>iks;
                switch(iks){
                    case 1:
                    {radosc.los();
                    radosc.wyswietlacz();
                    cout<<"tu wygrales: "<<radosc.get_wygrana()<<endl;
                    break;}
                    case 2:
                    {break;}


                }

            }iks=99;
            gracz.dodaj(radosc.get_wygrana());}


        }

    }
    w=99;

    }
         
}