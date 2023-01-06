//
// Created by Asus on 30/12/2022.
//

#include "Ghiozdan.hpp"

#include <utility>

Ghiozdan::Ghiozdan(int pret, int nr, const std::string &firma, std::string categorie, std::string culoare)
        : Produs(pret, nr, firma), categorie(std::move(categorie)), culoare(std::move(culoare)) {}

void Ghiozdan::afisare(std::ostream &COUT) const {
    COUT << "Categorie: " << categorie << "\n" << "Culoare: " << culoare << "\n";
}

int Ghiozdan::promotie() {
    if (nr >= 12 && getPret() >= 80) {
        nr += 2;
        std::cout << "Acum, numarul ghiozdanelor este cu 2 mai mare, datorita promotiei, fiind " << nr << "."
                  << std::endl;
    }
    return nr;
}
