//
// Created by Asus on 16/12/2022.
//

#ifndef OOP_ANGAJAT_HPP
#define OOP_ANGAJAT_HPP

#include <iostream>
#include <string>

class Angajat {
    std::string nume;
    std::string prenume;
protected:
    int ore_lucrate;
public:


    Angajat(const std::string &nume, const std::string &prenume, int oreLucrate);

    int getOreLucrate() const;

    virtual double marire_salariu()=0;
    friend std::ostream& operator<<(std::ostream& COUT, const Angajat &Angajat1);
};



#endif //OOP_ANGAJAT_HPP
