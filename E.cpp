#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int ans = 0;

while(n){
    ans++;
    n>>=1;
}

cout<<(1<<(ans-1))<<endl;

return 0;
}
