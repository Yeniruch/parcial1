#include <iostream>
#include <string>

using namespace std;

// Clase Cliente
class Cliente {
private:
    string nombre;
    string telefono;
    string correoElectronico;
    int mesa;

public:
    // Constructor
    Cliente(const string& nom, const string& tel, const string& correo, int mesa_num) : nombre(nom), telefono(tel), correoElectronico(correo), mesa(mesa_num) {}

    // acceder a los atributos
    string getNombre() const { return nombre; }
    string getTelefono() const { return telefono; }
    string getCorreoElectronico() const { return correoElectronico; }
    int getMesa() const { return mesa; }

    // actualizar los atributos
    void setNombre(const string& nom) { nombre = nom; }
    void setTelefono(const string& tel) { telefono = tel; }
    void setCorreoElectronico(const string& correo) { correoElectronico = correo; }
    void setMesa(int mesa_num) { mesa = mesa_num; }

    // Método para mostrar información del cliente
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Telefono: " << telefono << endl;
        cout << "Correo Electronico: " << correoElectronico << endl;
        cout << "Mesa: " << mesa << endl;
    }
};

int main() {
    // Crear un cliente
    Cliente cliente1("Yeni Campos", "32542718", "yenicampos.yc.yc@gmail.com", 4);

    // información del cliente
    cliente1.mostrarInformacion();

    return 0;
}

