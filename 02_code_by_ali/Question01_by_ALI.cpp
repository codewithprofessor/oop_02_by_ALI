/*

Question No. 1:
Write a C program to input total number of units consumed by user and calculate
 total electricity bill according to the given condition.
For first 50 units Rs. 6.75/unit
For next 100 units Rs. 10.50/unit
For next 100 units Rs. 15.20/unit
For unit above 250 Rs. 20.50/unit
An additional surcharge of 20% is added to the bill
If total bill is above 20000, then user will be given 5% discount. 

*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    //rbill== real bill
    cout<<"Enter the numbers of unit consumed \n";
    cin>>a;
    if(a<=50)
    b =a*6.75;
    else if(a<=150)
    b=a*10.50;

    else if(a<=250)
    b=a*15.20;

    else
    b=a*20.50;
    c=b*0.20;
    c=b+c;

    if(c>=20000)
    {d=c*0.05;
    d= c-d;
    cout<<"The Bill is =  "<<d<<endl;
    }
    else
    cout<<"The Bill is =  "<<c<<endl; 
    return 0;
}
