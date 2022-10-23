#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Acuarele {
    int Pret;
    char Marime;
    int NrCulori;
public:
    explicit Acuarele(int pret, char marime, int nrCulori);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();
    void setNrCulori(int nrCulori);
    int getNrCulori();

};
ostream &operator<<(ostream &COUT, Acuarele &Acuarele1);

