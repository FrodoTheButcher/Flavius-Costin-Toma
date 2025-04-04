/*
Sa se creeze un user ce va contine:
email,password,birthday
*/

#include <iostream>
using namespace std;

class DateTime{
    private:
    int year,month,day;
    public:

    void setYear(int y)
    {
        year=y;
    }
    void setMonth(int m)
    {
        month=m;
    }
    void setDay(int d)
    {
        day=d;
    }

    int getYear()
    {
        return year;
    }
};


class Teacher{
    private:
        float salary;
        string email;
        string password;
        DateTime date;
    public:
    void setEmail(string s)
    {
        email=s;
    }
    string getEmail()
    {
        return email;
    }
    void setYear(int y)
    {
        date.setYear(y);
    }
    int getYear(){
        return date.getYear();
    }
};

int main(){

    Teacher t;
    /*cin>>t.email;
    cin>>t.date.day;
    cin>>t.date.year;
    cin>>t.date.month;
    */

    string email="teacher@yahoo.com";
    int year=20;
    t.setEmail(email);
    t.setYear(year);

    cout<<t.getYear();


    return 0;
}