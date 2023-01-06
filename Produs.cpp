//
// Created by Asus on 30/12/2022.
//

#include "Produs.hpp"

#include <utility>
void Produs::afisare(std::ostream &) const {}
Produs::Produs(int pret, int nr, std::string firma) : pret(pret), nr(nr), firma(std::move(firma)) {}
Produs::Produs() {}
std::ostream& operator<<(std::ostream &COUT,const Produs &Produs1)
{
    COUT << "Pret:"<<Produs1.pret<<" lei"<<std::endl
         <<"Numar: "<<Produs1.nr<<std::endl
         << "Firma:"<<Produs1.firma<<std::endl;
    Produs1.afisare(COUT);
    COUT<< "\n";
    return COUT;
}

int Produs::getPret() const {
    return pret;
}
int Produs::getNr() const {
    return nr;
}

double Produs::valoare()  const {
    return getNr() * getPret();
}

Produs::~Produs(){}

int Produs::promotie() {
    return 0;
}

Produs &Produs::operator=(const Produs &other) {
    pret=other.pret;
    nr=other.nr;
    firma=other.firma;
    return *this;
}

Produs::Produs(const Produs &other): pret(other.pret), nr(other.nr), firma(other.firma)  {}

const std::string &Produs::getFirma() const {
    return firma;
}

std::shared_ptr<Produs> Produs::clone() const {
    return {};
}




