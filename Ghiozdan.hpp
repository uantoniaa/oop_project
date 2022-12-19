//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_GHIOZDAN_HPP
#define OOP_GHIOZDAN_HPP
#include <iostream>
#include <string>
#include "Produs.hpp"
class Ghiozdan:public Produs{
    int nrGhiozdane;
    std::string marime;
    std::string culoare;
    void afisare(std::ostream &COUT) const override;
public:
    Ghiozdan(int pret, const std::string &firma, int nrGhiozdane, const std::string &marime,
             const std::string &culoare);

    int getGhiozdane() const;
    double valoare() const override {return getPret() * getGhiozdane();};
};


#endif //OOP_GHIOZDAN_HPP