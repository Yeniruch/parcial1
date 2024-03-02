#include <iostream>
#include <string>

using namespace std;

// Enumeración para el tipo de comida
enum TipoComida {
    ENTRADA,
    PLATO_PRINCIPAL,
    POSTRE,
    BEBIDA
};

// Clase Platillo
class Platillo {
private:
    string nombre;
    string descripcion;
    double precio;
    TipoComida tipoComida;

public:
    // Constructor
    Platillo(const string& nom, const string& desc, double prec, TipoComida tipo) : nombre(nom),
	 descripcion(desc), precio(prec), tipoComida(tipo) {}

    //acceder a los atributos
    string getNombre() const { return nombre; }
    string getDescripcion() const { return descripcion; }
    double getPrecio() const { return precio; }
    TipoComida getTipoComida() const { return tipoComida; }

   
    // Mmostrar información del platillo
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Descripcion: " << descripcion << endl;
        cout << "Precio: Q" << precio << endl;
        cout << "Tipo de comida: ";
        switch (tipoComida) {
            case ENTRADA:
                cout << "Entrada" << endl;
                break;
            case PLATO_PRINCIPAL:
                cout << "Plato principal" << endl;
                break;
            case POSTRE:
                cout << "Postre" << endl;
                break;
            case BEBIDA:
                cout << "Bebida" << endl;
                break;
        }
    }
};

int main() {
    // Crear una instancia de la clase Platillo
    Platillo platillo1("Pizza Margarita", "Pizza con salsa de tomate, mozzarella y albahaca fresca", 60, PLATO_PRINCIPAL);

    // Mostrar información del platillo
    platillo1.mostrarInformacion();

    return 0;
}
 