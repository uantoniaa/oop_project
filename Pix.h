#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Pix {
    int Pret;
    char Marime;
    char Culoare;
public:
    explicit Pix(int pret, char marime, char culoare);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();
    void setCuloare(char culoare);
    char getCuloare();

};
ostream &operator<<(ostream &COUT, Pix &Pix1);

