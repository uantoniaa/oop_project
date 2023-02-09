//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_CAIET_HPP
#define UNTITLED6_CAIET_HPP

#include <memory>
#include "Produs.hpp"

class Caiet : public Produs {
    std::string marime;
    static int nrFileOblig;
    int nrFile{};
    friend class CaietBuilder;
    void afisare(std::ostream &COUT) const override;

public:
    Caiet() = default;
    Caiet(int pret, int nr, const std::string &firma, std::string marime);

    void setNrFile(int nrFilePlus);

    std::shared_ptr<Produs> clone() const override {
        return std::make_shared<Caiet>(*this);
    }

    int promotie() override;
};

class CaietBuilder{
private:
    Caiet c;
public:

    CaietBuilder() = default;

    CaietBuilder& pretCaiet(int pret_){
        c.pret = pret_;
        return (*this);
    }

    CaietBuilder& nrCaiet(int nr_){
        c.nr = nr_;
        return (*this);
    }

    CaietBuilder& firmaCaiet(const std::string &firma_){
        c.firma = firma_;
        return (*this);
    }

    CaietBuilder& marimeCaiet(const std::string &marime_){
        c.marime = marime_;
        return (*this);
    }

    Caiet build(){
        return c;
    }
};

#endif //UNTITLED6_CAIET_HPP
