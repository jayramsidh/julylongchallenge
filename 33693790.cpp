#include<iostream>
using namespace std;
int main ()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,p[10001],k=0,b[11];
        cin>>n;
        b[5]=0,b[10]=0;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<n;i++)
        {
              if(p[i]==5)
              {
                  b[5]++;
              }
              if(p[i]==10)
              {
                  if(b[5]!=0)
                  {
                   b[5]--;
                   b[10]++;
                  }
                  else
                  {
                      k=1;
                      cout<<"NO"<<endl;
                      break;
                  }
              }
              if(p[i]==15)
              {
                  if(b[10]!=0)
                  {
                      b[10]--;
                  }
                  else
                  {

                    if(b[5]>=2)
                    {
                        b[5]=b[5]-2;
                    }


                  else
                  {    
                   cout<<"NO"<<endl;   
                   k=1;
                   break;   
                  }}
                  
              }

          
                  }
                  if(k==0)
                  {
                      cout<<"YES"<<endl;
                  }
                    
                  


    }
    return 0;
}