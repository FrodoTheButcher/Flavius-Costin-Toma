#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        string name;
        string lastName;
        int age;
        float salary;
};

//Cititi numele,varsta ,salariu,prenumele pentru un utilizator
int main(){
    User user;
    User user2;

    cout<<"Introduceti datele userului"<<endl;

    cout<<"Introduceti numele si prenumele"<<endl;
    cin>>user.name>>user.lastName;
    cout<<"Introduceti varsta si salariul"<<endl;
    cin>>user.age>>user.salary;

    cout<<"Datele sunt"<<" "<<user.name<<" "<<user.lastName<<" "<<user.age<<" "<<user.salary;
    
    cout<<"Introduceti datele userului"<<endl;

    cout<<"Introduceti numele si prenumele"<<endl;
    cin>>user2.name>>user2.lastName;
    cout<<"Introduceti varsta si salariul"<<endl;
    cin>>user2.age>>user2.salary;

    cout<<"Datele sunt"<<" "<<user2.name<<" "<<user2.lastName<<" "<<user2.age<<" "<<user2.salary;
    
    return 0;
}
