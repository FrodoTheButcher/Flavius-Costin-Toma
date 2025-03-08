#include <iostream>
using namespace std;

//Sa se creeze o clasa Student care contine nume si data nasterii zi luna an 
//Sa se calculeze cati ani are studentul
class BirthDay{
    public:
        int zi;
        int luna;
        int an;
}

class Student{
    public:
        string name;
        BirthDay birthday;
};
int main(){

    Student student;
    student.name = "alex";
    student.birthday.an = 2003;
    student.birthday.luna = 11;
    student.birthday.zi = 18;

    int anulCurent = 2025;
    cout<<"Studentul are  "<<anulCurent-student.birthday.an<<" ani";
    //tema:Sa se calculeze folosind luna si ziua curenta
    //cati ani are studentul adaugand si diferenta de luna si zi
    return 0;
}