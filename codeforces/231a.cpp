#include<iostream>
using namespace std;
int main(){
int n,a,b,c,r=0;;
cin>>n;
while(n>0){
cin>>a>>b>>c;
if((a+b+c)>1){
r++;

}

n--;
}
cout<<r;

return 0;
}
