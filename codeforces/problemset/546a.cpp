#include<bits/stdc++.h>
using namespace std;
int main(){
int money,first_price,demand,total_price=0,i=1;
cin>>first_price>>money>>demand;
while(demand>0){

total_price=total_price+(first_price*i);

i++;
demand--;
}

if((money-total_price)>0){
cout<<0;
}else{
cout<<abs(money-total_price);
}

return 0;
}
