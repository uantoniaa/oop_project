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


#endif //OOP_GHIOZDAN_HPP