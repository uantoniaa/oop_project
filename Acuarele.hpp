//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_ACUARELE_HPP
#define OOP_ACUARELE_HPP
#include <iostream>
#include <string>
class Acuarele{
    int nrAcuarele;
    int pret;
    int nrCulori;
public:
    Acuarele();
    Acuarele(int nrAcuarele_, int pret_, int nrCulori_);
    int getAcuarele();
    double getPret();
    double valoareAcuarele();
    friend std::ostream& operator<<(std::ostream& COUT,const Acuarele &Acuarele1);
};


#endif //OOP_ACUARELE_HPP
