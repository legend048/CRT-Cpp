#include <iostream>
using namespace std;

class student {
    string name;
    int age;
public:
    student() {
        name = "no name given!";
        age = 0;
    }
    student(string a, int b) {
        name = a;
        age = b;
    }
    student(student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    student obj;
    obj.display();
    return 0;
}
