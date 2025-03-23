
#include<iostream>
using namespace std;
int main(){
int i,j,m[11][11],rloc,cloc,step;
for(int i=1;i<6;i++){

for(int j=1;j<6;j++){

cin>>m[i][j];

if(m[i][j]==1){
rloc=abs(3-i);
cloc=abs(3-j);
step=rloc+cloc;
}

}

}

cout<<step;


return 0;
}
