#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Stos
{
public:
    int licznik = 0;
    int wielkosc;
    int *tab;

    int push(int wartosc)
    {
        if(licznik == wielkosc)
        {
            return 1; //stos jest pelny
        }
        else
        {
            licznik++;
            tab[licznik-1] = wartosc;
            return 0;
        }
    }

 int top()
    {
        int a;
        if(this->empty() == 1)
        {
            a = tab[licznik-1];
            return a;
        }
    }


    int pop()
    {
        int a;
        if(this->empty() == 1)
        {
            a = tab[licznik-1];
            licznik = licznik-1;
            return a;
        }
    }

    int top()
    {
        int a;
        if(this->empty() == 1)
        {
            a = tab[licznik-1];
            return a;
        }
    }

    int full()
    {
        if(licznik == wielkosc)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    void destroy()
    {
        delete(tab);
    }

};

int main()
{
    int i, pom,liczba;
    Stos tab1;
    Stos tab2;
    tab1.init(10);
    tab2.init(10);

    for(int i=0; i<10; i++)
    {
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        tab1.push(liczba);
    }

    return 0;
}
