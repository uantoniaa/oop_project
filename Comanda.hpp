//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_COMANDA_HPP
#define UNTITLED6_COMANDA_HPP
#include "Produs.hpp"
#include <vector>


class Comanda:public Produs {
    int nrComanda;
    std::vector<Produs> produse;
    double pretBon{};
public:
    Comanda(int nrComanda, std::vector<Produs> produse);

    void set_pretBon();
    double get_pretBon() const;
    friend std::ostream& operator<<(std::ostream& COUT,const Comanda &Comanda1);
};


#endif //UNTITLED6_COMANDA_HPP
