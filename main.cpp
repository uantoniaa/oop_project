#include <iostream>
#include "clase.h"
int main(){
    std::cout<<"Date pix:"<<std::endl;
    Pix p(3, 2, "normal", "alb");
    std::cout<<p<<std::endl;

    std::cout<<"Date acuarele:"<<std::endl;
    Acuarele ac(1,20, 12);
    std::cout<<ac<<std::endl;

    std::cout<<"Date Caiet:"<<std::endl;
    Caiet c(3, 5, "A4");
    std::cout<<c<<std::endl;

    std::cout<<"Date Ghiozdan:"<<std::endl;
    Ghiozdan g(2, 80, "copii", "roz");
    std::cout<<g<<std::endl;

    std::cout<< "Date comanda:" << std::endl;
    Comanda cmd(17, p, ac, g, c);
    cmd.get_pretBon(p, ac, g, c);
    std::cout<<cmd<<std::endl;
}
