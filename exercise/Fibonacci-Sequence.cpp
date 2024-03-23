# This C++ program calculates and prints the Fibonacci sequence up to a user-specified number.

 #include <iostream>
 #include <conio.h>
 using namespace std; 
 int main ()
 {
 long int n; 
 long int i=1;
 long int f1=1; 
 long int f2=1; 
 long int f3;
 cout<<"enter a number :";
 cin>> n; 
 cout<<f1<<","<<f2;
 while(i<=n)
 {
 	f3=f1+f2; 
 	cout<<","<<f3;
 	f1=f2;
 	f2=f3;
 	i++;
 }
 	getch();
 	return 0;
 }
  
