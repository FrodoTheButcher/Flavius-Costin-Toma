#include <iostream>
using namespace std;

class User{
    public:

    string name;
    int varsta;

    User()//implicit
    {

    }

    User(int v,string n)//explicit
    {
        name=n;
        varsta=v;
    }
};

int main(){

    User user(20,"andrei");
    User user2(15,"Marcel");

    User user3;
    user3.varsta=21;
    user3.nume="ioan";
    return 0;
}
//tema adaugati inca o propietate salariu, si adapati constructorul la acea propietate