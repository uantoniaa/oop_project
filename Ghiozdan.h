#include <iostream>
#include <string>
using std::string;
using std::ostream;


class Ghiozdan {
    int Pret;
    char Marime;
    int Culoare;
public:
    explicit Ghiozdan(int pret, char marime, int culoare);
    void setMarime(char marime);;
    char getMarime();;
    void setPret(int pret);
    int getPret();
    void setCuloare(int culoare);
    int getCuloare();

};
ostream &operator<<(ostream &COUT, Ghiozdan &Ghiozdan1);

