#include <iostream>
#include "cityUA.h"
using namespace std;

string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Volodymir Zelenski";
int CityUA::population_country = 45000000;
int CityUA::Count = 0;

CityUA::CityUA()
{
    name = " ";
    population_city = 0;

    Count++;
}

CityUA::CityUA(string n, int pop)
{
    name = n;
    population_city = pop;

    Count++;
}

void CityUA::Init(string n, int pop)
{
    name = n;
    population_city = pop;

    Count++;
}

void CityUA::Print()
{
    cout << "Name: " << name << endl
    << "Population of the city: " << population_city << endl;
}

void CityUA::SetName(string n)
{
    if (n != " ")
    {
        name = n;
    }
}

void CityUA::SetPopCity(int pop)
{
    if (pop != 0)
    {
        population_city = pop;
    }
}

string CityUA::GetName() const
{
    return name;
}

int CityUA::GetPopCity() const
{
    return population_city;
}

void CityUA::PrintData()
{
    cout << "Const info: " << endl;
    cout << "Language: " << language << endl
    << "Capital: " << capital << endl
    << "President: " << president << endl
    << "Population of the country: " << population_country << endl
    << endl << "Count: " << Count << endl;
}



int main ()
{
    CityUA c1("Odessa", 12000);
    c1.Print();

    const CityUA c2;
    c2.PrintData();
}