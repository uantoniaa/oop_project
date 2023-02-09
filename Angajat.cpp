//
// Created by Asus on 09/02/2023.
//

#include <iostream>
#include "Angajat.hpp"

template<typename A>
Angajat<A>::Angajat(A id_, A salariu_, A varsta_, A ani_experienta_) : id(id_), salariu(salariu_), varsta(varsta_),
                                                                  ani_experienta(ani_experienta_) {}

template<typename A>
A Angajat<A>::marire_salariu() {
    if (ani_experienta > 5) {
        salariu = salariu + 0.25 * salariu;
        std::cout << " Salariul este acum de " << salariu << " lei.";
    }
    return 0;
}

template<typename A>
A Angajat<A>::getId() const {
    return id;
}

template<typename A>
Angajat<A>::Angajat() {}

template<typename A>
std::ostream &operator<<(std::ostream &COUT, const Angajat<A> &Angajat1) {
    COUT << " ID: " << Angajat1.id << std::endl;
    COUT << " Salariu: " << Angajat1.salariu << " lei" << std::endl;
    COUT << " Varsta: " << Angajat1.varsta << std::endl;
    COUT << " Ani de experienta: " << Angajat1.ani_experienta << std::endl;
    return COUT;
}