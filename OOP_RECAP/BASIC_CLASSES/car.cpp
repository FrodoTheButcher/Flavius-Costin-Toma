#include <iostream>
using namespace std;

class Car{
    public:
     string brand;
     int hp;
     float km;
};
/*
Sa se citeasca o masina care va avea brand km hp

*/
int main(){
    Car car;
    cout<<"introduceti brandul";
    cin>>car.brand;
    cout<<"introduceti hp";
    cin>>car.hp;
    cout<<"introduceti km";
    cin>>car.km;

    cout<<"Datele sunt "<<car.brand<<" "<<car.hp<<" "<<car.km;



    return 0;
}