#pragma once
#include<string>
using namespace std;

class CityUA
{
    string name; 
    int population_city; 

    static string language;
    static string capital; 
    static string president; 
    static int population_country; 
    static int Count; 

public:

    CityUA();
    CityUA(string n, int pop);
    void Init(string n, int pop);
    void Print();

    void SetName (string n);
    void SetPopCity (int pop);

    string GetName()const;
    int GetPopCity()const;


    static void PrintData(); 
};