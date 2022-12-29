//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_PRODUS_HPP
#define UNTITLED6_PRODUS_HPP

#include <iostream>
#include <string>
#include <memory>
class Produs {
private:
    int pret{};
protected:
    int nr;
private:
    std::string firma;
    virtual void afisare(std::ostream &) const;
public:
    Produs();
    Produs(int pret, int nr, std::string firma);
    friend std::ostream& operator<<(std::ostream& COUT,const Produs &Produs1);
    virtual int promotie();
    double valoare() const;
    int getNr() const ;
    int getPret() const;
    virtual ~Produs();
};

#endif //UNTITLED6_PRODUS_HPP
