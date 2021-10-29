#include <iostream> 
using namespace std;
int main() 
{
int a, b, i = 0, d ;
cout<<"enter the 2 no";
cin>>a;
cin>>b; 
for(i=a;i<=b;i++)
{
d=i%10;
if (d==5)
continue;
cout<<i<<"\n";
}
return 0;
}