#include <iostream>
#include "clase.h"
int main(){
    std::cout<<"Date pix prima comanda:"<<std::endl;
    Pix p1(3, 2, "normal", "alb");
    std::cout<<p1<<std::endl;

    std::cout<<"Date pix a doua comanda:"<<std::endl;
    Pix p2(5, 3, "mic", "rosu");
    std::cout<<p2<<std::endl;

    std::cout<<"Date acuarele prima comanda:"<<std::endl;
    Acuarele ac1(1,20, 12);
    std::cout<<ac1<<std::endl;

    std::cout<<"Date acuarele a doua comanda:"<<std::endl;
    Acuarele ac2(3,15, 10);
    std::cout<<ac2<<std::endl;

    std::cout<<"Date Caiet prima comanda:"<<std::endl;
    Caiet c1(3, 5, "A4");
    std::cout<<c1<<std::endl;

    std::cout<<"Date Caiet a doua comanda:"<<std::endl;
    Caiet c2(7, 4, "A3");
    std::cout<<c1<<std::endl;

    std::cout<<"Date Ghiozdan prima comanda:"<<std::endl;
    Ghiozdan g1(2, 80, "copii", "roz");
    std::cout<<g1<<std::endl;

    std::cout<<"Date Ghiozdan a doua comanda:"<<std::endl;
    Ghiozdan g2(1, 60, "copii", "albastru");
    std::cout<<g2<<std::endl;

    std::cout<< "Date comanda 1:" << std::endl;
    Comanda cmd1(17, p1, ac1, g1, c1);
    cmd1.set_pretBon(p1, ac1, g1, c1);
    std::cout<<cmd1<<std::endl;

    std::cout<< "Date comanda 2:" << std::endl;
    Comanda cmd2(22, p2, ac2, g2, c2);
    cmd2.set_pretBon(p2, ac2, g2, c2);
    std::cout<<cmd2<<std::endl;

    std::cout<< "Date client 1: " << std::endl;
    Client cl1(155,4, "cash", cmd1);
    cl1.client_fidel();
    std::cout<<cl1<<std::endl;

    std::cout<< "Date client 2: " << std::endl;
    Client cl2(156,2, "card", cmd2);
    cl2.client_fidel();
    std::cout<<cl1<<std::endl;
}
