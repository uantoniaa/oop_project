//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_PIX_HPP
#define UNTITLED6_PIX_HPP
#include "Produs.hpp"
#include <memory>
class Pix:public Produs {
    std::string specificatie; //prin specificatie se intelege ca pixurile pot fi cu roller, cu mecanism si grip, cu accente cromate, etc.
    std::string culoarePasta;
    void afisare(std::ostream &COUT) const override;
public:
    Pix(int pret, int nr, const std::string &firma, std::string specificatie, std::string culoarePasta);
    int promotie() override;
    std::shared_ptr<Produs> clone() const override {
        return std::make_shared<Pix>(*this);
    }
    };


#endif //UNTITLED6_PIX_HPP
