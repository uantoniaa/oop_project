//
// Created by Asus on 14/12/2022.
//

#include "Stoc_magazin.hpp"
///                     constructor de initializare pentru clasa Stoc_magazin
Stoc_magazin::Stoc_magazin(int nrPixuri_stoc_, int nrAcuarele_stoc_, int nrGhiozdane_stoc_, int nrCaiete_stoc_, int sumaInitiala_, const Comanda &cmd_)
        : nrPixuri_stoc{nrPixuri_stoc_},nrAcuarele_stoc{nrAcuarele_stoc_}, nrGhiozdane_stoc{nrGhiozdane_stoc_}, nrCaiete_stoc{nrCaiete_stoc_}, sumaInitiala{sumaInitiala_},  cmd{cmd_}
{
}

void Stoc_magazin::stoc_ramas(){
    nrPixuri_stoc= nrPixuri_stoc - cmd.getPixuri_();
    std::cout<<"Numarul de pixuri de pe stoc, dupa comanda: "<<nrPixuri_stoc<<std::endl;
    nrAcuarele_stoc = nrAcuarele_stoc - cmd.getAcuarele_();
    std::cout<<"Numarul de acuarele de pe stoc, dupa comanda: "<<nrAcuarele_stoc<<std::endl;
    nrGhiozdane_stoc = nrGhiozdane_stoc - cmd.getGhiozdane_();
    std::cout<<"Numarul de ghiozdane de pe stoc, dupa comanda: "<<nrGhiozdane_stoc<<std::endl;
    nrCaiete_stoc = nrCaiete_stoc - cmd.getCaiete_();
    std::cout<<"Numarul de caiete de pe stoc, dupa comanda: "<<nrCaiete_stoc<<std::endl;

}
void Stoc_magazin::sumaDupaVanzari(){
    int pretB = cmd.get_pretBon();
    int sumadv = sumaInitiala + pretB;
    std::cout<<"Suma de bani de dupa vanzari este de: "<<sumadv<<" lei."<<std::endl;
    double procentVanzare = (100 * pretB) / sumadv;
    std::cout<<"Suma de bani din magazin a crescut fata de ziua precedenta cu un procent de: "<<procentVanzare<<"%."<<std::endl;
}
std::ostream& operator<<(std::ostream &COUT,const Stoc_magazin &Stoc_magazin1)
{

    COUT<<"Numarul de pixuri de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrPixuri_stoc<<std::endl;
    COUT<<"Numarul de acuarele de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrAcuarele_stoc<<std::endl;
    COUT<<"Numarul de ghiozdane de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrGhiozdane_stoc<<std::endl;
    COUT<<"Numarul de caiete de pe stoc, dinainte de comanda: "<<Stoc_magazin1.nrCaiete_stoc<<std::endl;
    COUT<<"Suma de bani ce se afla in magazin, din vanzari: "<<Stoc_magazin1.sumaInitiala<<std::endl;
    return COUT;
}
