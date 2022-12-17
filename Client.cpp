// Created by Asus on 14/12/2022.
//

#include "Client.hpp"
///                     constructor de initializare pentru clasa Client

Client::Client(int id_client_, int puncte_fidelitate_, const std::string & metoda_plata_, const Comanda &cmd_) : id_client{id_client_}, puncte_fidelitate{puncte_fidelitate_},metoda_plata{metoda_plata_}, cmd{cmd_}
{
}
void Client::client_fidel(){

    int cupon = 0;
    if(cmd.get_pretBon() >=25)
        puncte_fidelitate++;
    if(puncte_fidelitate >= 15) //la 15 puncte de fidelitate, clientul castiga un cupon
        cupon++;
    int punctePanaLaCupon = 15 - puncte_fidelitate;
    if(cupon >=1 )
        std::cout<<" Clientul isi poate alege un cadou. "<<std::endl;
    else
        std::cout<<" Clientului ii mai trebuie "<<punctePanaLaCupon<<" puncte de fidelitate pana isi poate alege un cadou"<<std::endl;
}
std::ostream& operator<<(std::ostream &COUT,const Client &Client1)
{

    COUT<<" ID client: "<<Client1.id_client<<std::endl;
    COUT<<" Metoda plata: "<<Client1.metoda_plata<<std::endl;
    COUT<<" Puncte de fidelitate: "<<Client1.puncte_fidelitate<<std::endl;
    return COUT;
}