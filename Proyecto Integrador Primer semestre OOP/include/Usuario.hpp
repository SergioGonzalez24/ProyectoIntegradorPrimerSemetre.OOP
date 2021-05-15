//
//  Usuario.hpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#ifndef Usuario_hpp
#define Usuario_hpp


#include <stdio.h>
#include <string>

using std::string;

class Usuario{
  
private:
    
    string nombre;
    int edad;
    string correoElectronico;
    string nomUsuario;
    string contraseña;
    
    
public:
    
//    Constructores
    Usuario();
    
//    Gets
    string getNombre() {return nombre;}
    int getEdad() {return edad;}
    string getCorreoElectronico() {return correoElectronico;}
    string getNomUsuario() {return nomUsuario;}
    string getContraseña() {return contraseña;}
    
//    Sets
    void setNombre(string Nombre);
    void setEdad(int edad);
    void setCorreoElectronico (string correoElectronico);
    void setNomUsuario (string nomUsuario);
    void setContraseña (string contraseña);
    
//    Otros
    void print();
};


#endif /* Usuario_hpp */
