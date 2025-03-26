#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int testcase,number,sum;
cin>>testcase;
while(testcase>0){
cin>>number;
sum=0;

while(number>0){

sum=sum+(number%10);

number=number/10;
}

cout<<sum<<endl;

testcase--;
}

return 0;
}
