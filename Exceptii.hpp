//
// Created by Asus on 04/01/2023.
//

#ifndef OOP_EXCEPTII_HPP
#define OOP_EXCEPTII_HPP
#include <stdexcept>
#include <string>

class eroare_clase : public std::runtime_error{
    using std::runtime_error::runtime_error;
};
//trebuie ca fiecare client sa aiba un cupon
class eroare_cupon : public eroare_clase {
public:
    explicit eroare_cupon(const std::string &var);
};
//trebuie ca suma de dupa vanzari sa fie mai mare decat cea de dinainte de vanzari
class eroare_vanzari : public eroare_clase {
public:
    explicit eroare_vanzari();
};

class eroare_cautare_produs : public eroare_clase {
public:
    explicit eroare_cautare_produs();
};

#endif //OOP_EXCEPTII_HPP
