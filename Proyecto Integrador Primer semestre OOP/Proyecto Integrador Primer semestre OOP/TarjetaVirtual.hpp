//
//  TarjetaVirtual.hpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#ifndef TarjetaVirtual_hpp
#define TarjetaVirtual_hpp
#include <stdio.h>
#include "SitioValido.hpp"

class TarjetaVirtual {
    
private:
    
    int numTarjeta;
    int codigoTarjeta;
    int dineroTarjeta;
    SitioValido UrlTarjeta;
    
    
    
public:
    
    
//    Constructores
    TarjetaVirtual(int numTarjeta, int codigoTarjeta, int dineroTarjeta, string Url, string nombreSitio);
    
//    Gets
    int getNumTarjeta() {return numTarjeta;}
    int getCodigoTarjeta() {return codigoTarjeta;}
    int getDineroTarjeta() {return dineroTarjeta;}
    SitioValido getUrlTarjeta() {return UrlTarjeta;}
    
//    Sets
    void setNumTarjeta(int numTarjeta);
    void setCodigoTarjeta(int codigoTarjeta);
    void setDineroTarjeta(int dineroTarjeta);
    void setUrlTarjeta(string url, string nombreSitio);
    void print();
};

#endif /* TarjetaVirtual_hpp */
