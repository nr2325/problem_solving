#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int t,i=0;
cin>>t;
while(t>0){
cin>>s;
if(s[0]=='y'||s[0]=='Y'){
i++;
}
if(s[1]=='e'||s[1]=='E'){
i++;
}
if(s[2]=='s'||s[2]=='S'){
i++;
}
if(i==3){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
i=0;
t--;
}
return 0;
}
