#include "Comanda.hpp"

#include <utility>
#include <algorithm>
#include "Exceptii.hpp"
double Comanda::cmpr(Produs *pr1, Produs *pr2) {
    return pr1->getPret() < pr2->getPret();
}
double Comanda::calculareBon() {
    for(auto & i : produse) {
        pretBon += i->valoare();
    }
    if (pretBon > 150) //calculeaza reducerea de 15%, in cazul in care bonul este mai mare de 150 de lei
        pretBon = pretBon - (0.15 * pretBon);
    return pretBon;
}

std::ostream& operator<<(std::ostream &COUT,const Comanda &Comanda1) {
    COUT << " Nr. comanda: " << Comanda1.nrComanda << std::endl;
    COUT << " Pret bon: " << Comanda1.pretBon << " lei" << std::endl;
    return COUT;
}

Comanda::Comanda(int nrComanda, std::vector<Produs*> produse) : nrComanda(nrComanda),
                                                                                      produse(std::move(produse)),
                                                                                  pretBon(calculareBon())     {}

Comanda::Comanda() = default;

void Comanda::afisareProdusScump() {
    std::sort(produse.begin(), produse.end(), cmpr);
    std::size_t n = produse.size(); //astfel, cu vectorul ordonat crescator, stim ca ultimul element(de pe pozitia n-1) va fi cel mai scump
    std::cout << "Cel mai scump produs este cel cu pretul de " << produse[n - 1]->getPret() << " de lei." << std::endl
              << std::endl;
}

double Comanda::getPretBon() const {
    return pretBon;
}


