//
//  TarjetaVirtual.cpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#include "TarjetaVirtual.hpp"
#include "SitioValido.hpp"
#include <iostream>

TarjetaVirtual::TarjetaVirtual(int numTarjeta, int codigoTarjeta, int dineroTarjeta, string Url, string nombreSitio) {
    
    this->numTarjeta=numTarjeta;
    this->codigoTarjeta=codigoTarjeta;
    this->dineroTarjeta=dineroTarjeta;
    UrlTarjeta=SitioValido(Url,nombreSitio);
}

void TarjetaVirtual::setNumTarjeta(int numTarjeta) {
    this->numTarjeta=numTarjeta;
}
void TarjetaVirtual::setCodigoTarjeta(int codigoTarjeta) {
    this->codigoTarjeta=codigoTarjeta;
}
void TarjetaVirtual::setDineroTarjeta(int dineroTarjeta) {
    this->dineroTarjeta=dineroTarjeta;
}
void TarjetaVirtual::setUrlTarjeta(string url, string nombreSitio) {

    UrlTarjeta.setUrlSitio(url);
    UrlTarjeta.setNomSitio(nombreSitio);
}
void TarjetaVirtual::print() {
    
    std::cout << "Numero de tarjeta :" << getNumTarjeta() << "\n" <<  "Codigo: ºººº \n" << "Dinero en tarjeta: " << getDineroTarjeta() << std::endl;

}






