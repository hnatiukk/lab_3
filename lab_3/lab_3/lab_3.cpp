//Калькулятор індексу маси тіла

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть ваш зріст в сантиметрах = ";
    int heightcm;
    cin >> heightcm;

    double heightm;
    heightm = heightcm / 100.0;

    cout << "Введіть вашу вагу в кілограмах = ";
    int weight;
    cin >> weight;

    double imt;
    imt = weight / pow(heightm, 2);

    if (imt <= 18.5)
    {
        cout << "Ваш ІМТ = " << imt << " – вага недостатня.";
    }

    else if (imt > 18.5 && imt <= 24.9) 
    {
        cout << "Ваш ІМТ = " << imt << " – вага у нормі.";
    }    

    else if (imt >= 25 && imt <= 29.9) 
    {
        cout << "Ваш ІМТ = " << imt << " – надлишкова вага.";
    }    
    
    else if (imt >= 30) 
    {
        cout << "Ваш ІМТ = " << imt << " – велика надмірна вага.";
    }
}
