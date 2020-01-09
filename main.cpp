#include <iostream>


using namespace std ;

int main()
{

    int valeur=10 ,somme=0;
    float moyenne;


    for(int i=0;i<=valeur;i++)
        somme+=i;

    moyenne=(float)somme/valeur;
    cout<<"la moyene est comme suit:  "<<moyenne;




    return 0;
}
