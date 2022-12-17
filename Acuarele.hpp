#ifndef OOP_ACUARELE_HPP
#define OOP_ACUARELE_HPP
#include <iostream>
#include <string>
#include "Produs.hpp"

class Acuarele:public Produs{
    int nrAcuarele;
    int nrCulori;
    void afisare(std::ostream &COUT) const override;
public:


    Acuarele(int pret, const std::string &firma, int nrAcuarele, int nrCulori);
    int getAcuarele();
    double valoareAcuarele();
    int getAcuarele() const;
};


#endif //OOP_ACUARELE_HPP
