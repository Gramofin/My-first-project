To jest program symulujacy automat losujacy
interakcja z programem polega na wpisywaniu cyfr, ktore odpowiadaja mozliwym opcjom.
opcje te beda pokazywac sie w terminalu i sa zaznaczone w nawiasach np. "(1)" wiec by ta opcje wybrac nalezy wpisac "1". Przewidziane jest aby uzytkownik wpisywal tylko numer gdy jest przed nim wybor, natomiast gdy jest opcja wyboru konta jest przewidziane wykorzystanie wszystkich znakow.
Program wstepnie zapyta kim jestes, jest to sposob stworzenia/wybrania konta pod jakim chce sie grac, na nim zostanie zapisany (w odzielnym pliku tekstowym ) progress symulacji.
Gdy chcesz kontynowac na poprzednio stworzonym koncie wystarczy wpisac jego wczesniej okreslona nazwe.
Po stworzeniu konta mozna wybrac na ktorej maszynie chce sie grac, nie sa one takie same jednak uzytkownik sam musi odkryc jakie maja efekty, jednak wszystkie dzialaja na podobnej zasadzie losuja pewna ilosc cyfr, i gdy conajmniej 3 takie same cyfry bede stac obok siebie dojdzie do efektu.
testowany input:
kot
2
5
5
1
1
1
1
1
2
5
5
1
1
1
1
2
0
alternatywny:
kot
3
100
100
9
pies
1
6
7
1
1
1
1
2
0
