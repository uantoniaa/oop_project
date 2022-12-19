#include "Acuarele.hpp"
Acuarele::Acuarele(int pret, const std::string &firma, int nrAcuarele, int nrCulori) : Produs(pret, firma),
                                                                                       nrAcuarele(nrAcuarele),
                                                                                       nrCulori(nrCulori) {}

void Acuarele::afisare(std::ostream &COUT) const {
    COUT << "Numar acuarele: " << nrAcuarele << " ani\n"
         << "Numar culori: " <<nrCulori << "\n";
}

int Acuarele::getAcuarele() const
{
    return nrAcuarele;
}
