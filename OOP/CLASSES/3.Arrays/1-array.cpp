#include <iostream>
using namespace std;

/*
1.Sa se creeze clasa Car cu propietatiile: 
brand,hp , km
2.Sa se creeze 3 masini
*/

class Car{
    public:
        string brand;
        int hp;
        float km;
};
int main(){

    /*Car car1,car2,car3;
    car1.brand = "BMW";
    car1.hp = 170;
    car1.km = 450.500;

    car2.brand = "MERC";
    car2.km = 135.321;
    car2.hp = 110;

    car3.brand = "GOLF";
    car3.km = 30.64;
    car3.hp = 140;*/
    Car cars[3];
    cin>>cars[0].brand;
    cin>>cars[0].hp ;
    cin>>cars[0].km;;

    cin>>cars[1].brand;
    cin>>cars[1].hp ;
    cin>>cars[1].km;;

    cin>>cars[2].brand;
    cin>>cars[2].hp;
    cin>>cars[2].km;
    //TEMA: in loc sa scriem de 3 ori citirea , foloseste un for unde i-ul va reprezenta
    //indexul masinii citite

   cout<<"datele masinii sunt "<<endl;
   cout<<"brand "<<cars[0].brand<<" km "<<cars[0].km<<" hp"<<cars[0].hp<<endl;

   cout<<"datele masinii sunt "<<endl;
   cout<<"brand "<<cars[1].brand<<" km "<<cars[1].km<<" hp"<<cars[1].hp<<endl;

   cout<<"datele masinii sunt "<<endl;
   cout<<"brand "<<cars[2].brand<<" km "<<cars[2].km<<" hp"<<cars[2].hp<<endl;
    //TEMA: in loc sa scriem cout datele fiecare masini separat
    //foloseste un for

    return 0;
}
