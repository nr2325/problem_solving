#include<bits/stdc++.h>
using namespace std;
int main(){
string s,ts,s1,r;
cin>>s;
ts=s[0];
std::transform(ts.begin(), ts.end(), ts.begin(), ::toupper);
s1 = s.substr(1);
r=ts+s1;

cout<<r;


return 0;
}
