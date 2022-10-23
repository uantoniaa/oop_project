#include "Pix.h"

Pix::Pix(int pret, char marime, int culoare) {

}
void Pix::setPret(int pret) {
    Pret = pret;
}
int Pix::getPret() {
    return Pret;
}
void Pix::setMarime(char marime) {
    Marime = marime;
}

char Pix::getMarime() {
    return Marime;
}

void Pix::setCuloare(int culoare) {
    Culoare = culoare;
}

int Pix::getCuloare() {
    return Culoare;
}

ostream &operator<<(ostream &COUT, Pix &Pix1) {
    COUT <<"Marime ->"<<Pix1.getMarime();
    COUT <<"Pret ->"<<Pix1.getPret();
    COUT <<"Culoare ->"<<Pix1.getCuloare(); 
    return COUT;
}
