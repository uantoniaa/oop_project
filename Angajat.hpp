//
// Created by Asus on 09/02/2023.
//

#ifndef TEMA3_ANGAJAT_HPP
#define TEMA3_ANGAJAT_HPP

template<typename A>
class Angajat;

template<typename A>
std::ostream &operator<<(std::ostream &COUT, const Angajat<A> &Angajat1);

template<typename A>
class Angajat {
    A id;
    A salariu;
    A varsta;
    A ani_experienta;
public:
    explicit Angajat();

    Angajat(A id_, A salariu_, A varsta_, A ani_experienta_);

    A marire_salariu();

    Angajat<A> &operator=(const Angajat<A> &other) = default;

    Angajat(const Angajat<A> &other) = default;

    A getId() const;

    friend std::ostream &operator<<<>(std::ostream &COUT, const Angajat<A> &Angajat1);

    ~Angajat() = default;
};


#endif //TEMA3_ANGAJAT_HPP
