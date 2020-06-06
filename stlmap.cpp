#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main ()
{
    map<char, int> chr;
    string x = "jayram godara";
     for(char c:x )
     {
         chr[c]++;
     }
     cout<<chr['a']<<" "<<chr['j'];
     return 0;
}