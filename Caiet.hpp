//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_CAIET_HPP
#define OOP_CAIET_HPP
#include <iostream>
#include <string>
#include "Produs.hpp"
class Caiet:public Produs{
    int nrCaiete;
    std::string marime;
    void afisare(std::ostream &COUT) const override;
public:
    Caiet(int pret, const std::string &firma, int nrCaiete, const std::string &marime);


    int getCaiete() const;
    double valoare() const override{return getPret() * getCaiete();};
};

#endif //OOP_CAIET_HPP