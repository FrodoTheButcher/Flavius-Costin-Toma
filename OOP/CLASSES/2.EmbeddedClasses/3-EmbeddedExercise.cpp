//Sa se creeze clasa Student cu nume si data nasterii
//Sa se creeze 2 studenti
//Sa se initializeze datele studentilor
//Sa se afiseze studentul mai tanar folosind data nasterii

#include <iostream>
using namespace std;

class BirthDay{
    public:
        int day;
        int month;
        int year;
};

class Student{
    public:
        string name;
        BirthDay birthDay;
};

int main(){

    Student student1,student2;
    student1.name = "Alex";
    student1.birthDay.day = 16;
    student1.birthDay.month = 10;
    student1.birthDay.year = 2003;

    student2.birthDay.day = 20;
    student2.birthDay.month = 11;
    student2.birthDay.year = 1998
    student2.name = "Florin";


    if(student1.birthDay.year>student2.birthDay.year)
    {
        cout<<"studentul mai tanar este "<<student1.name<<endl;
    }
    else if(student1.birthDay.year == student2.birthDay.year && student1.birthDay.month > student2.birthDay.month)
    {
        cout<<"studentul mai tanar este "<<student1.name<<endl;
    }
    else if(student1.birthDay.year == student2.birthDay.year && student1.birthDay.month == student2.birthDay.month &&student1.birthDay.day > student2.birthDay.day)
    {
        cout<<"studentul mai tanar este "<<student1.name<<endl;
    }
    else if(student1.birthDay.year == student2.birthDay.year && student1.birthDay.month == student2.birthDay.month && student1.birthDay.day == student2.birthDay.day)
    {
        cout<<"studentii sunt la fel de in varsta"<<endl;
    }
    else{
        cout<<"studentul mai tanar este"<<student2.name<<endl;
    }
    return 0;
}