# This C++ program calculates and displays the length, width, area, and environment (perimeter) of a rectangle based on user-provided dimensions.

#include <iostream>
#include <conio.h>
using namespace std;
#define max(a,b)(a>b?a:b)
#define min(a,b)(a<b?a:b)
#define area(a,b)(a*b)
#define env(a,b)(a+a+b+b) 
int main ()
{

	double num1,num2;
		cout<<"Please enter first number : "<<endl;
		cin>>num1;
		cout<<endl<<"Please enter second number : "<<endl;
		cin>> num2;
		
		cout<<endl<<"**************************************************************"<<endl<<endl;
		
		cout<<"Length of this rectangle is : " << max(num1,num2)<<endl<<endl;
		cout<<endl<<"**************************************************************"<<endl<<endl;
		
		cout<<"Width of this rectangle is : "<< min(num1,num2)<<endl<<endl;
		cout<<"**************************************************************"<<endl<<endl;
		
		cout<<"area of this rectangle is  : "<<area(num1,num2)<<endl<<endl;
		cout<<"**************************************************************"<<endl<<endl;
		
		cout<<"enviroment of this rectangle is : "<<env(num1,num2)<<endl<<endl;
		cout<<"**************************************************************";
				
		getch ();
return 0;
	
}


