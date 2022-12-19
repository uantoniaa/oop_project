// Created by Asus on 14/12/2022.
//

#ifndef OOP_PIX_HPP
#define OOP_PIX_HPP
#include <iostream>
#include <string>
#include "Produs.hpp"
class Pix:public Produs {
    int nrPixuri;
    std::string marime;
    std::string culoare;
    void afisare(std::ostream &COUT) const override;
public:
    Pix(int pret, const std::string &firma, int nrPixuri, const std::string &marime, const std::string &culoare);

    Pix(const Pix& other);
    Pix& operator=(const Pix& other);
    ~Pix();
    int getPixuri() const;
    double valoare() const override {return getPret() * getPixuri();};
};


#endif //OOP_PIX_HPP