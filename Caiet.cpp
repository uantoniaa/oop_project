#include "Caiet.h"

Caiet::Caiet(int pret, char marime) {

}

void Caiet::setMarime(char marime) {
    Marime = marime;
}

char Caiet::getMarime() {
    return Marime;
}

void Caiet::setPret(int pret) {
    Pret = pret;
}

int Caiet::getPret() {
    return Pret;
}

ostream &operator<<(ostream &COUT, Caiet &Caiet1) {
    COUT << "Marime ->"<<  Caiet1.getMarime();
    COUT << "Pret ->" << Caiet1.getPret();
    return COUT;
}
