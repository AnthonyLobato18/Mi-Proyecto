#include <Headers/student.h>

student::student(std::string n, int d) : name(n), dni(d), average(0.0) {}

int student::getDni() const { return dni; }
std::string student::getName() const { return name; }
double student::getAverage() const { return average; }
void student::setAverage(double avg) { average = avg; }
