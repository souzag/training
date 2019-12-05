#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qtdP, rooms;
    string city;
    cin >> qtdP >> city >> rooms;
    transform(city.begin(), city.end(), city.begin(), ::tolower); //transforma a palavra toda em minusculo

    double value = 0;

    if(city == "pipa")
    {
        int passeio =  75 * qtdP;
        value += passeio;

        if(rooms == 3)
        {
            value += 900;
        }
        else
        {
            value += 600;
        }

        cout << fixed << setprecision(2) << value << endl;
        cout << fixed << setprecision(2) << value/qtdP << endl;
    }
    else if(city == "fortaleza")
    {
        int passeio =  60 * qtdP;
        value += passeio;

        if(rooms == 3)
        {
            value += 950;
        }
        else
        {
            value += 1120;
        }

        cout << fixed << setprecision(2) << value << endl;
        cout << fixed << setprecision(2) << value/qtdP << endl;
    }

}