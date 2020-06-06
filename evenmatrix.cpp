#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long int tc,i,j,k,n,a;
    cin>>tc;
    while(tc--)
    {
       
        cin>>n;
        if(n%2==1)
        {    k=1;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                  cout<<k<<" ";
                  k++;
                }cout<<"\n";
            }
        }
        else
        {
              k=1;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i%2==0)
                    {
                        cout<<k<<" ";
                        k++;
                    }
                    else
                    {  
                        if(j%2==0)
                        {  a=k+1;
                          cout<<a<<" ";
                          k++;  
                        }
                        else
                        {   a=k-1;
                            cout<<a<<" ";
                            k++;
                        }
                        
                    }
                    
                }cout<<"\n";
            }
        }
    } return 0;
}
