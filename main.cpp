#include <iostream>
#include "clase.h"
int main(){
    std::cout<<"Date pix:"<<std::endl;
    Pix p1(2, "normal", "alb");
    std::cout<<p1<<std::endl;

    std::cout<<"Date acuarele:"<<std::endl;
    Acuarele ac1(20, 12);
    std::cout<<ac1<<std::endl;

    std::cout<<"Date Caiet:"<<std::endl;
    Caiet c1(5, "A4");
    std::cout<<c1<<std::endl;

    std::cout<<"Date Ghiozdan:"<<std::endl;
    Ghiozdan g1(80, "copii", "roz");
    std::cout<<g1<<std::endl;
}
