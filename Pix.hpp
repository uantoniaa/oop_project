//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_PIX_HPP
#define UNTITLED6_PIX_HPP

#include "Produs.hpp"
#include <memory>

class Pix : public Produs {
    std::string specificatie; //prin specificatie se intelege ca pixurile pot fi cu roller, cu mecanism si grip, cu accente cromate, etc.
    std::string culoarePasta;
    friend class PixBuilder;
    void afisare(std::ostream &COUT) const override;

public:
    Pix() = default;
    Pix(int pret, int nr, const std::string &firma, std::string specificatie, std::string culoarePasta);

    int promotie() override;

    std::shared_ptr<Produs> clone() const override {
        return std::make_shared<Pix>(*this);
    }
};

class PixBuilder{
private:
    Pix p;
public:

    PixBuilder() = default;

    PixBuilder& pretPix(int pret_){
        p.pret = pret_;
        return (*this);
    }

    PixBuilder& nrPix(int nr_){
        p.nr = nr_;
        return (*this);
    }

    PixBuilder& firmaPix(const std::string &firma_){
        p.firma = firma_;
        return (*this);
    }

    PixBuilder& specificatiePix(const std::string &specificatie_){
        p.specificatie = specificatie_;
        return (*this);
    }

    PixBuilder& culoarePastaPix(const std::string &culoarePasta_){
        p.culoarePasta = culoarePasta_;
        return (*this);
    }
    Pix build(){
        return p;
    }
};

#endif //UNTITLED6_PIX_HPP
