#include <iostream>
#include <algorithm>
using namespace std;

class Fractie{
    private:
        int numarator;
        int numitor;
    public:
       void setNumarator(int n)
       {
        numarator=n;
       }
       void setNumitor(int n)
       {
        //tema:
        //verifica ca numitorul sa nu fie 0
        //daca este 0 afisam mesaj
        //altfel setam valoarea
       }
       int getNumarator()
       {
        return numarator;
       }
       int getNumitor()
       {
        return numitor;
       }

       double adunare(Fractie y)
       {
        /*
        x=numarator1/numitor1
        y=numarator2/numitor2
        s=(numarator1*numitor2+numarator2*numitor1)/(numitor1*numitor2)
        */
        double suma = (numarator*y.numitor + y.numarator*numitor)/(numitor*y.numitor);
        return suma;
       }
       double scadere(Fractie y)
       {
        /*
        x=numarator1/numitor1
        y=numarator2/numitor2
        s=(numarator1*numitor2+numarator2*numitor1)/(numitor1*numitor2)
        */
        double suma = (numarator*y.numitor - y.numarator*numitor)/(numitor*y.numitor);
        return suma;
       }
       double produs(Fractie y)
       {
            double produs = (numarator*y.numarator)/(numitor*y.numitor);
            return produs;
       }
       void simplificare()
       {
         //numitorul si numaratorul se impart cu cel mai mare divizor comun al lor
         int cmmdc = __gcd(numarator,numitor);
         numarator=numarator/cmmdc;
         numitor=numitor/cmmdc;
       }
       double cat(Fractie y)
       {
            double rez = (numarator*y.numitor)/(numitor*y.numarator);
            return rez;
       }
       void afisare(){
        cout<<numarator<<"/"<<numitor;
       }
       double valoare_fractie(){
        return numarator/numitor;
       }
};

int main(){

    Fractie a,b;
    a.setNumarator(5);
    a.setNumitor(4);

    b.setNumarator(7);
    b.setNumitor(3);

    cout<<a.produs(b);
    cout<<b.produs(a);
    cout<<a.adunare(b);
    cout<<b.adunare(a);
    a.simplificare();
    b.simplificare();
    cout<<a.cat(b);
    return 0;
}