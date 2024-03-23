# This C++ program prompts the user to enter three numbers and then determines and displays the largest one.

 #include <iostream>    
 #include  <conio.h>                    
 using namespace std;
 int main ()
 {
 	int a,b,c;
 	cout<<"please enter three numbers : ""\n";
 	cin>>a>>b>>c;
 	cout<<"the biggest number is : ";
 	if ((a>b)&&(a>c))
 	cout<<a;
    else if ((b>a)&(b>c))
     cout<<b;
    else 
     cout<<c;
  
 	getch();
 	return 0;
 	
 }
