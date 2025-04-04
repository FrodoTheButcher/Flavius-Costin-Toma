/*
De ce folosim clase : Recap 
*/


#include <iostream>
using namespace std;


class User{
    private:
        string email;
        string password;
        int age;
    public:
        void setEmail(string e)
        {
            email=e;
        }
        void setPassword(string p)
        {
            password=p;
        }
        void setAge(int a)
        {
            if(a<1)
            {
                cout<<"Age should be greater than 1";
            }
            else{
                age=a;
            }
        }
        int getAge()
        {
            return age;
        }
        string getEmail()
        {
            return email;
        }
        string getPassword()
        {
            return password;
        }
        void display()
        {
            cout<<email<<" "<<password<<" "<<age;
        }
        
};

int main(){

    User user;
    user.setEmail("yahoo.com");
    user.setPassword("parolagrea");
    user.setAge(15);

    user.display();
    return 0;
}