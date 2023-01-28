//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_COMANDA_HPP
#define UNTITLED6_COMANDA_HPP

#include "Produs.hpp"
#include <vector>
#include "Angajat.hpp"

class Comanda {
    int nrComanda{};
    std::vector<std::shared_ptr<Produs>> produse;
    double pretBon{};
    Angajat<int> a;
public:
    Comanda(int nrComanda, std::vector<std::shared_ptr<Produs>> produse, Angajat<int> a);

    double calculareBon();

    friend std::ostream &operator<<(std::ostream &COUT, const Comanda &comanda);

    void afisareProdusScump();

    Comanda &operator=(Comanda other);

    Comanda(const Comanda &other);

    double getPretBon() const;

    void afisarePromotie();

    friend void swap(Comanda &cmd1, Comanda &cmd2);

    virtual ~Comanda();
};


#endif //UNTITLED6_COMANDA_HPP
