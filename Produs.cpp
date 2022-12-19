#include "Produs.hpp"
void Produs::afisare(std::ostream &) const {}
Produs::Produs(int pret, const std::string &firma) : pret(pret), firma(firma) {}
Produs::Produs() {}
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
