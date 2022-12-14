//
// Created by Asus on 14/12/2022.
//

#include "Pix.hpp"
///                 constructor de initializare pentru clasa Pix
Pix::Pix(int nrPixuri_, int pret_,const std::string& marime_,const std::string& culoare_) : nrPixuri{nrPixuri_}, pret{pret_}, marime{marime_}, culoare{culoare_}
{
}

//constructor de copiere pentru clasa Pix
Pix::Pix(const Pix& other):nrPixuri{other.nrPixuri}, pret{other.pret}, marime{other.marime}, culoare{other.culoare}
{
}

//operator= copiere Pix
Pix&Pix::operator=(const Pix& other)
{
    (*this).nrPixuri = other.nrPixuri;
    (*this).pret = other.pret;
    (*this).marime = other.marime;
    (*this).culoare=other.culoare;
    return *this;
}

//destructor Pix
Pix::~Pix()
{
}

int Pix::getPixuri()
{
    return nrPixuri;
}
double Pix::getPret()
{
    return pret;
}
double Pix::valoarePixuri(){
    return getPret() * getPixuri();
}
std::ostream& operator<<(std::ostream& COUT, const Pix &Pix1)
{
    COUT<<"Nr. pixuri: "<<Pix1.nrPixuri<<std::endl;
    COUT <<"Pret:"<<Pix1.pret<<" lei"<<std::endl;
    COUT <<"Marime:"<<Pix1.marime<<std::endl;
    COUT <<"Culoare:"<<Pix1.culoare<<std::endl;
    return COUT;
}

