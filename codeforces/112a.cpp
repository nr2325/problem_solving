
#include<bits/stdc++.h>
using namespace std;

int main(){
int r=0;
string s1,s2;
cin>>s1>>s2;
transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

for(int i=0;i<s1.length();i++){

if(s1[i]>s2[i]){

r=1;
break;
}
else if(s1[i]<s2[i]){

r=-1;
break;
}


}


cout<<r;


return 0;

}
