#ifndef OOP_STOC_MAGAZIN_HPP
#define OOP_STOC_MAGAZIN_HPP
#include <iostream>
#include <string>
#include "Comanda.hpp"
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

#endif //OOP_STOC_MAGAZIN_HPP
