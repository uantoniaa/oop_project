#include <iostream>
#include <vector>
#include "Ghiozdan.hpp"
#include "Pix.hpp"
#include "Caiet.hpp"
#include "Produs.hpp"
#include "Client.hpp"
#include "Comanda.hpp"
#include "Stoc_magazin.hpp"
#include "Exceptii.hpp"
double cmp(const Produs &pr1, const Produs &pr2) {
    return pr1.getPret()<pr2.getPret();
}
int main(){
    //prima comanda
    std::vector<Produs> produse;

    std::cout<<"\tPRIMA COMANDA"<<std::endl;
    std::cout<<"Date pix prima comanda:"<<std::endl;
    Pix p1{5,35,"Bic", "normal", "albastru"};
    std::cout<<p1<<std::endl;
    p1.promotie();

    std::cout<<"Date Ghiozdan prima comanda:"<<std::endl;
    Ghiozdan g1{60,1,"Adidas", "adult", "rosu"};
    std::cout<<g1<<std::endl;
    g1.promotie();

    std::cout<<"Date Caiet a doua comanda:"<<std::endl;
    Caiet c1{12,4,"Scheinder", "A4"};
    c1.setNrFile(45);
    std::cout<<c1<<std::endl;
    c1.promotie();

    produse.push_back(p1);
    produse.push_back(c1);
    produse.push_back(g1);
    Comanda cmd1{18, produse};
    cmd1.set_pretBon();
    std::cout<<cmd1<<std::endl;
    //functie de sortare a produselor dupa pretul acestora
    std::sort(produse.begin(),produse.end(), cmp);
    std::size_t n = produse.size(); //astfel, cu vectorul ordonat crescator, stim ca ultimul element(de pe pozitia n-1) va fi cel mai scump
    std::cout<<"Cel mai scump produs este cel cu pretul de "<<produse[n-1].getPret()<<" de lei."<<std::endl<<std::endl;

    std::cout<< "Date client 1: " << std::endl;
    Client cl1(155,18, "cash", cmd1);
    try{
    cl1.client_fidel();}
    catch(eroare_cupon &error)
    {std::cout<<error.what()<<"\n";}
    std::cout<<cl1<<std::endl;

    std::cout<< "Date stoc magazin: " << std::endl;
    Stoc_magazin St1(1000,500,700,1544,p1,c1,g1,cmd1);
    std::cout<<St1<<std::endl;
    std::cout<<"Stoc magazin dupa prima comanda:"<<std::endl;
    St1.stoc_ramas();
    St1.sumaDupaVanzari();
    return 0;
}