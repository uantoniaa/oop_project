#include "Caiet.h"

Caiet::Caiet(int pret, char marime) {

}

void Caiet::setPret(int pret) {
    Pret = pret;
}

int Caiet::getPret() {
    return Pret;
}
void Caiet::setMarime(char marime) {
    Marime = marime;
}

char Caiet::getMarime() {
    return Marime;
}

ostream &operator<<(ostream &COUT, Caiet &Caiet1) {
    COUT<<"Marime->"<<Caiet1.getPret();
    COUT<<"Pret->"<<Caiet1.getMarime();
    return COUT;
}
