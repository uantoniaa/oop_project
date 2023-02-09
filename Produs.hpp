//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_PRODUS_HPP
#define UNTITLED6_PRODUS_HPP

#include <iostream>
#include <string>
#include <memory>

class Produs {
protected:
    int nr{};
    int pret{};
    std::string firma;
public:
    int getPret() const;

protected:
    Produs &operator=(const Produs &other) = default;

    Produs(const Produs &other) = default;

private:

    virtual void afisare(std::ostream &) const;

public:
    Produs();

    Produs(int pret, int nr, std::string firma);

    virtual std::shared_ptr<Produs> clone() const = 0;

    friend std::ostream &operator<<(std::ostream &COUT, const Produs &Produs1);

    virtual int promotie() = 0;

    const std::string &getFirma() const;

    double valoare() const;

    int getNr() const;


    virtual ~Produs();
};

#endif //UNTITLED6_PRODUS_HPP
