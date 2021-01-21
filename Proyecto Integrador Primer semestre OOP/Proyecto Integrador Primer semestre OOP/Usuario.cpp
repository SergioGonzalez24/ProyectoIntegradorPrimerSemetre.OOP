//
//  Usuario.cpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

#include "Usuario.hpp"
#include <iostream>
#include <string>

using std::string;

Usuario::Usuario() {
    
    nombre="";
    edad=0;
    correoElectronico="";
    nomUsuario="";
    contraseña="";
}

void Usuario::setNombre(string nombre) {
    this->nombre=nombre;
    
}

void Usuario::setEdad(int edad) {
    this->edad=edad;
}

void Usuario::setCorreoElectronico (string correoElectronico) {
    this->correoElectronico=correoElectronico;
}

void Usuario::setNomUsuario (string nomUsuario){
    this->nomUsuario=nomUsuario;
}
void Usuario::setContraseña(string contraseña) {
    this->contraseña=contraseña;
    
}

void Usuario::print() {
    std::cout << "Name: " << getNombre() << "\n" << "Age: " << getEdad() << "\n" << "E-mail: " << getCorreoElectronico() << "\n" << std::endl;
}
