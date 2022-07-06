#include<bits/stdc++.h>
using namespace std;

int main(){

int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr, arr + n);
int result = 0;
while(k--){
    result += arr[n-1];
    n--;
}
cout<<result<<endl;
return 0;
}
