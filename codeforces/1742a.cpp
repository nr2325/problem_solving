#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,t;
cin>>t;
while(t>0){
cin>>a>>b>>c;
if((a+b)==c){
cout<<"YES";
}
else if((a+c)==b){
cout<<"YES";
}
else if((b+c)==a){
cout<<"YES";
}
else{
cout<<"NO";
}

cout<<endl;
t--;
}
return 0;
}

