#include "clase.h"
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

///                   constructor de initializare pentru clasa Comanda
Comanda::Comanda (int nrComanda_,const Pix &p_,const Acuarele &ac_,const Ghiozdan &g_,const Caiet &c_) : nrComanda{nrComanda_}, p{p_}, ac{ac_}, g{g_}, c{c_}
{(*this).pretBon = 0;}


void Comanda::set_pretBon()
{

    (*this).pretBon = p.valoarePixuri() + g.valoareGhiozdane() + ac.valoareAcuarele() + c.valoareCaiete();

    if((*this).pretBon > 150 ) //calculeaza reducerea de 15%, in cazul in care bonul este mai mare de 150 de lei
        (*this).pretBon = (*this).pretBon - (0.15 * (*this).pretBon);


}
int Comanda::get_pretBon(){
    return pretBon;
}
std::ostream& operator<<(std::ostream &COUT,const Comanda &Comanda1) {


    COUT<<" Nr. comanda: "<<Comanda1.nrComanda<<std::endl;

    COUT<<" Pret bon: "<<Comanda1.pretBon<<" lei"<<std::endl;
    return COUT;
}

///                     constructor de initializare pentru clasa Client

Client::Client(int id_client_, int puncte_fidelitate_, const std::string & metoda_plata_, const Comanda &cmd_) : id_client{id_client_}, puncte_fidelitate{puncte_fidelitate_},metoda_plata{metoda_plata_}, cmd{cmd_}
{
}
void Client::client_fidel(){

    int cupon = 0;
    if(cmd.get_pretBon() >=25)
        puncte_fidelitate++;
    if(puncte_fidelitate >= 15) //la 15 puncte de fidelitate, clientul castiga un cupon
        cupon++;
    int punctePanaLaCupon = 15 - puncte_fidelitate;
    if(cupon >=1 )
        std::cout<<" Clientul isi poate alege un cadou. "<<std::endl;
    else
        std::cout<<" Clientului ii mai trebuie "<<punctePanaLaCupon<<" puncte de fidelitate pana isi poate alege un cadou"<<std::endl;
}
std::ostream& operator<<(std::ostream &COUT,const Client &Client1)
{

    COUT<<" ID client: "<<Client1.id_client<<std::endl;
    COUT<<" Metoda plata: "<<Client1.metoda_plata<<std::endl;
    COUT<<" Puncte de fidelitate: "<<Client1.puncte_fidelitate<<std::endl;
    return COUT;
}


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
