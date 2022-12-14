//
// Created by Asus on 14/12/2022.
//

#include "Caiet.hpp"

///                 constructor de initializare pentru clasa Caiet
Caiet::Caiet(int nrCaiete_, int pret_,const std::string& marime_) : nrCaiete{nrCaiete_}, pret{pret_}, marime{marime_}
{
}
std::ostream& operator<<(std::ostream &COUT,const Caiet &Caiet1)
{
    COUT<<" Nr. Caiete: "<<Caiet1.nrCaiete<<std::endl;
    COUT<<" Pret:"<<Caiet1.pret<<" lei"<<std::endl;
    COUT<<" Marime:"<<Caiet1.marime<<std::endl;
    return COUT;
}
//functie care retine numarul de caiete
int Caiet::getCaiete()
{
    return nrCaiete;
}
double Caiet::getPret()
{
    return pret;
}
double Caiet::valoareCaiete(){
    return getPret() * getCaiete();
}