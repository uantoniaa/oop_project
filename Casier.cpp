#include "Casier.hpp"
int Casier::getSalariu() const {
    return salariu;
}

int Casier::getVechime() const {
    return vechime;
}

Casier::Casier(const std::string &nume, const std::string &prenume, int oreLucrate, int salariu, int vechime) : Angajat(
        nume, prenume, oreLucrate), salariu(salariu), vechime(vechime) {}

double Casier::marire_salariu(){
    int bonus = 0;
    if (ore_lucrate > 8 && ore_lucrate < 10)
        bonus+=100;
    int marire = 0;
    if(vechime >= 5)
        marire += 300;
    if(vechime >= 10)
        marire += 800;
    return bonus+marire;
}