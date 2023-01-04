//
// Created by Asus on 02/01/2023.
//

#include "Client.hpp"
#include "Exceptii.hpp"
#include <utility>
///                     constructor de initializare pentru clasa Client


void Client::client_fidel(){

    int cupon = 0;
    if(cmd.get_pretBon() >=25)
        puncte_fidelitate++;
    if(puncte_fidelitate >= 15) //la 15 puncte de fidelitate, clientul castiga un cupon
        cupon++;
    int punctePanaLaCupon = 15 - puncte_fidelitate;
    std::string pctcp = std::to_string(punctePanaLaCupon);
    if(cupon >=1 )
        std::cout<<" Clientul isi poate alege un cadou. "<<std::endl;
    if (cupon == 0) {
        throw eroare_cupon("Clientului ii mai trebuie " + pctcp + " puncte pana va primi un cupon.");
        // else
        // std::cout<<" Clientului ii mai trebuie "<<punctePanaLaCupon<<" puncte de fidelitate pana isi poate alege un cadou"<<std::endl;
    }
}
std::ostream& operator<<(std::ostream &COUT,const Client &Client1)
{

    COUT<<" ID client: "<<Client1.id_client<<std::endl;
    COUT<<" Metoda plata: "<<Client1.metoda_plata<<std::endl;
    COUT<<" Puncte de fidelitate: "<<Client1.puncte_fidelitate<<std::endl;
    return COUT;
}

Client::Client(const int idClient, int puncteFidelitate, std::string metodaPlata, Comanda cmd) : id_client(
        idClient), puncte_fidelitate(puncteFidelitate), metoda_plata(std::move(metodaPlata)), cmd(std::move(cmd)) {}

Client &Client::operator=(const Client &other) {
    id_client = other.id_client;
    puncte_fidelitate = other.puncte_fidelitate;
    metoda_plata = other.metoda_plata;
    cmd = other.cmd;
    return *this;
}

Client::Client(const Client &other):id_client(other.id_client), puncte_fidelitate(other.puncte_fidelitate), metoda_plata(other.metoda_plata), cmd(other.cmd) {}

