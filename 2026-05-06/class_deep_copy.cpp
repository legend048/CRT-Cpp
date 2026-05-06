#include <iostream>

using namespace std;

class student {
    public:
    string name;
    int age;
    student(string n, int a) {
        name = n;
        age = a;
    }
    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    student s1("John", 20);
    student s2 = s1;
    student s3(s1);
    s1.print();
    s2.print();
    s3.print();
    s1.name = "Doe";
    s1.age = 25;
    cout << "After modifying s1:" << endl;
    s1.print();
    s2.print();
    s3.print();
    return 0;
}