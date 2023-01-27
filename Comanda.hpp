//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_COMANDA_HPP
#define UNTITLED6_COMANDA_HPP
#include "Produs.hpp"
#include <vector>


class Comanda{
    int nrComanda{};
    std::vector<Produs*> produse;
    double pretBon{};
public:
    Comanda() = default;
    Comanda(int nrComanda, std::vector<Produs*> produse);
    double calculareBon();
    friend std::ostream& operator<<(std::ostream& COUT,const Comanda &comanda);
    void afisareProdusScump();
    Comanda &operator=(const Comanda &other) ;
    Comanda(const Comanda &other) ;
    double getPretBon() const;

    static double cmpr(Produs *pr1, Produs *pr2);
};


#endif //UNTITLED6_COMANDA_HPP
