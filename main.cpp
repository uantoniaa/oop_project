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

double cmp(Produs *pr1, Produs *pr2) {
    return pr1->getPret() < pr2->getPret();
}

int main() {
    //prima comanda
    std::cout << "\tPRIMA COMANDA" << std::endl;
    std::cout << "Date pix prima comanda:" << std::endl;
    std::vector<Produs*> produse;
    Pix p1{5, 35, "Bic", "normal", "neagra"};
    auto* pr1 = dynamic_cast<Produs*>(&p1);
    std::cout << p1 << std::endl;
    p1.promotie();

    std::cout << "Date Ghiozdan prima comanda:" << std::endl;
    Ghiozdan g1{60, 1, "Nike", "laptop", "rosu"};
    auto* pr2 = dynamic_cast<Produs*>(&g1);
    std::cout << g1 << std::endl;
    g1.promotie();
    std::cout << "Date Caiet prima comanda:" << std::endl;
    Caiet c1{12, 4, "Scheinder", "A4"};
    auto* pr3 = dynamic_cast<Produs*>(&c1);
    c1.setNrFile(45);
    std::cout << c1 << std::endl;
    c1.promotie();
    try{
    produse.push_back(pr1);
    produse.push_back(pr2);
    produse.push_back(pr3);}
    catch (eroare_produse &error) { std::cout << error.what() << std::endl; }
    Comanda cmd1{18, produse};
    cmd1.set_pretBon();
    std::cout << cmd1 << std::endl;
    //functie de sortare a produselor dupa pretul acestora
    std::sort(produse.begin(), produse.end(), cmp);
    std::size_t n = produse.size(); //astfel, cu vectorul ordonat crescator, stim ca ultimul element(de pe pozitia n-1) va fi cel mai scump
    std::cout << "Cel mai scump produs este cel cu pretul de " << produse[n - 1]->getPret() << " de lei." << std::endl
              << std::endl;

    std::cout << "Date client 1: " << std::endl;
    Client cl1(18, 155, "cash", cmd1);
    try {
        cl1.client_fidel();
    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    std::cout << cl1 << std::endl;

    std::cout << "Date stoc magazin: " << std::endl;
    Stoc_magazin St1(1000, 500, 700, 1544, p1, c1, g1, cmd1);
    std::cout << St1 << std::endl;
    std::cout << "Stoc magazin dupa prima comanda:" << std::endl;
    St1.stoc_ramas();
    try { St1.sumaDupaVanzari(); }
    catch (eroare_vanzari &error) { std::cout << error.what() << std::endl; }

    //a doua comanda
    std::cout << "\tA DOUA COMANDA" << std::endl;
    std::cout << "Date pix a doua comanda:" << std::endl;
    std::vector<Produs*> produse2;
    Pix p2{6, 20, "Pilot", "mecanism acroball", "albastru"};
    auto* pr4 = dynamic_cast<Produs*>(&p2);
    std::cout << p2 << std::endl;
    p2.promotie();

    std::cout << "Date Ghiozdan a doua comanda:" << std::endl;
    Ghiozdan g2{80, 2, "Vans", "scoala-copii", "roz"};
    auto* pr5 = dynamic_cast<Produs*>(&g2);
    std::cout << g2 << std::endl;
    g2.promotie();

    std::cout << "Date Caiet a doua comanda:" << std::endl;
    Caiet c2{8, 8, "Sigma", "A5"};
    auto* pr7 = dynamic_cast<Produs*>(&c2);
    c2.setNrFile(75);
    std::cout << c2 << std::endl;
    c2.promotie();
    try{
        produse2.push_back(pr4);
        produse2.push_back(pr5);
        produse2.push_back(pr7);}
    catch (eroare_produse &error) { std::cout << error.what() << std::endl; }
    Comanda cmd2{19, produse2};
    cmd2.set_pretBon();
    std::cout << cmd2 << std::endl;
    //functie de sortare a produselor dupa pretul acestora
    std::sort(produse2.begin(), produse2.end(), cmp);
    std::size_t m = produse.size(); //astfel, cu vectorul ordonat crescator, stim ca ultimul element(de pe pozitia m-1) va fi cel mai scump
    std::cout << "Cel mai scump produs este cel cu pretul de " << produse[m - 1]->getPret() << " de lei." << std::endl
              << std::endl;

    std::cout << "Date client 2: " << std::endl;
    Client cl2(156, 25, "cash", cmd2);
    try {
        cl2.client_fidel();
    }
    catch (eroare_cupon &error) { std::cout << error.what() << std::endl; }
    std::cout << cl2 << std::endl;

    std::cout << "Date stoc magazin: " << std::endl;
    Stoc_magazin St2(St1.getNrPixuriStoc(), St1.getNrGhiozdaneStoc(), St1.getNrCaieteStoc(), St1.sumaDupaVanzari(), p2, c2, g2, cmd2);
    std::cout << St2 << std::endl;
    std::cout << "Stoc magazin dupa a doua comanda:" << std::endl;
    St2.stoc_ramas();
    try { St2.sumaDupaVanzari(); }
    catch (eroare_vanzari &error) { std::cout << error.what() << std::endl; }

    return 0;
}