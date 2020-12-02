//
//  main.cpp
//  Proyecto Integrador Primer semestre OOP
//
//  Created by Sergio Gonzalez on 02/12/20.
//

/*Proyecto Integrador
 Aplicacion para generar tarjtas virtuales, sin la necesidad de
 tener una tarjeta bancaria.
 
 Las tarjetas se les puede designar un sitio unico donde se realizan los pagos con esta
 
 Para accder solamente se necesita un usuario y contraseña
 
 */

#include <iostream>
#include <string>
#include "Usuario.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;



int main() {
    
    bool cerrarApp = false;
    while (cerrarApp !=true) {
        
        cout << "Bienvenido a la aplicacion de tarjetas virtuales \n por favor genera un usuario y contraseña" << endl;
  
//        Generamos a nuestro usuraio asignando los artibutos a nuestro objeto
        bool data=true;
        while (data==true) {
            
            Usuario usr1;
            
            string nombre;
            cout << "Nombre: ";
            cin >> nombre;
            cout << endl;
            usr1.setNombre(nombre);
            
            int edad;
            cout << "Edad: ";
            cin >> edad;
            cout << endl;
            usr1.setEdad(edad);
        
            string correoElectronico;
            cout << "Correo: ";
            cin >> correoElectronico;
            cout << endl;
            usr1.setCorreoElectronico(correoElectronico);
        
            string usuario;
            cout << "Usuario: ";
            cin >> usuario;
            cout << endl;
            usr1.setNomUsuario(usuario);
            
            string contraseña;
            cout << "Contraseña: ";
            cin >> contraseña;
            cout << endl;
            usr1.setContraseña(contraseña);
            
            system("clear");
            usr1.print();
            
            cout << "¿Tus datos son correctos? y/n" << endl;
            char pregData;
            cin >> pregData;
            cout << endl;
            
            
            if (pregData=='y') { data=false; } //if pregData
            
            else if (pregData=='n') { continue; } //elif pregData
        } //while data
        
    } //While cerrar app
    
} //int menu

