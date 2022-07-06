
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[100001];
    cin >> str;
    int len = strlen(str);

    int cnt[26] = {0};

    for (int i = 0; i < len; i++) {
        int num = str[i] - 'a';
        cnt[num]++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 2) {
            char letter = i + 'a';
            cout <<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
}
