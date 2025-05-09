#include <Headers/classRoom.h>

bool classRoom::add(student* s) {
    students.push_back(s);
    return true;
}

std::vector<student*> classRoom::list() {
    return students;
}

student* classRoom::findByDni(int d) {
    for (auto s : students)
        if (s->getDni() == d) return s;
    return nullptr;
}

bool classRoom::remove(int d) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if ((*it)->getDni() == d) {
            delete *it;
            students.erase(it);
            return true;
        }
    }
    return false;
}

bool classRoom::update(int d, double newAverage) {
    student* s = findByDni(d);
    if (s) {
        s->setAverage(newAverage);
        return true;
    }
    return false;
}

classRoom::~classRoom() {
    for (auto s : students)
        delete s;
}
