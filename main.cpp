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
