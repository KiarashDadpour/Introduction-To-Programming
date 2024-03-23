# This C++ program generates a multiplication table based on user-specified rows and columns, displaying the product of each cell along with its row and column indices.

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
 int satr,soton;
 cout<<"please enter row : " ; 
 cin>>satr;
 cout<<"please enter col : ";
 cin>>soton;
 
 for (int i=1;i<=satr;i++)
 {
 	for (int j=1;j<=soton;j++)
	 {
	 	cout<<i<<'*'<<j<<'='<<i*j<<"\t";
	 }
 	 cout<<endl;
 }
	
getch ();
return 0;
}
