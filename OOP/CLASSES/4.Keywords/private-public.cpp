#include <iostream>
using namespace std;

class User{
    private:
        int varsta;
    public:
    
        double salary;
        char nume[50];
        void setVarsta(int v)
        {
            if(v>=1)
            {
                varsta=v;
            }
            else{
                cout<<"VARSTA TREBUIE SA FIE MAI MARE EGALA CU 1";
            }
        }
        int getVarsta()
        {
            return varsta;
        }
};

int main(){

    User user;
    user.setVarsta(40);
    cout<<user.getVarsta();
    //tema:setati propietatile nume si salariu private
    //atribuie un nume si un salariu prin intermediul functiei setNume setSalary
    //afisati-le prin intermediul functiei getNume getSalary

    return 0;
}