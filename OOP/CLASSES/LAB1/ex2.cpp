#include <iostream>
#include <cstring>
using namespace std;

class Produs{
    private:
        char nume[50];
        float pret;
        int stoc;
    public:

        Produs()
        {

        }

        Produs(char n[50],float p,int s)
        {
            strcpy(nume,n);
            pret=p;
            stoc=s;
        }

        void setPret(float p)
        {
            if(p<=0)
            {
                cout<<"pretul trebuie sa fie > 0";
            }
            else{
                pret=p;
            }
        }
        double getPret()
        {
            return pret;
        }
        void afisare_detalii()
        {
            cout<<"numele produsului este "<<nume<<" cu pretul de "<<pret<<" si stocul de "<<stoc<<endl;
        }
        void actualizare_stoc(int s)
        {
            //TEMA:
            //trebuie sa se verifice daca s este valid >=0
            //daca nu,afisam mesaj
            //daca este valid,setam noul stoc valoarea lui s
        }
};

int main(){
    char nume[50]="cereale";
    Produs produs(nume,5.5,10);

    produs.afisare_detalii();

    produs.actualizare_stoc(5);
    produs.afisare_detalii();

    produs.setPret(106);
    produs.afisare_detalii();
    
    return 0;
}
//tema setNume getNume setStoc getStoc