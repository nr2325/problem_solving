#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int uc=0,lc=0;
cin>>s;
for(int i=0;i<s.length();i++){
if(isupper(s[i])){
uc++;
}else{
lc++;

}
}

if(uc>lc){
transform(s.begin(), s.end(), s.begin(),
              ::toupper);
}else{

transform(s.begin(), s.end(), s.begin(),
              ::tolower);
}
cout<<s;
return 0;
}
