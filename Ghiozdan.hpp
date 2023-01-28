//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_GHIOZDAN_HPP
#define UNTITLED6_GHIOZDAN_HPP

#include <memory>
#include "Produs.hpp"

class Ghiozdan : public Produs {
    std::string categorie;
    std::string culoare;

    void afisare(std::ostream &COUT) const override;

public:
    Ghiozdan(int pret, int nr, const std::string &firma, std::string categorie, std::string culoare);

    int promotie() override;

    std::shared_ptr<Produs> clone() const override {
        return std::make_shared<Ghiozdan>(*this);
    }
};


#endif //UNTITLED6_GHIOZDAN_HPP
