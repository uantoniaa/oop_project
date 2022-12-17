//
// Created by Asus on 14/12/2022.
//

#ifndef OOP_CLIENT_HPP
#define OOP_CLIENT_HPP
#include <iostream>
#include <string>
#include "Comanda.hpp"
class Client {
    int id_client;
    int puncte_fidelitate;
    std::string metoda_plata;
    Comanda cmd;

public:
    Client(int id_client_, int puncte_fidelitate_, const std::string& metoda_plata, const Comanda &cmd);
    void client_fidel(); //daca un client are comanda de peste 25 de lei, primeste un punct de fidelitate,
    // iar la 15 puncte de fidelitate primeste un cupon cu care isi poate lua un cadou
    friend std::ostream& operator<<(std::ostream& COUT,const Client &Client1);
};



#endif //OOP_CLIENT_HPP