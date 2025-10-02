#include<iostream>
#include <string>
using namespace std;
int main(){
int strcount,inputcount;
string str;
cin>>inputcount;

while(inputcount>0){

cin>>str;
strcount=str.length();
if(strcount>10){
char str1=str[0];
char str2=str[strcount-1];
cout<<str1<<(strcount-2)<<str2<<endl;

}else{

cout<<str<<endl;
}

inputcount--;
}
return 0;
}
