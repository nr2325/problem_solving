#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
long long int fn,fr;
cin>>fn;
if((fn%2)!=0){
    cout<<-((fn+1)/2);
}else{
    cout<<fn/2;
}

return 0;
}
