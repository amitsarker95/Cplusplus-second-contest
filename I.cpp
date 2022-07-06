#include <bits/stdc++.h>
using namespace std;

int main()
{
    char aa[11], bb[11], cc[11];
    cin >> aa >> bb >> cc;
    if (aa[strlen(aa) - 1] == bb[0] && bb[strlen(bb) - 1] == cc[0])
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
