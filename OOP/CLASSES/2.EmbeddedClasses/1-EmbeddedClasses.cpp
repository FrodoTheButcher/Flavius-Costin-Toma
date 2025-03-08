#include <iostream>
using namespace std;

//Sa se creeze clasa Student care contine:
//Nume , Data de nastere : zi , luna , an

class Birthday
{
    public:
        int zi;
        int luna;
        int an;
};

class Student{
    public:
        string name;
        float salary;
        Birthday birthday;
};

int main(){

    Student student;
    student.name="Alex";
    student.salary=2987.5;
    student.birthday.zi=15;
    student.birthday.luna=11;
    student.birthday.an=2003;
    //Adauga pentru student , folosind clasa birthday , ora nasterii pe langa zi,luna,an
    return 0;
}
