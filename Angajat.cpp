//
// Created by Asus on 09/02/2023.
//

#include <iostream>
#include "Angajat.hpp"

template<typename A>
Angajat<A>::Angajat(A id_, A salariu_, A varsta_, A ani_experienta_, A orelucrate_) : id(id_), salariu(salariu_),
                                                                                      varsta(varsta_),
                                                                                      ani_experienta(ani_experienta_),
                                                                                      ore_lucrate(orelucrate_) {}

//template<typename A>
//A distributieAngajati(const std::vector<Angajat<A>> &angajati) {
//
//    for (const auto &a: angajati) {
//        if (a.getOreLucrate() <= 1) {
//            int ore_lucrate_p = a.getOreLucrate();
//            ore_lucrate_p += 2;
//            std::cout << "Angajatul cu ID-ul " << a.getId() << " va lucra " << ore_lucrate_p
//                      << " ore pe zi timp de o luna.";
//        }
//
//        return 0;
//    }
//}
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



//template<typename A>
//A Angajat<A>::getOreLucrate() const {
//    return ore_lucrate;
//}

template<typename A>
std::ostream &operator<<(std::ostream &COUT, const Angajat<A> &Angajat1) {
    COUT << " ID: " << Angajat1.id << std::endl;
    COUT << " Salariu: " << Angajat1.salariu << " lei" << std::endl;
    COUT << " Varsta: " << Angajat1.varsta << std::endl;
    COUT << " Ani de experienta: " << Angajat1.ani_experienta << std::endl;
    COUT << " Numarul de ore lucrate: " << Angajat1.ore_lucrate << std::endl;
    return COUT;
}


//template<typename A>
//Angajat<A>::Angajat(const Angajat<A> &other) : id(other.id), salariu(other.salariu),
//                                               varsta(other.varsta),
//                                               ani_experienta(other.ani_experienta),
//                                               ore_lucrate(other.ore_lucrate) {}

//template<typename A>
//Angajat<A> &Angajat<A>::operator=(const Angajat<A> &other) {
//    id = other.id;
//    salariu = other.salariu;
//    varsta = other.varsta;
//    ani_experienta = other.ani_experienta;
//    ore_lucrate = other.ore_lucrate;
//    return (*this);
//}


