//
//  SitioValido.hpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#ifndef SitioValido_hpp
#define SitioValido_hpp

#include <stdio.h>
#include <string>

using std::string;

class SitioValido {
    
private:
    
    string nomSitio;
    string urlSitio;
    
    
public:
    
//    Constructor
    SitioValido();
    SitioValido(string nomSitio, string urlSitio);
    
//    gets
    string getNomSitio() {return nomSitio;}
    string getUrlSitio() {return urlSitio;}
    
//    Sets
    void setNomSitio(string nomSitio);
    void setUrlSitio(string urlSitio);
    
//    Otros
    void verificacionUrl(string Url);
};

#endif /* SitioValido_hpp */
