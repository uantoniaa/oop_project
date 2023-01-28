//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_COMANDA_HPP
#define UNTITLED6_COMANDA_HPP
#include "Produs.hpp"
#include <vector>


class Comanda{
    int nrComanda = 0;
    std::vector<std::shared_ptr<Produs>> produse;
    double pretBon = 0.0;
public:
    Comanda() = default;
    Comanda(int nrComanda,std::vector<std::shared_ptr<Produs>> produse);
    double calculareBon();
    friend std::ostream& operator<<(std::ostream& COUT,const Comanda &comanda);
    void afisareProdusScump();
    Comanda &operator=(Comanda other) ;
    Comanda(const Comanda &other) ;
    double getPretBon() const;
    void afisarePromotie();
    friend void swap(Comanda &cmd1, Comanda &cmd2);
};


#endif //UNTITLED6_COMANDA_HPP
