#include "Acuarele.hpp"
///                 constructor de initializare pentru clasa Acuarele

//
//int Acuarele::getAcuarele() const
//{
//    return nrAcuarele;
//}
//
//
//Acuarele::Acuarele(int pret, const std::string &firma, int nrAcuarele, int nrCulori) : Produs(pret, firma),
//                                                                                       nrAcuarele(nrAcuarele),
//                                                                                       nrCulori(nrCulori) {}
//void Produs::afisare(std::ostream &COUT) const {
//    COUT << "Numar acuarele: " << Acuarele.nrAcuarele << " ani\n"
//       << "Numar culori: " << Acuarele.nrCulori << "\n";

#include "Acuarele.hpp"




Acuarele::Acuarele(int pret, const std::string &firma, int nrAcuarele, int nrCulori) : Produs(pret, firma),
                                                                                       nrAcuarele(nrAcuarele),
                                                                                       nrCulori(nrCulori) {}

void Acuarele::afisare(std::ostream &COUT) const {
    COUT << "Numar acuarele: " << nrAcuarele << " ani\n"
         << "Numar culori: " <<nrCulori << "\n";
}

int Acuarele::getAcuarele()
{
    return nrAcuarele;
}

double Acuarele::valoareAcuarele(){
    return getPret() * getAcuarele();
}