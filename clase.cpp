#include "clase.h"

//constructor de initializare pentru clasa Pix
Pix::Pix(int pret_,const std::string& marime_,const std::string& culoare_) : pret{pret_}, marime{marime_}, culoare{culoare_} {
}

//constructor de copiere pentru clasa Pix
Pix::Pix(const Pix& other):pret{other.pret}, marime{other.marime}, culoare{other.culoare} {
}

//operator= copiere Pix
Pix&Pix::operator=(const Pix& other){
        pret = other.pret;
        marime = other.marime;
        culoare=other.culoare;
;
        return *this;
    }

//destructor Pix
Pix::~Pix(){
}

std::ostream& operator<<(std::ostream& COUT, const Pix &Pix1) {
    COUT <<"Pret:"<<Pix1.pret<<std::endl;
    COUT <<"Marime:"<<Pix1.marime<<std::endl;
    COUT <<"Culoare:"<<Pix1.culoare<<std::endl;
    return COUT;
}

//constructor de initializare pentru clasa Acuarele
Acuarele::Acuarele() {
}
Acuarele::Acuarele(int pret_, int nrCulori_) : pret{pret_}, nrCulori{nrCulori_} {
}
std::ostream& operator<<(std::ostream& COUT, const Acuarele &Acuarele1) {
    COUT << "Pret:"<< Acuarele1.pret<<std::endl;
    COUT << "NrCulori:"<<Acuarele1.nrCulori<<std::endl;
    return COUT;
}

//constructor de initializare pentru clasa Caiet
Caiet::Caiet(int pret_,const std::string& marime_) : pret{pret_}, marime{marime_} {
}
std::ostream& operator<<(std::ostream &COUT,const Caiet &Caiet1) {
    COUT<<"Pret:"<<Caiet1.pret<<std::endl;
    COUT<<"Marime:"<<Caiet1.marime<<std::endl;
    return COUT;
}
Ghiozdan::Ghiozdan(int pret_, const std::string& marime_, const std::string & culoare_) : pret{pret_}, marime{marime_}, culoare{culoare_} {
}
std::ostream& operator<<(std::ostream &COUT,const Ghiozdan &Ghiozdan1) {
    COUT<<"Pret:"<<Ghiozdan1.pret<<std::endl;
    COUT<<"Marime:"<<Ghiozdan1.marime<<std::endl;
    COUT<<"Culoare:"<<Ghiozdan1.culoare<<std::endl;
    return COUT;
}
