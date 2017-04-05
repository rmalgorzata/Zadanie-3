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

    void init(int rozmiar)
    {
        tab = new int[rozmiar];
        wielkosc = rozmiar;
    }

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

    int empty()
    {
        if(licznik == 0)
        {
            return 0; //stos pusty
        }
        else
        {
            return 1; //stos niepusty
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

    cout<<endl<<endl;

    while(tab1.empty())
    {
        tab2.push(tab1.pop());
        cout<<tab2.top()<<endl;
    }

    tab1.destroy();

    return 0;
}
