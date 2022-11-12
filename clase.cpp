#include "clase.h"
//constructor de initializare pentru clasa Pix
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
    pret = other.pret;
    marime = other.marime;
    culoare=other.culoare;
    ;
    return *this;
}

//destructor Pix
Pix::~Pix()
{
}
//functie care retine numarul de pixuri
int Pix::getPixuri()
{
    return nrPixuri;
}
double Pix::getPret()
{
    return pret;
}
std::ostream& operator<<(std::ostream& COUT, const Pix &Pix1)
{
    COUT <<"Pret:"<<Pix1.pret<<std::endl;
    COUT <<"Marime:"<<Pix1.marime<<std::endl;
    COUT <<"Culoare:"<<Pix1.culoare<<std::endl;
    return COUT;
}



//constructor de initializare pentru clasa Acuarele
Acuarele::Acuarele()
{
}
Acuarele::Acuarele(int nrAcuarele_, int pret_, int nrCulori_) : nrAcuarele{nrAcuarele_}, pret{pret_}, nrCulori{nrCulori_}
{
}
std::ostream& operator<<(std::ostream& COUT, const Acuarele &Acuarele1)
{
    COUT << "Pret:"<< Acuarele1.pret<<std::endl;
    COUT << "NrCulori:"<<Acuarele1.nrCulori<<std::endl;
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

//constructor de initializare pentru clasa Caiet
Caiet::Caiet(int nrCaiete_, int pret_,const std::string& marime_) : nrCaiete{nrCaiete_}, pret{pret_}, marime{marime_}
{
}
std::ostream& operator<<(std::ostream &COUT,const Caiet &Caiet1)
{
    COUT<<"Pret:"<<Caiet1.pret<<std::endl;
    COUT<<"Marime:"<<Caiet1.marime<<std::endl;
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


//constructor de initializare pentru clasa Ghiozdan
Ghiozdan::Ghiozdan(int nrGhiozdane_, int pret_, const std::string& marime_, const std::string & culoare_) : nrGhiozdane{nrGhiozdane_}, pret{pret_}, marime{marime_}, culoare{culoare_}
{
}
std::ostream& operator<<(std::ostream &COUT,const Ghiozdan &Ghiozdan1)
{

    COUT<<"Pret:"<<Ghiozdan1.pret<<std::endl;
    COUT<<"Marime:"<<Ghiozdan1.marime<<std::endl;
    COUT<<"Culoare:"<<Ghiozdan1.culoare<<std::endl;
    return COUT;
}


//functie care retine numarul de ghiozdane
int Ghiozdan::getGhiozdane()
{

    return nrGhiozdane;
}
double Ghiozdan::getPret()
{
    return pret;
}


Comanda::Comanda (int nrComanda_, Pix p_, Acuarele ac_, Ghiozdan g_, Caiet c_) : nrComanda{nrComanda_}, p{p_}, ac{ac_}, g{g_}, c{c_} {}
//pretBon = get_pretBon(Pix p_, Acuarele ac_, Ghiozdan g_, Caiet c_);


int Comanda::get_pretBon(Pix p, Acuarele ac, Ghiozdan g, Caiet c)
{
    pretBon = p.getPixuri() * p.getPret() + ac.getAcuarele() * ac.getPret() + g.getGhiozdane() * g.getPret() + c.getCaiete() * c.getPret();
    return pretBon;

}

std::ostream& operator<<(std::ostream &COUT,const Comanda &Comanda1)
{

    COUT<<"Nr. comanda: "<<Comanda1.nrComanda<<std::endl;

    COUT<<"Pret bon: "<<Comanda1.pretBon<<std::endl;
    return COUT;
}


