//
// Created by Asus on 02/01/2023.
//

#ifndef UNTITLED6_CLIENT_HPP
#define UNTITLED6_CLIENT_HPP
#include "Comanda.hpp"
class Client {
    const int id_client;
    int puncte_fidelitate;
    std::string metoda_plata;
    Comanda cmd;
public:
    Client(int idClient, int puncteFidelitate, std::string metodaPlata, Comanda cmd);

    void client_fidel(); //daca un client are comanda de peste 25 de lei, primeste un punct de fidelitate,
    // iar la 15 puncte de fidelitate primeste un cupon cu care isi poate lua un cadou
    friend std::ostream& operator<<(std::ostream& COUT,const Client &Client1);
};
#endif //UNTITLED6_CLIENT_HPP
