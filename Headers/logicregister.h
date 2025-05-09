#ifndef LOGICREGISTER_H
#define LOGICREGISTER_H

#include "classRoom.h"
#include <string>

class logicRegister {
private:
    classRoom cr;

public:
    bool registerStudent(std::string name, int dni);
    double calAverage(double grades[], int size);
    std::string search(int dni);
    void listStudents();
    bool deleteStudent(int dni);
    bool updateStudent(int dni, double average);
};

#endif
