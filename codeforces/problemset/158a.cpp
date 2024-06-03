#include<iostream>
using namespace std;
int main(){
int n,k,score[55],i=0,c=0;
cin>>n>>k;
while(n>0){
cin>>score[i];

n--;
i++;
}

for(int j=0;j<i;j++){

if(score[j]>=score[k-1]&&score[j]>0){

c++;
}

}

cout<<c;

return 0;
}
