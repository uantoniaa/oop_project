#include <iostream>
#include <vector>
#include <algorithm>
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
    std::vector<Produs *> produse;
    Pix p1{5, 35, "Bic", "normal", "neagra"};
    Produs *pr1 = &p1;
    std::cout << p1 << std::endl;

    std::cout << "Date Ghiozdan prima comanda:" << std::endl;
    Ghiozdan g1{60, 1, "Nike", "laptop", "rosu"};
    Produs *pr2 = &g1;
    std::cout << g1 << std::endl;

    std::cout << "Date Caiet prima comanda:" << std::endl;
    Caiet c1{12, 4, "Scheinder", "A4"};
    Produs *pr3 = &c1;
    c1.setNrFile(45);
    std::cout << c1 << std::endl;

    produse.push_back(pr1);
    produse.push_back(pr2);
    produse.push_back(pr3);

    Comanda cmd1{18, produse};
    cmd1.afisareProdusScump();
    std::cout << cmd1 << std::endl;
    //functie de sortare a produselor dupa pretul acestora

    std::cout << "Date client 1: " << std::endl;
    Client cl1(18, "cash", cmd1);
    try {
        cl1.client_fidel();
    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    std::cout << cl1 << std::endl;

    std::cout << "Date stoc magazin: " << std::endl;
    Stoc_magazin St1(1000, 500, 700, 1544, cmd1, produse);
    std::cout << St1 << std::endl;
    std::cout << "Stoc magazin dupa prima comanda:" << std::endl;
    St1.stoc_ramas();
    try { St1.sumaDupaVanzari(); }
    catch (eroare_vanzari &error) { std::cout << error.what() << std::endl; }

    //a doua comanda
    std::cout << "\tA DOUA COMANDA" << std::endl;
    std::cout << "Date pix a doua comanda:" << std::endl;
    std::vector<Produs *> produse2;
    Pix p2{6, 20, "Pilot", "mecanism acroball", "albastru"};
    Produs *pr4 = &p2;
    std::cout << p2 << std::endl;

    std::cout << "Date Ghiozdan a doua comanda:" << std::endl;
    Ghiozdan g2{80, 2, "Vans", "scoala-copii", "roz"};
    Produs *pr5 = &g2;
    std::cout << g2 << std::endl;

    std::cout << "Date Caiet a doua comanda:" << std::endl;
    Caiet c2{8, 8, "Sigma", "A5"};
    Produs *pr7 = &c2;
    c2.setNrFile(75);

    std::cout << c2 << std::endl;
    produse2.push_back(pr4);
    produse2.push_back(pr5);
    produse2.push_back(pr7);

    Comanda cmd2{19, produse2};
    cmd2.afisareProdusScump();
    std::cout << cmd2 << std::endl;
    std::cout << "Date client 2: " << std::endl;
    Client cl2(25, "cash", cmd2);
    try {
        cl2.client_fidel();
    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    std::cout << cl2 << std::endl;

    std::cout << "Date stoc magazin: " << std::endl;
    Stoc_magazin St2(St1.getNrPixuriStoc(), St1.getNrGhiozdaneStoc(), St1.getNrCaieteStoc(), St1.sumaDupaVanzari(),  cmd2, produse2);
    std::cout << St2 << std::endl;
    std::cout << "Stoc magazin dupa a doua comanda:" << std::endl;
    St2.stoc_ramas();
    try { St2.sumaDupaVanzari(); }
    catch (eroare_vanzari &error) { std::cout << error.what() << std::endl; }
//    auto vecprd = {p1.clone(), c1.clone(), g1.clone(), p2.clone(), c2.clone(), g2.clone()};
////    for (const auto & it : vecprd) {
////        std::cout << "Produsul are pretul de " <<it->getPret() << " lei si apartine firmei " << it->getFirma() << "." << std::endl;
////    }
//    auto *prd= reinterpret_cast<Produs *>(&vecprd);
//    prd->promotie();
    std::cout << std::endl;
//    try {
        St2.cautaProdus("Pilot");
        St2.cautaProdus("Vans");
        St2.cautaProdus("Sigma");
//    }
//    catch (eroare_vanzari &error) { std::cout << error.what() << std::endl; }
    return 0;
}
