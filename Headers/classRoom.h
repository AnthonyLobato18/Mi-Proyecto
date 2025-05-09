#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "student.h"
#include <vector>

class classRoom {
private:
    std::vector<student*> students;

public:
    bool add(student* s);
    std::vector<student*> list();
    student* findByDni(int d);
    bool remove(int d);
    bool update(int d, double newAverage);
    ~classRoom();
};

#endif
