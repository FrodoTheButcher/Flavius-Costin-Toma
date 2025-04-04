#include <iostream>
using namespace std;

class Calculator{
    private:
        string name;
    public:

        int static sumOf(int s,int s2)
        {
            return s+s2;
        }
        int static productOf(int s,int s2)
        {
            return s*s2;
        }
        int static differenceOf(int s,int s2)
        {
            return s-s2;
        }
        void setName(string n)
        {
            name=n;
        }
        void Display()
        {
            cout<<name;
        }
        
};
int main(){

    cout<<Calculator::sumOf(2,5)<<endl;
    cout<<Calculator::productOf(2,5)<<endl;
    cout<<Calculator::differenceOf(2,5)<<endl;


    Calculator calculator;
    calculator.setName("de buzunar");
    calculator.Display();
    return 0;
}