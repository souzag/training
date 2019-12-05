#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, lista1[n], n2, lista2[n2];
    cin >> n;

    if(n == 0)
    {
        cout << "Erro - A lista deve ter pelo menos 1 elemento." << endl;
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin >> lista1[i];
    }

    cin >> n2;

    if(n2 == 0)
    {
        cout << "Erro - A lista deve ter pelo menos 1 elemento." << endl;
        return 0;
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> lista2[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << lista1[i] << " ";
    }

    for(int i = 0; i < n2; i++)
    {
        if(i == n2 - 1)
        {
            cout << lista2[i];
            break;
        }

        cout << lista2[i] << " ";
    }
}