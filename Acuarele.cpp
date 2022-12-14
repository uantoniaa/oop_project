//
// Created by Asus on 14/12/2022.
//

#include "Acuarele.hpp"

///                 constructor de initializare pentru clasa Acuarele
Acuarele::Acuarele()
{
}
Acuarele::Acuarele(int nrAcuarele_, int pret_, int nrCulori_) : nrAcuarele{nrAcuarele_}, pret{pret_}, nrCulori{nrCulori_}
{
}
std::ostream& operator<<(std::ostream& COUT, const Acuarele &Acuarele1)
{
    COUT<<" Nr. Acuarele: "<<Acuarele1.nrAcuarele<<std::endl;
    COUT<<" Pret:"<< Acuarele1.pret<<" lei"<<std::endl;
    COUT<<" NrCulori:"<<Acuarele1.nrCulori<<std::endl;
    return COUT;
}
int Acuarele::getAcuarele()
{
    return nrAcuarele;
}
double Acuarele::getPret()
{
    return pret;
}
double Acuarele::valoareAcuarele(){
    return getPret() * getAcuarele();
}