
#include<iostream>
#include <string>

using namespace std;
int main(){
int n,v=0;
char c;
cin>>n;
string s;
while(n>0){
cin>>s;
c = s.find('+');

if('+' != s[c]){
v=v-1;

}else{

v=v+1;
}


n--;
}

cout<<v;








return 0;
}
