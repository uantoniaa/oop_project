#include <iostream>
#include "Ghiozdan.hpp"
#include "Pix.hpp"
#include "Caiet.hpp"
#include "Produs.hpp"
#include "Client.hpp"
#include "Comanda.hpp"
#include "Stoc_magazin.hpp"
#include "Exceptii.hpp"
#include "Angajat.hpp"

int main() {
    //prima comanda
    std::cout << " Angajatii magazinului: " << std::endl;

    Angajat<int> a1(1, 3500, 27, 3, 8);
    std::cout << a1 << std::endl;
    a1.marire_salariu();

    Angajat<int> a2(2, 3200, 24, 5, 8);
    std::cout << a2 << std::endl;
    a2.marire_salariu();

    Angajat<int> a3(3, 4000, 30, 7, 9);
    std::cout << a3 << std::endl;
    a3.marire_salariu();


    std::cout << "\n\n PRIMA COMANDA" << std::endl;

    std::cout << " Date pix prima comanda:" << std::endl;
    PixBuilder pb;
    Pix p1=pb.pretPix(5).nrPix(35).firmaPix("Bic").specificatiePix("cu gel").culoarePastaPix("neagra").build();
    std::cout << p1 << std::endl;

    std::cout << " Date Ghiozdan prima comanda:" << std::endl;
    GhiozdanBuilder gb;
    Ghiozdan g1=gb.pretGhiozdan(60).nrGhiozdan(1).firmaGhiozdan("Nike").marimeGhiozdan("laptop").culoareGhiozdan("rosu").build();
    std::cout << g1 << std::endl;

    std::cout << " Date Caiet prima comanda:" << std::endl;
    CaietBuilder cb;
    Caiet c1=cb.pretCaiet(12).nrCaiet(4).firmaCaiet("Scheinder").marimeCaiet("A4").build();
    c1.setNrFile(45);
    std::cout << c1 << std::endl;

    Comanda cmd1{18, {p1.clone(), c1.clone(), g1.clone()}, a2};
    cmd1.afisareProdusScump();
    cmd1.afisarePromotie();
    std::cout << cmd1 << std::endl;
    std::cout << " Date stoc magazin: " << std::endl;
    Stoc_magazin St1(1000, 500, 700, 1544, cmd1, {p1.clone(), c1.clone(), g1.clone()});
    std::cout << St1 << std::endl;
    std::cout << " Stoc magazin dupa prima comanda:" << std::endl;
    St1.stoc_ramas();
    St1.sumaDupaVanzari();
    try {
        std::cout << " Date client 1: " << std::endl;
        Client cl1(18, "cash", cmd1);
        cl1.client_fidel();
        std::cout << cl1 << std::endl;

    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    try {
        St1.cautaProdus("Bic");
        St1.cautaProdus("Nike");
        St1.cautaProdus("Scheinder");
    }
    catch (eroare_cautare_produs &error) { std::cout << error.what() << std::endl; }
    return 0;
}
