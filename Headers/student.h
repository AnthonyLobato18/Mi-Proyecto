#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class student {
private:
    std::string name;
    int dni;
    double average;

public:
    student(std::string n, int d);
    int getDni() const;
    std::string getName() const;
    double getAverage() const;
    void setAverage(double avg);
};

#endif
