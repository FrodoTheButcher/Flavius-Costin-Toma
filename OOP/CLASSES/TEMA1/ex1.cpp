#include <iostream>
#include <cstring>
using namespace std;
//Se dă un șir de caractere. Să se determine câte vocale din șir sunt cuprinse între două consoane.
int main()
{
    int p;
    char s[50],s2[50],s1[50];
   strcpy(s1, "plantau fistic");
    p=strchr(s1,' ')-s1;
   
    cout<<p; 
    printf("%d%s",p,s2);
    return 0;
}