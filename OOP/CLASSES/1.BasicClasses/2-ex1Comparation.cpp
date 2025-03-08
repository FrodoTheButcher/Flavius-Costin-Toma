#include <iostream>
using namespace std;

class Student{
    public:
     string name;
     int age;
     float grade;
};

/*
Sa se creeze o clasa Student
Studentul va avea: nume , varsta , medie

ex:Sa se creeze 2 studenti 
Sa se afiseze numele studentul cu media mai mare. 
Daca au aceeasi medie, sa se afiseze studentul cu varsta mai mare 
*/
int main(){

    Student student1,student2;

    student1.name = "Alex";
    student1.age = 20;
    student1.grade = 9;

    student2.name = "Ioan";
    student2.age = 19;
    student2.grade = 9;

    if(student1.grade>student2.grade)
    {
        cout<<"studentul cu nota mai mare este "<<student1.name<<endl;
        //tema: afiseaza diferenta dintre note
    }
    else if(student1.grade<student2.grade)
    {
        cout<<"studentul cu nota mai mare este "<<student2.name<<endl;
        //tema: afiseaza diferenta dintre note
    }
    else if(student1.grade == student2.grade)
    {
        //daca au media egala,il afisam pe acela cu varsta mai mare
        if(student1.age>student2.age)
        {
            cout<<student1.name<<endl;
        }
        else if(student1.age<student2.age)
        {
            cout<<student2.name<<endl;
        }
        //tema: daca au aceeasi varsta,sa se afiseze un mesaj varstele , media egale
    }

    return 0;
}
/*
student1:{
name:"alex",
media:8.5,
varsta:18
}

student2:{
name:"marian",
media:8.5,
varsta:20
}

*/