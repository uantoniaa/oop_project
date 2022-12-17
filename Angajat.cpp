#include "Angajat.hpp"


Angajat::Angajat(const std::string &nume, const std::string &prenume, int oreLucrate) : nume(nume), prenume(prenume),
                                                                                        ore_lucrate(oreLucrate) {}

double Angajat::marire_salariu() {
    int bonus = 0;
    if (ore_lucrate > 8 && ore_lucrate < 10)
        bonus+=100;
    return bonus;
}
std::ostream& operator<<(std::ostream &COUT,const Angajat &Angajat1)
{

    COUT<<"Nume angajat: "<<Angajat1.nume<<std::endl;
    COUT<<"Prenume: "<<Angajat1.prenume<<std::endl;
    COUT<<"Ore lucrate "<<Angajat1.ore_lucrate<<std::endl;
    return COUT;
}

int Angajat::getOreLucrate() const {
    return ore_lucrate;
}

