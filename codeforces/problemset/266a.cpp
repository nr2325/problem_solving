#include<bits/stdc++.h>
using namespace std;
int main(){
int n,r=0;
string s;
cin>>n;
cin>>s;
for(int i=0;i<(s.length()-1);i++){
if(s[i]==s[i+1]){
r++;
}

}

cout<<r;

return 0;
}
