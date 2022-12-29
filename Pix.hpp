//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_PIX_HPP
#define UNTITLED6_PIX_HPP
#include "Produs.hpp"

class Pix:public Produs {
    std::string specificatie; //prin specificatie se intelege cva pixurile pot fi cu roller, cu mecanism si grip, cu accente cromate, etc.
    std::string culoarePasta;
    void afisare(std::ostream &COUT) const override;
public:
    Pix(int pret, int nr, const std::string &firma, std::string specificatie, std::string culoarePasta);
    int promotie() override;

};


#endif //UNTITLED6_PIX_HPP
