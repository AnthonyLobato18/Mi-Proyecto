#include <Headers/logicregister.h>
#include <iostream>

int main() {
    logicRegister lr;
    char option;

    do {
        std::cout << "\nMenu:\n[E] Registrar Estudiante\n[N] Registrar Notas\n[L] Listar\n[B] Buscar\n[A] Actualizar\n[D] Eliminar\n[Q] Salir\n";
        std::cin >> option;

        if (option == 'e') {
            std::string name;
            int dni;
            std::cout << "Nombre: ";
            std::cin >> name;
            std::cout << "DNI: ";
            std::cin >> dni;
            lr.registerStudent(name, dni);
        } else if (option == 'n') {
            int dni;
            double grades[3];
            std::cout << "DNI del estudiante: ";
            std::cin >> dni;
            std::cout << "Ingrese 3 notas: ";
            for (int i = 0; i < 3; ++i) std::cin >> grades[i];
            double avg = lr.calAverage(grades, 3);
            lr.updateStudent(dni, avg);
        } else if (option == 'l') {
            lr.listStudents();
        } else if (option == 'b') {
            int dni;
            std::cout << "DNI a buscar: ";
            std::cin >> dni;
            std::cout << lr.search(dni) << "\n";
        } else if (option == 'a') {
            int dni;
            double avg;
            std::cout << "DNI: ";
            std::cin >> dni;
            std::cout << "Nuevo promedio: ";
            std::cin >> avg;
            lr.updateStudent(dni, avg);
        } else if (option == 'd') {
            int dni;
            std::cout << "DNI a eliminar: ";
            std::cin >> dni;
            lr.deleteStudent(dni);
        }

    } while (option != 'q');

    return 0;
}
