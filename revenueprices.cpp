#include<iostream>
using namespace std;
int main ()
{
	int tc;
    cin>> tc ;
	while(tc--)
	{
		int n,k,p[10000],j=0,r=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			r=r+p[i];
		}
		for(int i=0;i<n;i++)
		{
			if(p[i]>k)
			{
				p[i]=k;
				
			}
        
        
			j=j+p[i];
		}
		cout<<r-j<<endl;
	}
	return 0;
}
