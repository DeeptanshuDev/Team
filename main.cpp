#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,count2=0;
    cin>>p;
    for(unsigned int i=0;i<p;i++)
    {
        int a,b,c,count=0;
        cin>>a>>b>>c;
        if(a==1)
        {
            count++;

        }
        if(b==1)
        {
            count++;


        }
        if(c==1)
        {
            count++;

        }

        if(count>1)
        {
            count2++;

        }
    }
    cout<<count2;

    return 0;

}
