#include "Produs.hpp"
void Produs::afisare(std::ostream &) const {}
Produs::Produs(int pret=0, const std::string &firma="inexistent") : pret(pret), firma(firma) {}
Produs::Produs() {pret = 1;}
std::ostream& operator<<(std::ostream &COUT,const Produs &Produs1)
{
    COUT << "Pret:"<<Produs1.pret<<" lei"<<std::endl;
    COUT << "Firma:"<<Produs1.firma<<std::endl;
    Produs1.afisare(COUT);
    COUT<< "\n";
    return COUT;
}

int Produs::getPret() const {
    return pret;
}
