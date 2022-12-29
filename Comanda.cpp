#include "Comanda.hpp"

///                   constructor de initializare pentru clasa Comanda
Comanda::Comanda (int nrComanda_,const Pix &p_,const Acuarele &ac_,const Ghiozdan &g_,const Caiet &c_) : nrComanda{nrComanda_}, p{p_}, ac{ac_}, g{g_}, c{c_}
{}


void Comanda::set_pretBon()
{
    (*this).pretBon=0;
    (*this).pretBon = p.valoare() + g.valoare() + ac.valoare() + c.valoare();

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