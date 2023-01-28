#include "Comanda.hpp"

#include <utility>
#include <algorithm>
#include "Exceptii.hpp"

double Comanda::calculareBon() {
    pretBon = 0.0;
    for(const auto &i : produse) {
        pretBon += i->valoare();
    }
    if (pretBon > 150) //calculeaza reducerea de 15%, in cazul in care bonul este mai mare de 150 de lei
        pretBon = pretBon - (0.15 * pretBon);
    return pretBon;
}

std::ostream& operator<<(std::ostream &COUT,const Comanda &comanda) {
    COUT << " Nr. comanda: " << comanda.nrComanda << std::endl;
    COUT << " Pret bon: " << comanda.pretBon << " lei" << std::endl;
    return COUT;
}

void Comanda::afisareProdusScump() {
    std::sort(produse.begin(), produse.end(), [&] (const auto & a, const auto &b) {
        return a->getPret() < b->getPret();
    } );
    std::size_t n = produse.size(); //astfel, cu vectorul ordonat crescator, stim ca ultimul element(de pe pozitia n-1) va fi cel mai scump
    std::cout << "Cel mai scump produs este cel cu pretul de " << produse[n - 1]->getPret() << " de lei." << std::endl
              << std::endl;
}

double Comanda::getPretBon() const {
    return pretBon;
}

Comanda &Comanda::operator=(Comanda other)  {
    swap(*this, other);
    return *this;
}

Comanda::Comanda(const Comanda &other):     nrComanda(other.nrComanda), pretBon(other.pretBon)
{
    for (const auto &produs: other.produse)
        produse.emplace_back(produs->clone());
}

void swap(Comanda &cmd1, Comanda &cmd2) {
    std::swap(cmd1.nrComanda, cmd2.nrComanda);
    std::swap(cmd1.produse, cmd2.produse);
    std::swap(cmd1.pretBon, cmd2.pretBon);
}

void Comanda::afisarePromotie() {
 for (const auto &produs : produse)
     produs->promotie();
}

Comanda::~Comanda() {

}


Comanda::Comanda(int nrComanda, std::vector<std::shared_ptr<Produs>> produse) : nrComanda(nrComanda), produse(std::move(produse)),pretBon(calculareBon()){

}
Comanda::Comanda() : pretBon() {

}