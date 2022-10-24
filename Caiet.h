#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Caiet {
    int Pret;
    char Marime;
public:
    explicit  Caiet(int pret, char marime);
    void setMarime(char marime);
    char getMarime();;
    void setPret(int pret);
    int getPret();

};
ostream &operator<<(ostream &COUT,  Caiet & Caiet1);
