/*
Question No. 3:
Write a C program to count total number of notes in given amount.
How many of 1000
How many of 500
How many of 100
How many of 50
How many of 20
How many of 10
For Example: if user enters ‘1750’
	1000:	1
	500:	1
	100:	2
	50:	1
*/
#include<iostream>
using namespace std;

int main() 
{
    int a,w,x,y,z;     //a==amount  w==1000   x==500  y==100  z==50
    cout<<"Enter the Amount\n";
    cin>>a;
     
    if(a>=w)       
    w = a/1000;
    a = a-(w*1000);

      if(a>=x) 
    x = a/500;
    a = a-(x*500);

      if(a>=y) 
    y = a/100;
    a = a-(y*100);

      if(a>=z) 
    z = a/50;

     cout << "Total number of notes" <<endl;
    cout << "1000 = " << w <<endl;
    cout << "500 = " << x <<endl;
    cout << "100 = " << y <<endl;
    cout << "50 = " << z <<endl;
    return 0;
}