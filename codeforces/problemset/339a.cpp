#include <bits/stdc++.h>
using namespace std;
int main(){
string s,r;
cin>>s;
for(int i=0;i<s.length();i++){
if(s[i]=='1'){
r=r+s[i]+'+';

}

}
for(int i=0;i<s.length();i++){
if(s[i]=='2'){
r=r+s[i]+'+';

}

}
for(int i=0;i<s.length();i++){
if(s[i]=='3'){
r=r+s[i]+'+';

}

}


r.pop_back();

cout<<r;


return 0;
}
