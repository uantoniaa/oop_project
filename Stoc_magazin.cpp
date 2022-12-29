//
// Created by Asus on 02/01/2023.
//

#include "Stoc_magazin.hpp"

#include <utility>


std::ostream& operator<<(std::ostream &COUT,const Stoc_magazin &Stoc_magazin1)
{

    COUT<<"Numarul de pixuri de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrPixuri_stoc<<std::endl;
    COUT<<"Numarul de ghiozdane de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrGhiozdane_stoc<<std::endl;
    COUT<<"Numarul de caiete de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrCaiete_stoc<<std::endl;
    COUT<<"Suma initiala de bani ce se afla in magazin, dinainte de comanda: "<<Stoc_magazin1.sumaInitiala<<std::endl;
    return COUT;
}
void Stoc_magazin::stoc_ramas(){
    nrPixuri_stoc= nrPixuri_stoc - p.getNr();
    std::cout<<"Numarul de pixuri de pe stoc, dupa comanda: "<<nrPixuri_stoc<<std::endl;
    nrGhiozdane_stoc = nrGhiozdane_stoc - g.getNr();
    std::cout<<"Numarul de ghiozdane de pe stoc, dupa comanda: "<<nrGhiozdane_stoc<<std::endl;
    nrCaiete_stoc = nrCaiete_stoc - c.getNr();
    std::cout<<"Numarul de caiete de pe stoc, dupa comanda: "<<nrCaiete_stoc<<std::endl;
}
void Stoc_magazin::sumaDupaVanzari(){
    double pretB = cmd.get_pretBon();
    double sumadv = sumaInitiala + pretB;
    std::cout<<"Suma de bani de dupa vanzari este de: "<<sumadv<<" lei."<<std::endl;
    double procentVanzare = (100 * pretB) / sumadv;
    std::cout<<"Suma de bani din magazin a crescut fata de ziua precedenta cu un procent de: "<<procentVanzare<<"%."<<std::endl;
}

Stoc_magazin::Stoc_magazin(int nrPixuriStoc, int nrGhiozdaneStoc, int nrCaieteStoc, int sumaInitiala, Pix p,
                           Caiet c, Ghiozdan g, Comanda cmd) : nrPixuri_stoc(nrPixuriStoc),
                                                               nrGhiozdane_stoc(nrGhiozdaneStoc),
                                                               nrCaiete_stoc(nrCaieteStoc),
                                                               sumaInitiala(sumaInitiala), p(std::move(p)),
                                                               c(std::move(c)), g(std::move(g)), cmd(std::move(cmd)) {}
