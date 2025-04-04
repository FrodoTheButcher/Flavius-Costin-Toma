/*
De ce folosim clase : Recap 
*/


#include <iostream>
using namespace std;

//Sa se citeasca datele unui utilizator
//Email,password,age

class User{
    public:
        string email;
        string password;
        int age;
};

int main(){

    User user;
    cin>>user.email;
    cin>>user.password;
    cin>>user.age;
    cout<<"Date utilizatorului sunt "<<" email: "<<user.email<<" password: "<<user.password<<" varsta:"<<user.age;
    cout<<endl;
    User user2;
    cin>>user2.email;
    cin>>user2.password;
    cin>>user2.age;
    cout<<"Date utilizatorului sunt "<<" email: "<<user2.email<<" password: "<<user2.password<<" varsta:"<<user2.age;
    return 0;
}