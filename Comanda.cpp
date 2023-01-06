#include "Comanda.hpp"

#include <utility>
#include "Exceptii.hpp"


void Comanda::set_pretBon() {
    for(auto & i : produse) {
        if(produse.size() == 0)
            throw eroare_produse();
        pretBon += i->valoare();
    }
    if (pretBon > 150) //calculeaza reducerea de 15%, in cazul in care bonul este mai mare de 150 de lei
        pretBon = pretBon - (0.15 * pretBon);
}

double Comanda::get_pretBon() const {
    return pretBon;
}

std::ostream& operator<<(std::ostream &COUT,const Comanda &Comanda1) {
    COUT << " Nr. comanda: " << Comanda1.nrComanda << std::endl;
    COUT << " Pret bon: " << Comanda1.pretBon << " lei" << std::endl;
    return COUT;
}

Comanda::Comanda(int nrComanda, std::vector<Produs*> produse) : nrComanda(nrComanda),
                                                                                      produse(std::move(produse))
                                                                                       {}

Comanda::Comanda() {

}


