#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       long long int ts,k=1;
        cin>>ts;
        if(ts%2==1)
        {
            ts=ts/2;
        }
        else
        {
          k=0;
        }
        
        while(k==0)
        {
           ts=ts/2;
           if(ts%2==1)
           {
               ts=ts/2;
               break;
           } 
        }
        cout<<ts<<endl;
    }
}