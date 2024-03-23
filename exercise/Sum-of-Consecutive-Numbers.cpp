# This C++ program prompts the user for a positive integer and then calculates and displays the sum of all consecutive numbers from 1 up to that number.

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int n,i,k;
	k=0;
	cout<<"please enter a number : ";
	cin>>n;
   			for (i=1 ; i<=n ; i++ )	
   			{
   			cout<<i;
   			if (i<n)
   			cout<<'+';
   	    	k=k+i;   		
	    	} 	
	cout<<'='<<k;    
	
	getch ();
	return 0;
	
}
