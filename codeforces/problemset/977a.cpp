#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c;
cin>>n>>c;

while(c>0){

if((n%10)==0){
n=n/10;
}else{
n=n-1;
}


c--;
}
cout<<n;


return 0;
}
