#include <iostream>
#include <string>

using namespace std;

// Clase Empleado
class Empleado {
private:
    string nombre;
    string puesto;
    string horario;
    double salario;

public:
    // Constructor
    Empleado(const string& nom, const string& pst, const string& hor, double sal) : nombre(nom), 
	puesto(pst), horario(hor), salario(sal) {}

    // acceder a los atributos
    string getNombre() const { return nombre; }
    string getPuesto() const { return puesto; }
    string getHorario() const { return horario; }
    double getSalario() const { return salario; }

    // actualizar los atributos
    void setNombre(const string& nom) { nombre = nom; }
    void setPuesto(const string& pst) { puesto = pst; }
    void setHorario(const string& hor) { horario = hor; }
    void setSalario(double sal) { salario = sal; }

    // mostrar información del empleado
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Puesto: " << puesto << endl;
        cout << "Horario: " << horario << endl;
        cout << "Salario: Q" << salario << " al mes" << endl;
    }
};

int main() {
    // Crear una instancia de la clase Empleado
    Empleado empleado1("Yeni Ruch", "Cajera", " 8:00 AM a 4:00 PM", 3000.00);

    // Mostrar información del empleado
    empleado1.mostrarInformacion();

    return 0;
}
