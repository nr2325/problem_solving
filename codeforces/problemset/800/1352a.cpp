#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int testcase,tempnumber,number,remainder,i,totalsummand,summand;
cin>>testcase;
while(testcase>0){

cin>>number;
i=-1;
totalsummand=0;
tempnumber=number;
while(tempnumber>0){
//extract number
remainder=tempnumber%10;

summand=remainder*pow(10,++i);
if(summand!=0){
    totalsummand++;
}
//decrement
tempnumber=tempnumber/10;
}

cout<<totalsummand<<endl;
i=0;
while(number>0){
//extract number
remainder=number%10;

summand=remainder*pow(10,i++);
if(summand!=0){
    cout<<summand<<endl;
}
//decrement
number=number/10;
}
testcase--;

}


return 0;
}
