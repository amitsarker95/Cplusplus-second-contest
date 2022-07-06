#include<bits/stdc++.h>
using namespace std;

int main(){
int x,t;

cin>>x>>t;

int result = 0;
if(x>t){
    result = x-t;
}else if(x<t){
    result = 0;
}

cout<<result<<endl;


return 0;
}
