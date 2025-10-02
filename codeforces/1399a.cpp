#include<bits/stdc++.h>
using namespace std;
int main(){
int test,cnt;
cin>>test;

while(test>0){
cin>>cnt;
int no[cnt];
int j=0;
while(cnt>0){
cin>>no[j];
j++;
cnt--;
}

std::sort(no, no + j);

int r=0;
for(int k=0;k<(j-1);k++){
if((no[k+1]-no[k])>1){
r=1;
}
}

if(r==1){
cout<<"NO"<<endl;
}else{
cout<<"YES"<<endl;
}
test--;
}
return 0;
}
