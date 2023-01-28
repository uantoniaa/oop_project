//
// Created by Asus on 09/02/2023.
//

#include <iostream>
#include "Angajat.hpp"

template<typename A>
Angajat<A>::Angajat(A id, A salariu, A varsta, A aniExperienta) : id(id), salariu(salariu), varsta(varsta),
                                                                  ani_experienta(aniExperienta) {}

template<typename A>
A Angajat<A>::marire_salariu() {
    if (ani_experienta > 5) {
        salariu = salariu + 0.25 * salariu;
        std::cout << " Salariul este acum de " << salariu << " lei.";
    }
}

template<typename A>
A Angajat<A>::getId() const {
    return id;
}

template<typename A>
std::ostream &operator<<(std::ostream &COUT, const Angajat<A> &Angajat1) {
    COUT << " ID: " << Angajat1.id << std::endl;
    COUT << " Salariu: " << Angajat1.salariu << " lei" << std::endl;
    COUT << " Varsta: " << Angajat1.varsta << std::endl;
    COUT << " Ani de experienta: " << Angajat1.ani_experienta << std::endl;
    return COUT;
}