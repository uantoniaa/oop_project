//
// Created by Asus on 14/12/2022.
//

#include "Caiet.hpp"

void Caiet::afisare(std::ostream &COUT) const
{
    COUT<<" Nr. Caiete: "<<nrCaiete<<std::endl
        <<" Marime:"<< marime <<std::endl;
}
//functie care retine numarul de caiete
int Caiet::getCaiete() const
{
    return nrCaiete;
}

Caiet::Caiet(int pret, const std::string &firma, int nrCaiete, const std::string &marime) : Produs(pret, firma),
                                                                                            nrCaiete(nrCaiete),
                                                                                            marime(marime) {}
