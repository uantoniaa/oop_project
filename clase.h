#include <iostream>
#include <string>
class Pix {
    int nrPixuri;
    int pret;
    std::string marime;
    std::string culoare;
public:
    Pix(int nrPixuri, int pret_, const std::string& marime_, const std::string& culoare_);
    Pix(const Pix& other);
    Pix& operator=(const Pix& other);
    ~Pix();
    friend std::ostream& operator<<(std::ostream& COUT, const Pix& Pix1);
    int getPixuri();
    double getPret();

};
class Acuarele{
    int nrAcuarele;
    int pret;
    int nrCulori;
public:
    Acuarele();
    Acuarele(int nrAcuarele_, int pret_, int nrCulori_);
    int getAcuarele();
    double getPret();
    friend std::ostream& operator<<(std::ostream& COUT,const Acuarele &Acuarele1);
};
class Caiet{
    int nrCaiete;
    int pret;
    std::string marime;
public:
    Caiet(int nrCaiete_, int pret_, const std::string& marime_);
    int getCaiete();
    double getPret();
    friend std::ostream& operator<<(std::ostream& COUT,const Caiet &Caiet1);

};
class Ghiozdan{
    int nrGhiozdane;
    int pret;
    std::string marime;
    std::string culoare;
public:
    Ghiozdan(int nrGhiozdane_, int pret_, const std::string& marime_,const std::string& culoare_);
    int getGhiozdane();
    double getPret();
    friend std::ostream& operator<<(std::ostream& COUT,const Ghiozdan &Ghiozdan1);
};

class Comanda {
    int nrComanda;
    Pix p;
    Acuarele ac;
    Ghiozdan g;
    Caiet c;
    double pretBon;

public:
    Comanda(int nrComanda_, const Pix &p,const Acuarele &ac,const Ghiozdan &g,const Caiet &c);
    //functie care calculeaza totalul comenzii si valorea finala a bonului, care aplica reducere de 50 de lei daca este mai mare de 150 lei
    void set_pretBon(Pix p, Acuarele ac, Ghiozdan g, Caiet c);
    friend std::ostream& operator<<(std::ostream& COUT,const Comanda &Comanda1);
};

class Client {
    int id_client;
    std::string metoda_plata;
    Comanda cmd;
public:
    Client(int id_client_, const std::string& metoda_plata, const Comanda &cmd);
    friend std::ostream& operator<<(std::ostream& COUT,const Client &Client1);
};
