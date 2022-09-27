#include <iostream>
using namespace std; 
int main() {
 int x[5][5],y[5][5],z[5][5],row,col,i,j,k; 
cout<<"enter the number of row="; 
cin>>row; 
cout<<"enter the number of column="; 
cin>>col; 
cout<<"enter A matrix element=\n"; 
 for(i=0;i<row;i++) 
 { 
 for(j=0;j<col;j++) 
 { 
cin>>x[i][j]; 
 } 
 } 
cout<<"enter B matrix element=\n"; 
 for(i=0;i<row;i++) 
 { 
 for(j=0;j<col;j++) 
 { 
cin>>y[i][j]; 
 } 
 } 
cout<<"multiply of the matrix A & B=\n"; 
 for(i=0;i<row;i++) 
 { 
 for(j=0;j<col;j++) 
 { 
z[i][j]=0; 
 for(k=0;k<col;k++) 
 { 
 z[i][j]+=x[i][k]*y[k][j]; 
 } 
 } 
} 
 for(i=0;i<row;i++) 
 { 
 for(j=0;j<col;j++) 
 { 
cout<<z[i][j];
cout<<" "; 
 } 
cout<<"\n"; 
 } 
 return 0; 
}
