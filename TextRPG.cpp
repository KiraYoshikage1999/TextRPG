#include <iostream>
using namespace std;

class Human {
public:
    void virtual dailyroutine() = 0;
};

class Student : public Human {
public:
    void dailyroutine() override {
        cout << "1) Go to Academia" << endl << "2) Study in Academia" << endl << "3) Go to home" << endl;
    }
};

class Teacher : public Human {
public:
    void dailyroutine() override {
        cout << "1) Go to Academia" << endl << "2) Study students to study programming in Academia" << endl << "3) Go to home" << endl;
    }
};


int main()
{
    Student obj;
    Teacher obj2;

    obj.dailyroutine();
    obj2.dailyroutine();
}

