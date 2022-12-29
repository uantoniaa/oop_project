//
// Created by Asus on 30/12/2022.
//

#include "Caiet.hpp"

#include <utility>


void Caiet::afisare(std::ostream &COUT) const {
    COUT<< "Marime: " <<marime << "\n"
        <<"Nr File: "<<nrFile << "\n";

}
int Caiet::promotie() {
    if(nr >= 15) {
        nr += 1;
        std::cout << "Acum, numarul caietelor este cu 1 mai mare, datorita promotiei, fiind " << nr << "." << std::endl;
    }
    return nr;
}
int Caiet::nrFileOblig = 45;
Caiet::Caiet(int pret, int nr, const std::string &firma, std::string marime) : Produs(pret, nr,firma), marime(std::move(marime)) {}

void Caiet::setNrFile(int nrFilePlus) {
    Caiet::nrFile = nrFileOblig+ nrFilePlus;
}
