#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,a,b,c,testvalue,result;
    cin>>testcase;
    while(testcase>0)
    {
        cin>>a>>b;
        c=a;
        result=(c-a)+(b-c);
        for(c=a+1; c<=b; ++c)
        {
            testvalue=(c-a)+(b-c);

            if(result>=testvalue)
            {
                result=testvalue;
            }


        }

        cout<<result<<endl;
        testcase--;
    }

    return 0;
}
