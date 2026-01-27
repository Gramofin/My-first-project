#include "konta.h"
konta::konta(string naz){
    this->nazwa=naz;
    fstream file;
    string line;
    file.open("zapis.txt",ios::in);               //przy podaniu nazwy sprawdza czy juz istnialo
    while(getline(file,line)){
        if(line == nazwa){
            break;
        }
    }
    if(line == nazwa){                          //jak tak to wczytuje pieniadze
    file>>hajs;
    file.close();
    }else{                                       //jak nie to tworzy nowy wpis na zawsze
        file.close();
        file.open("zapis.txt",ios::app);
        file<<nazwa<<endl;
        hajs=500;
        file<<hajs<<endl;
        file.close();
    }

}
    konta::~konta(){
}
void konta::dodaj(int plus){                       //przekazanie nagrody na konto
    this->hajs=hajs+plus;
}
int konta::get_hajs(){                             //do wypisywania
    return hajs;
}
void konta::zapis(){
    ifstream file("zapis.txt");       //najwieszezlo jakie powstalo szuka gdzie jestes


    string line;
    string word = nazwa;
    int lineNumber = 1;
    int foundLine; 

    while (getline(file, line)) {
        if (line.find(word) != string::npos) {
            foundLine = lineNumber+1;
            break; 
        }
        lineNumber++;
    }

    file.close();

ifstream input("zapis.txt");
ofstream output("zapis2.txt");                 //by nastepnie zamieniz na nowy wygrany budzet

   
    
     lineNumber = 1;
    int LINE_TO_CHANGE;
    LINE_TO_CHANGE=foundLine; 
    while (getline(input, line)) {
        if (lineNumber == LINE_TO_CHANGE) {
            output << to_string(hajs) << endl;
        } else {
            output << line <<endl;
        }
        lineNumber++;
    }

    input.close();
    output.close();                      //i to skopiowac
    ifstream input2("zapis2.txt");
    ofstream output2("zapis.txt");                 
    lineNumber = 1;
    while (getline(input2, line)) {
        output2 << line <<endl;
        lineNumber++;
    }

    input2.close();
    output2.close();
}