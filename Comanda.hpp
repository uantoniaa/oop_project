//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_COMANDA_HPP
#define OOP_COMANDA_HPP
#include <iostream>
#include <string>
#include "Pix.hpp"
#include "Caiet.hpp"
#include "Ghiozdan.hpp"
#include "Acuarele.hpp"
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


#endif //OOP_COMANDA_HPP
