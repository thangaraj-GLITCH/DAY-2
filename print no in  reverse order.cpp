#include<iostream>
using namespace std;
int rev(int a)
{
int rem,rev=0;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a/=10;
}
return rev;
}
int main()
{
int n;
cout<<"\nenter the number to reverse : ";
cin>>n;
cout<<"\nreversed number : "<<rev(n);
return 0;
}
