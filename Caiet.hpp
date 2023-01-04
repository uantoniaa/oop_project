//
// Created by Asus on 30/12/2022.
//

#ifndef UNTITLED6_CAIET_HPP
#define UNTITLED6_CAIET_HPP

#include "Produs.hpp"
class Caiet:public Produs {
    std::string marime;
    static int nrFileOblig;
    int nrFile;
    void afisare(std::ostream &COUT) const override;

public:
    Caiet(int pret, int nr, const std::string &firma, std::string marime);

    void setNrFile(int nrFilePlus);

    int promotie() override;

}
;

#endif //UNTITLED6_CAIET_HPP
