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
    COUT <<"Pret:"<<Pix1.pret<<" lei"<<std::endl;
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
    COUT << "Pret:"<< Acuarele1.pret<<" lei"<<std::endl;
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
    COUT<<"Pret:"<<Caiet1.pret<<" lei"<<std::endl;
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

    COUT<<"Pret:"<<Ghiozdan1.pret<<" lei"<<std::endl;
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


Comanda::Comanda (int nrComanda_,const Pix &p_,const Acuarele &ac_,const Ghiozdan &g_,const Caiet &c_) : nrComanda{nrComanda_}, p{p_}, ac{ac_}, g{g_}, c{c_}
{(*this).pretBon = 0;}
//pretBon = get_pretBon(Pix p_, Acuarele ac_, Ghiozdan g_, Caiet c_);


void Comanda::set_pretBon(Pix other_p, Acuarele other_ac, Ghiozdan other_g, Caiet other_c)
{
    // this->pretBon = p.getPixuri() * p.getPret() + ac.getAcuarele() * ac.getPret() + g.getGhiozdane() * g.getPret() + c.getCaiete() * c.getPret();
    (*this).pretBon = other_p.getPixuri() * other_p.getPret() + other_ac.getAcuarele() * other_ac.getPret() + other_g.getGhiozdane() * other_g.getPret() + other_c.getCaiete() * other_c.getPret();
    // return pretBon;
    if((*this).pretBon > 150 ) //calculeaza reducerea de 15%, in cazul in care bonul este mai mare de 150 de lei
        (*this).pretBon = (*this).pretBon - (0.15 * (*this).pretBon);


}


std::ostream& operator<<(std::ostream &COUT,const Comanda &Comanda1)
{

    COUT<<"Nr. comanda: "<<Comanda1.nrComanda<<std::endl;

    COUT<<"Pret bon: "<<Comanda1.pretBon<<" lei"<<std::endl;
    return COUT;
}

//constructor de initializare pentru clasa Client
Client::Client(int id_client_, const std::string & metoda_plata_, const Comanda &cmd_) : id_client{id_client_}, metoda_plata{metoda_plata_}, cmd{cmd_}
{
}
std::ostream& operator<<(std::ostream &COUT,const Client &Client1)
{

    COUT<<"Id client: "<<Client1.id_client<<std::endl;
    COUT<<"Metoda plata: "<<Client1.metoda_plata<<std::endl;
    return COUT;
}



