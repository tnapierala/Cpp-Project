#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void wynik1()
{
    cout<< "*********\n"
    cout<< "*       *\n"
    cout<< "*   X   *\n"
    cout<< "*       *\n"
    cout<< "*********\n";
}

void wynik2()
{
    cout << "*********\n"
         << "*   X   *\n"
         << "*       *\n"
         << "*   X   *\n"
         << "*********\n";
}

void wynik3()
{
    cout << "*********\n"
         << "*   X   *\n"
         << "*   X   *\n"
         << "*   X   *\n"
         << "*********\n";
}

void wynik4()
{
    cout << "*********\n"
         << "* X   X *\n"
         << "*       *\n"
         << "* X   X *\n"
         << "*********\n";
}

void wynik5()
{
    cout << "*********\n"
         << "* X   X *\n"
         << "*   X   *\n"
         << "* X   X *\n"
         << "*********\n";
}

void wynik6()
{
    cout << "*********\n"
         << "* X   X *\n"
         << "* X   X *\n"
         << "* X   X *\n"
         << "*********\n";
}

int main()
{

int rzut1;

srand(time(NULL));
rzut1 = rand()%6+1;

if(rzut1==1)
wynik1();

if(rzut1==2)
wynik2();

if(rzut1==3)
wynik3();

if(rzut1==4)
wynik4();

if(rzut1==5)
wynik5();

if(rzut1==6)
wynik6();

}


