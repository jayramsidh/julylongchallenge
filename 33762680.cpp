#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    char s[100001]; int i,x,pair=0;
	    scanf("%s",s);
	    x=strlen(s);
	    for(i=0;i<x-1;)
	    {
	        if(s[i]=='x')
	        {
	            if(s[i+1]=='y')
	            {
	                pair++;
	                i=i+2;
	            }
	            else
	            {i++;}
	            
	        }
	        else
	        {
	            if(s[i+1]=='x')
	            {
	                pair++;
	                i=i+2;
	            }
	            else
	            {i++;}
	        }
	    }printf("%d\n",pair);
	}
	return 0;
}
