#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Pix {
    int Pret;
    char Marime;
    int Culoare;
public:
    explicit Pix(int pret, char marime, int culoare);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();
    void setCuloare(int culoare);
    int getCuloare();

};
ostream &operator<<(ostream &COUT, Pix &Pix1);

