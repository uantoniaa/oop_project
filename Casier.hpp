//
// Created by Asus on 16/12/2022.
//

#ifndef OOP_CASIER_HPP
#define OOP_CASIER_HPP
#include <iostream>
#include <string>
#include "Angajat.hpp"
class Casier: public Angajat {
    int salariu;
    int vechime;// orele lucrate pe zi, pentru a se tine evidenta orelor lucrate in plus, daca este nevoie sa se lucreze peste program
public:
    Casier(const std::string &nume, const std::string &prenume, int oreLucrate, int salariu, int vechime);

    double marire_salariu() override;

    int getSalariu() const;

    int getVechime() const;
};


#endif //OOP_CASIER_HPP