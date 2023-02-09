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
    friend class GhiozdanBuilder;
    void afisare(std::ostream &COUT) const override;

public:
    Ghiozdan() = default;
    Ghiozdan(int pret, int nr, const std::string &firma, std::string categorie, std::string culoare);

    int promotie() override;

    std::shared_ptr<Produs> clone() const override {
        return std::make_shared<Ghiozdan>(*this);
    }
};

class GhiozdanBuilder{
private:
    Ghiozdan g;
public:

    GhiozdanBuilder() = default;

    GhiozdanBuilder& pretGhiozdan(int pret_){
        g.pret = pret_;
        return (*this);
    }

    GhiozdanBuilder& nrGhiozdan(int nr_){
        g.nr = nr_;
        return (*this);
    }

    GhiozdanBuilder& firmaGhiozdan(const std::string &firma_){
        g.firma = firma_;
        return (*this);
    }

    GhiozdanBuilder& marimeGhiozdan(const std::string &categorie_){
        g.categorie = categorie_;
        return (*this);
    }

    GhiozdanBuilder& culoareGhiozdan(const std::string &culoare_){
        g.culoare = culoare_;
        return (*this);
    }
    Ghiozdan build(){
        return g;
    }
};

#endif //UNTITLED6_GHIOZDAN_HPP
