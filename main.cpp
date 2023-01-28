#include <iostream>
#include "Ghiozdan.hpp"
#include "Pix.hpp"
#include "Caiet.hpp"
#include "Produs.hpp"
#include "Client.hpp"
#include "Comanda.hpp"
#include "Stoc_magazin.hpp"
#include "Exceptii.hpp"

int main() {
    //prima comanda
    std::cout << "\tPRIMA COMANDA" << std::endl;
    std::cout << "Date pix prima comanda:" << std::endl;
    Pix p1{5, 35, "Bic", "normal", "neagra"};
    std::cout << p1 << std::endl;

    std::cout << "Date Ghiozdan prima comanda:" << std::endl;
    Ghiozdan g1{60, 1, "Nike", "laptop", "rosu"};
    std::cout << g1 << std::endl;

    std::cout << "Date Caiet prima comanda:" << std::endl;
    Caiet c1{12, 4, "Scheinder", "A4"};
    c1.setNrFile(45);
    std::cout << c1 << std::endl;

    Comanda cmd1{18, {p1.clone(), c1.clone(), g1.clone()}};
    cmd1.afisareProdusScump();
    cmd1.afisarePromotie();
    std::cout << cmd1 << std::endl;
    std::cout << "Date stoc magazin: " << std::endl;
    Stoc_magazin St1(1000, 500, 700, 1544, cmd1, {p1.clone(), c1.clone(), g1.clone()});
    std::cout << St1 << std::endl;
    std::cout << "Stoc magazin dupa prima comanda:" << std::endl;
    St1.stoc_ramas();
    St1.sumaDupaVanzari();
    try {
        std::cout << "Date client 1: " << std::endl;
        Client cl1(18, "cash", cmd1);
        cl1.client_fidel();
        std::cout << cl1 << std::endl;

    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    try{
        St1.cautaProdus("Bic");
        St1.cautaProdus("Nike");
        St1.cautaProdus("Scheinder");
    }
    catch (eroare_cautare_produs &error) {std::cout << error.what() << std::endl; }
    return 0;
}
