#include <Headers/logicregister.h>
#include <iostream>

bool logicRegister::registerStudent(std::string name, int dni) {
    return cr.add(new student(name, dni));
}

double logicRegister::calAverage(double grades[], int size) {
    if (size == 0) return 0.0;
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += grades[i];
    return sum / size;
}

std::string logicRegister::search(int dni) {
    student* s = cr.findByDni(dni);
    if (s)
        return "Found: " + s->getName() + ", Average: " + std::to_string(s->getAverage());
    return "Student not found";
}

void logicRegister::listStudents() {
    for (auto s : cr.list())
        std::cout << "Name: " << s->getName() << ", DNI: " << s->getDni() << ", Average: " << s->getAverage() << "\n";
}

bool logicRegister::deleteStudent(int dni) {
    return cr.remove(dni);
}

bool logicRegister::updateStudent(int dni, double average) {
    return cr.update(dni, average);
}
