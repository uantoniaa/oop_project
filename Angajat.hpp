//
// Created by Asus on 09/02/2023.
//

#ifndef TEMA3_ANGAJAT_HPP
#define TEMA3_ANGAJAT_HPP

#include <vector>

template<typename A>
class Angajat;

template<typename A>
std::ostream &operator<<(std::ostream &COUT, const Angajat<A> &Angajat1);

//template<typename A>
//A distributieAngajati(const std::vector<Angajat<A>> &angajati);

template<typename A>
class Angajat {
    A id;
    A salariu;
    A varsta;
    A ani_experienta;
    A ore_lucrate;
public:
    explicit Angajat() = default;

    Angajat(A id_, A salariu_, A varsta_, A ani_experienta_, A ore_lucrate);

    A marire_salariu();

    Angajat<A> &operator=(const Angajat<A> &other) = default ;

    Angajat(const Angajat<A> &other) = default ;

    A getId() const;

//    friend A distributieAngajati <>(const std::vector<Angajat<A>>&angajati);

//    A getOreLucrate() const;

    friend std::ostream &operator<< <>(std::ostream &COUT, const Angajat<A> &Angajat1);

    ~Angajat() = default;
};


#endif //TEMA3_ANGAJAT_HPP
