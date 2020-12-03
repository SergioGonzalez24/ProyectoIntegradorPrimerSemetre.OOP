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
#include "TarjetaVirtual.hpp"
#include "SitioValido.hpp"


using std::cout;
using std::cin;
using std::endl;
using std::string;

//    Variables tarjeta a usar
    int numero;
    int codigo;
    int dinero;
    string url;
    string sitio;

int main() {
    
    Usuario usr1;
    
    bool cerrarApp = false;
    while (cerrarApp !=true) {
        
        cout << "Bienvenido a la aplicacion de tarjetas virtuales \n por favor genera un usuario y contraseña" << endl;
  
//        Generamos a nuestro usuraio asignando los artibutos a nuestro objeto
        bool data=true;
        while (data==true) {
            
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
        
        system("clear");
        
        bool inputUsuario=false;
        while (inputUsuario==false) {
            
            cout << "Ingrese su nombre de usuario y contraseña" << "\n" << "Nombre: ";
            string inUsr;
            cin >> inUsr;
            cout << endl;
            
            cout << "Contraseña: ";
            string inContr;
            cin >> inContr;
            cout << endl;
            
            if (usr1.getNomUsuario()==inUsr && usr1.getContraseña()==inContr) {
                inputUsuario=true;
            } //if input Usuario
            else {
                cout << "Usuario o contraseña incorrecta intente otra vez" << endl;
            } //else input Usuario
        }//while input usuario
        
        system("clear");
        
//       Apicacion para generar tarjetas
        bool openApp=true;
        while (openApp==true) {
            
            cout << "debe de generar una tarjeta" << endl;
            bool dataT=false;
            while (dataT!=true) {
                
                
                cout << "Numero (10 digitos): ";
                cin >> numero;
                cout << endl;
                
                
                cout << "Codigo (4 digitos): ";
                cin >> codigo;
                cout << endl;
            
                
                cout << "Dinero depositado en tarjeta: ";
                cin >> dinero;
                cout << endl;
                
                
                cout << "Ingrese el citio donde se utilizara la tarjeta :";
                cin >> url;
                cout << endl;
                
                
                cout << "Ingrese el nombre de donde se utilizara la tarjeta :";
                cin >> sitio;
                cout << endl;
                
                TarjetaVirtual tr1(numero,codigo,dinero,url,sitio);
            
                system("clear");
                tr1.print();
                
                cout << "¿Tus datos son correctos? y/n: " << endl;
                char pregDataT;
                cin >> pregDataT;
                cout << endl;
                
                
                if (pregDataT=='y') {
                    dataT=true;
                    cout << "desea salir de la applicacion y/n:  ";
                    cin >> pregDataT;
                    if (pregDataT=='y') {
                        openApp=false;
                    }
                    else if (pregDataT=='n') {continue;}
                    
                } //if pregData
                
                else if (pregDataT=='n') { continue; } //elif pregData
                
            } //while dataT
        } //Open app while
        
        cout << "Gracias por utilizar la app" << endl;
        cerrarApp=true;
    } //While cerrar app
    
    
//    Pruebas Fallidas
    /*
    double gasto;
    cout << "Abriendo Navegador ... " << "sitio Amazon" << endl;
    cout << "Ingrese el total a pagar en su carrito: ";
    cin >> gasto;
    
    if(sitioTar.getUrlSitio()== "www.amazon.com.mx") {
        
        cout << "El total a pagar es de: " << gasto << endl;
        cout << "Desea continuar y/n: ";
        char res;
        cin >>res;
        
        if (res=='y') {
            cout << "Procesando pago..."<< endl;
            if (tr1.getDineroTarjeta()>= gasto) {
                cout << "Pago realizado :)";
            }
            else if (tr1.getDineroTarjeta()<gasto) {
                cout << "No se pudo completar el pago falta dinero en su tarjeta" << endl;
            }
        }
        
        else if (res=='n') {
            cout << "Pago cancelado" << endl;
        }
        else {
            cout << "valor no valido ERROR";
        }

    }
    
    else {
        cout << "No se puede utilizar su tarjeta en este sitio" << endl;
    }
*/
    cout << "FIN DE PRUEBA " << endl;
    
} //int menu

