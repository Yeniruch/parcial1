#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase Producto
class Producto {
private:
    string nombre;
    double precio;

public:
    Producto(const string& nom, double prec) : nombre(nom), precio(prec) {}

    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
};

// Clase Pedido
class Pedido {
private:
    int numero;
    vector<Producto> productos;
    int mesa;
    string estado;

public:
    // Constructor
    Pedido(int num, const vector<Producto>& prods, int mesa_num, const string& est) : numero(num), productos(prods), mesa(mesa_num), estado(est) {}

    // aceder a los atributos
    int getNumero() const { return numero; }
    vector<Producto> getProductos() const { return productos; }
    int getMesa() const { return mesa; }
    string getEstado() const { return estado; }

    // Métodos para actualizar los atributos
    void setNumero(int num) { numero = num; }
    void setProductos(const vector<Producto>& prods) { productos = prods; }
    void setMesa(int mesa_num) { mesa = mesa_num; }
    void setEstado(const string& est) { estado = est; }

    // Mostrar información del pedido
    void mostrarInformacion() const {
        cout << "Nummero de pedido: " << numero << endl;
        cout << "Productos:" << endl;
        for (const auto& producto : productos) {
            cout << "- " << producto.getNombre() << " (Q" << producto.getPrecio() << ")" << endl;
        }
        cout << "Mesa: " << mesa << endl;
        cout << "Estado: " << estado << endl;
    }
};

int main() {
    // Crear productos
    Producto producto1("Pizza Margarita", 60);
    Producto producto2("Refresco", 15);
    Producto producto3("Ensalada ", 10);

    // Crear vector de productos
    vector<Producto> productos;
    productos.push_back(producto1);
    productos.push_back(producto2);
    productos.push_back(producto3);

    // Crear un pedido
    Pedido pedido1(1, productos, 4, "En proceso");

    // Mostrar información del pedido
    pedido1.mostrarInformacion();

    return 0;
}

