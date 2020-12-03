//
//  SitioValido.cpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#include "SitioValido.hpp"
#include <string>
#include <iostream>

SitioValido::SitioValido() {
    
    nomSitio="";
    urlSitio="";
}

SitioValido::SitioValido(string nomSitio, string urlSitio) {
    this->nomSitio=nomSitio;
    this-> urlSitio=urlSitio;
}

void SitioValido::setNomSitio(string nomSitio) {
    this->nomSitio=nomSitio;
}

void SitioValido::setUrlSitio(string urlSitio) {
    this->urlSitio=urlSitio;
}

void SitioValido::verificacionUrl(string Url) {
    
    if(Url==getUrlSitio()) {
        std::cout << "SI SE PUEDE UTILIZAR TU TARJETA" << std::endl;
    }
    else {
        std::cout << "NO SE RECONOCE TARJETA " << std::endl;
    }
}
