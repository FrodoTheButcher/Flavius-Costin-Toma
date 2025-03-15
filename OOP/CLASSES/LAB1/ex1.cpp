#include <iostream>
#include <math.h>
using namespace std;

class Cerc{
    private:
        double raza;
    public:
        void setRaza(double r)
        {
            if(r<=0)
            {
                cout<<"raza trebuie sa fie mai mare egala cu 0";
            }
            else{
                raza=r;
            }
        }
        double getRaza(){
            return raza;
        }
        double circumferinta()
        {
            return 2*M_PI*raza;
        }

        Cerc()//implicit
        {

        }

        Cerc(double r)//cu parametrii
        {
            raza=r;
        }
};

int main(){


    Cerc cerc(5);
    Cerc cerc2;
    cerc2.setRaza(5.5);

    double sumaCircumferinte;
    sumaCircumferinte = cerc.circumferinta() + cerc2.circumferinta();
    cout<<sumaCircumferinte;
    
    return 0;
}