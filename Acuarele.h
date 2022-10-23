#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Acuarele {
    int Pret;
    int NrCulori;
public:
    explicit Acuarele(int pret, int nrCulori);
    void setPret(int pret);
    int getPret();
    void setNrCulori(int nrCulori);
    int getNrCulori();

};
ostream &operator<<(ostream &COUT, Acuarele &Acuarele1);

