#include "Ghiozdan.h"


Ghiozdan::Ghiozdan(int pret, char marime, char culoare) {

}
void Ghiozdan::setPret(int pret) {
    Pret = pret;
}
int Ghiozdan::getPret() {
    return Pret;
}
void Ghiozdan::setMarime(char marime) {
    Marime = marime;
}

char Ghiozdan::getMarime() {
    return Marime;
}

void Ghiozdan::setCuloare(char culoare) {
    Culoare = culoare;
}

char Ghiozdan::getCuloare() {
    return Culoare;
}

ostream &operator<<(ostream &COUT, Ghiozdan &Ghiozdan1) {
    COUT <<"Marime ->"<<Ghiozdan1.getMarime();
    COUT <<"Pret ->"<<Ghiozdan1.getPret();
    COUT <<"Culoare ->"<<Ghiozdan1.getCuloare(); 
    return COUT;
}
