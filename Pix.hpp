//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_PIX_HPP
#define OOP_PIX_HPP
#include <iostream>
#include <string>

class Pix {
    int nrPixuri;
    int pret;
    std::string marime;
    std::string culoare;
public:
    Pix(int nrPixuri, int pret_, const std::string& marime_, const std::string& culoare_);
    Pix(const Pix& other);
    Pix& operator=(const Pix& other);
    ~Pix();
    friend std::ostream& operator<<(std::ostream& COUT, const Pix& Pix1);
    int getPixuri();
    double getPret();
    double valoarePixuri();
};


#endif //OOP_PIX_HPP
