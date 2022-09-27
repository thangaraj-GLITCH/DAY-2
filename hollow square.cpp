#include<iostream>
using namespace std;
int main()
{
int r,i,j,k;
char sym ;
cout<<"\nenter the no of rows : ";
cin>>r;
cout<<"\nenter the symbol to show : ";
cin>>sym;
cout<<"\n";
for(i=0;i<r;i++){
for(j=0;j<r;j++){
if(i==0 || i==r-1){
cout<<sym<<" ";
}
else if(i>0 &&i<r-1){
if(j==0 || j==r-1){
cout<<sym<<" ";
}
else
cout<<" ";
}
}
cout<<"\n";
}
}
