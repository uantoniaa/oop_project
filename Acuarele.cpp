#include "Acuarele.h"

Acuarele::Acuarele(int pret, char marime, int nrCulori) {

}
void Acuarele::setPret(int pret) {
    Pret = pret;
}
int Acuarele::getPret() {
    return Pret;
}
void Acuarele::setMarime(char marime) {
    Marime = marime;
}

char Acuarele::getMarime() {
    return Marime;
}

void Acuarele::setNrCulori(int nrCulori) {
    NrCulori = nrCulori;
}

int Acuarele::getNrCulori() {
    return NrCulori;
}

ostream &operator<<(ostream &COUT, Acuarele &Acuarele1) {
    COUT << "Marime ->"<<Acuarele1.getMarime();
    COUT << "Pret ->"<<Acuarele1.getPret();
    COUT << "NrCulori ->"<<Acuarele1.getNrCulori(); 
    return COUT;
}
