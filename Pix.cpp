//
// Created by Asus on 14/12/2022.
//

#include "Pix.hpp"


//constructor de copiere pentru clasa Pix
Pix::Pix(const Pix& other): Produs(), nrPixuri{other.nrPixuri}, marime{other.marime}, culoare{other.culoare}
{
}

//operator= copiere Pix
Pix&Pix::operator=(const Pix& other)
{
    (*this).nrPixuri = other.nrPixuri;
    (*this).marime = other.marime;
    (*this).culoare=other.culoare;
    return *this;
}


int Pix::getPixuri() const
{
    return nrPixuri;
}


Pix::Pix(int pret, const std::string &firma, int nrPixuri, const std::string &marime, const std::string &culoare)
        : Produs(pret, firma), nrPixuri(nrPixuri), marime(marime), culoare(culoare) {}

void Pix::afisare(std::ostream& COUT) const
{
    COUT<<"Nr. pixuri: "<<nrPixuri<<std::endl;
    COUT <<"Marime:"<<marime<<std::endl;
    COUT <<"Culoare:"<<culoare<<std::endl;
}


