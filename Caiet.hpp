//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_CAIET_HPP
#define OOP_CAIET_HPP
#include <iostream>
#include <string>
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

#endif //OOP_CAIET_HPP
