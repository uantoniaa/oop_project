//
// Created by Asus on 17/12/2022.
//

#ifndef OOP_PRODUS_HPP
#define OOP_PRODUS_HPP

#include <iostream>
#include <string>

class Produs {
private:
    int pret;
    std::string firma;
    virtual void afisare(std::ostream &) const;
public:
    Produs(int pret, const std::string &firma);
    Produs();
    friend std::ostream& operator<<(std::ostream& COUT,const Produs &Produs1);
    virtual double valoare() const{return getPret();}

    virtual ~Produs();
    int getPret() const;
};


#endif //OOP_PRODUS_HPP
