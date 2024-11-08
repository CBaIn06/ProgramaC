#include <iostream>
#include <string>

int main() {
    // Definir la cadena "Hola Mundo"
    std::string mensaje = "Hola Mundo";
    
    // Imprimir el mensaje
    std::cout << mensaje << std::endl;
    
    // Variable para almacenar la suma de los valores ASCII
    int sumaASCII = 0;
    
    // Recorrer cada carácter de la cadena y sumar su valor ASCII
    for (char c : mensaje) {
        sumaASCII += static_cast<int>(c);
    }
    
    // Imprimir la suma de los valores ASCII
    std::cout << "La suma de los valores ASCII de los caracteres de 'Hola Mundo' es: " << sumaASCII << std::endl;

    return 0;
}