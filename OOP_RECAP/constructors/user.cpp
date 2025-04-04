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

        User(string e,string p,int a){
            email=e;
            password=p;
            if(a<1)
            {
                cout<<"Age should be greater than 1";
            }
            else{
                age=a;
            }
        }
        User(User &user)
        {
            email=user.email;
            password=user.password;
            age=user.age;
        }
        User(){
            email="not selected";
            password="not selected";
            age=1;
        }

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

    User user("yahoo.com","parolagrea",21);
    user.display();
    cout<<endl;
    User user2(user);
    user2.display();
    return 0;
}