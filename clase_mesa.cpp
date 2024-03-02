#include <iostream>
#include <string>

using namespace std;

class Mesa {
private:
    int numero;
    int capacidad;
    string estado;
    string ubicacion;

public:
    // Constructor
    Mesa(int num, int cap, const string& est, const string& ubi) : numero(num), capacidad(cap), estado(est), ubicacion(ubi) {}

    // acceder a los atributos
    int getNumero() const { return numero; }
    int getCapacidad() const { return capacidad; }
    string getEstado() const { return estado; }
    string getUbicacion() const { return ubicacion; }

    // actualizar los atributos
    void setNumero(int num) { numero = num; }
    void setCapacidad(int cap) { capacidad = cap; }
    void setEstado(const string& est) { estado = est; }
    void setUbicacion(const string& ubi) { ubicacion = ubi; }

    // Mmostrar información de la mesa
    void mostrarInformacion() const {
        cout << "Numero de mesa: " << numero << endl;
        cout << "Capacidad: " << capacidad << " personas" << endl;
        cout << "Estado: " << estado << endl;
        cout << "Ubicacion: " << ubicacion << endl;
    }
};

int main() {
    // Crear la clase Mesa
    Mesa mesa1(1, 4, "Disponible", "Zona principal");

    // Mostrar info de la mesa
    mesa1.mostrarInformacion();

   
    return 0;
}
