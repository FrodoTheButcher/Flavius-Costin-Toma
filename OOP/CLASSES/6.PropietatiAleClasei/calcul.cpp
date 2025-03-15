#include <iostream>
using namespace std;

class Masina{

    public:
        string nume;
        double km;
        Masina(string n,double k)
        {
            nume=n;
            km=k;
        }
        void afisare_date()
        {
            cout<<nume<<' '<<km<<endl;
        }

        void afisare_nume_masina_mai_noua(Masina n)
        {
            if(km<n.km)
            {
                cout<<nume;
            }
            else{
                cout<<n.nume;
            }
        }
};

int main(){
    Masina x("bmw",200000.5);
    x.afisare_date();

    Masina y("audi",400000.5);
    y.afisare_date();

    x.afisare_nume_masina_mai_noua(y);

    y.afisare_nume_masina_mai_noua(x);

    return 0;
}