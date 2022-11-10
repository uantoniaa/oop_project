#include <iostream>
#include <string>

class Pix {
    int pret;
    std::string marime;
    std::string culoare;
public:
    Pix(int pret_, const std::string& marime_, const std::string& culoare_);
    Pix(const Pix& other);
    Pix& operator=(const Pix& other);
    ~Pix();
    friend std::ostream& operator<<(std::ostream& COUT, const Pix& Pix1);


};
class Acuarele{
    int pret;
    int nrCulori;
public:
    Acuarele();
    Acuarele(int pret_, int nrCulori_);

    friend std::ostream& operator<<(std::ostream& COUT,const Acuarele &Acuarele1);
};
class Caiet{
    int pret;
    std::string marime;
public:
    Caiet(int pret_, const std::string& marime_);

    friend std::ostream& operator<<(std::ostream& COUT,const Caiet &Caiet1);

};
class Ghiozdan{
    int pret;
    std::string marime;
    std::string culoare;
public:
    Ghiozdan(int pret_, const std::string& marime_,const std::string& culoare_);
    friend std::ostream& operator<<(std::ostream& COUT,const Ghiozdan &Ghiozdan1);
};
class Client{
    int nrProduseAchizitionate;
    int pretBon;
public:
    Client(int nrProduseAchizitionate_, int pretBon_);
    friend std::ostream& operator<<(std::ostream &COUT, const Client &Client1);
};
