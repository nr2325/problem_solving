#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,x,y,n;
    cin>>testcase;
    while(testcase>0)
    {
        cin>>x>>y>>n;
        for(;; --n)
        {
            if(n%x==y)
            {
                cout<<n<<endl;
                break;
            }
        }

        --testcase;
    }

    return 0;
}
