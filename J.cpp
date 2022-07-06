#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[51], b[51];
    cin >> a >> b;
    if (strlen(a) == strlen(b))
    {
        for (int i = 0; i < strlen(a); i++)
        {
            cout << a[i] << b[i];
        }
    }
    else
    {
        for (int i = 0; i < strlen(b); i++)
        {
            cout << a[i] << b[i];
        }
        cout << a[strlen(a) - 1];
    }
}
