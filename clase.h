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
    double valoarePixuri();
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
    double valoareAcuarele();
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
    double valoareCaiete();
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
    double valoareGhiozdane();
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
    void set_pretBon();
    int get_pretBon();
    int getAcuarele_()
    {
        return ac.getAcuarele();
    }
    int getPixuri_()
    {
         return p.getPixuri();
    }
    int getGhiozdane_()
    {
        return g.getGhiozdane();
    }
    int getCaiete_()
    {
        return c.getCaiete();
    }
    friend std::ostream& operator<<(std::ostream& COUT,const Comanda &Comanda1);
};

class Client {
    int id_client;
    int puncte_fidelitate;
    std::string metoda_plata;
    Comanda cmd;

public:
    Client(int id_client_, int puncte_fidelitate_, const std::string& metoda_plata, const Comanda &cmd);
    void client_fidel(); //daca un client are comanda de peste 25 de lei, primeste un punct de fidelitate,
    // iar la 15 puncte de fidelitate primeste un cupon cu care isi poate lua un cadou
    friend std::ostream& operator<<(std::ostream& COUT,const Client &Client1);
};

class Stoc_magazin{
    int nrPixuri_stoc;
    int nrAcuarele_stoc;
    int nrGhiozdane_stoc;
    int nrCaiete_stoc;
    int sumaInitiala; // banii care sunt in magazin inainte de comanda
    Comanda cmd;
public:
    Stoc_magazin(int nrPixuri_stoc_, int nrAcuarele_stoc_, int nrGhiozdane_stoc_, int nrCaiete_stoc_, int sumaInitiala_, const Comanda &cmd);
    //functie care calculeaza nr de pixuri, acuarele, caiete si ghiozdane ramase dupa comanda
    void stoc_ramas();
    //functie care calculeaza suma de bani din magazin, de dupa comanda si
    //cu cat la suta a crescut suma de bani din magazin fata de ziua precedenta
    void sumaDupaVanzari();
    friend std::ostream& operator<<(std::ostream& COUT,const Stoc_magazin &Stoc_magazin1);

};
