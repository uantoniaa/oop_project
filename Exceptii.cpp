//
// Created by Asus on 04/01/2023.
//

#include "Exceptii.hpp"

eroare_cupon::eroare_cupon(const std::string &var) : eroare_clase("Eroare Cupon: " + var) {}

eroare_vanzari::eroare_vanzari() : eroare_clase("Eroare vanzari: Suma de bani de dupa vanzari nu poate fi la fel ca suma de bani de dinainte de vanzari.") {
}
eroare_produse::eroare_produse() : eroare_clase("Eroare produse: Vectorul de produse nu poate fi gol.") {}