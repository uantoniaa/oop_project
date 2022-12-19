//
// Created by Asus on 14/12/2022.
//

#include "Ghiozdan.hpp"

int Ghiozdan::getGhiozdane() const
{
    return nrGhiozdane;
}


Ghiozdan::Ghiozdan(int pret, const std::string &firma, int nrGhiozdane, const std::string &marime,
                   const std::string &culoare) : Produs(pret, firma), nrGhiozdane(nrGhiozdane), marime(marime),
                                                 culoare(culoare) {}

void Ghiozdan::afisare(std::ostream &COUT) const
{
    COUT<<" Nr. Ghiozdane: "<<nrGhiozdane<<std::endl;
    COUT<<" Marime:"<<marime<<std::endl;
    COUT<<" Culoare:"<<culoare<<std::endl;
}