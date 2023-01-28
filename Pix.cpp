//
// Created by Asus on 30/12/2022.
//

#include "Pix.hpp"

#include <utility>

Pix::Pix(int pret, int nr, const std::string &firma, std::string specificatie, std::string culoarePasta) : Produs(
        pret, nr, firma), specificatie(std::move(specificatie)), culoarePasta(std::move(culoarePasta)) {}

void Pix::afisare(std::ostream &COUT) const {
    COUT << " Specificatie: " << specificatie << "\n" << " Culoare pasta: " << culoarePasta << "\n";
}

int Pix::promotie() {
    if (nr >= 30 && getFirma() == "Bic") {
        nr += 6;
        std::cout << " Acum, numarul pixurilor este cu 6  mai mare, datorita promotiei, fiind " << nr << "."
                  << std::endl << std::endl;
    }
    return nr;
}
