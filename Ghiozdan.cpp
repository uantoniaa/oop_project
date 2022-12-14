//
// Created by Asus on 14/12/2022.
//

#include "Ghiozdan.hpp"

///                    constructor de initializare pentru clasa Ghiozdan
Ghiozdan::Ghiozdan(int nrGhiozdane_, int pret_, const std::string& marime_, const std::string & culoare_) : nrGhiozdane{nrGhiozdane_}, pret{pret_}, marime{marime_}, culoare{culoare_}
{
}
int Ghiozdan::getGhiozdane()
{

    return nrGhiozdane;
}
double Ghiozdan::getPret()
{
    return pret;
}
double Ghiozdan::valoareGhiozdane(){
    return getPret() * getGhiozdane();
}
std::ostream& operator<<(std::ostream &COUT,const Ghiozdan &Ghiozdan1)
{
    COUT<<" Nr. Ghiozdane: "<<Ghiozdan1.nrGhiozdane<<std::endl;
    COUT<<" Pret:"<<Ghiozdan1.pret<<" lei"<<std::endl;
    COUT<<" Marime:"<<Ghiozdan1.marime<<std::endl;
    COUT<<" Culoare:"<<Ghiozdan1.culoare<<std::endl;
    return COUT;
}
