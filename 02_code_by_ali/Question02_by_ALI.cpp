
/*Question No. 2:
Write a C program to input marks of five subjects Physics, Chemistry, Biology,
 Mathematics and Computer. Calculate percentage and grade according to following.
Percentage>=90%: Grade A
Percentage>=80%: Grade B
Percentage>=70%: Grade C
Percentage>=60%: Grade D
Percentage>=40%: Grade E
Percentage < 40%: Grade F
Your program should also take total marks of each subject. If user enters obtained
 marks more than total marks than you should tell user that input data has been 
 entered.
*/
#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,avg,tm;
    cout<<"Please enter the total Marks   =  ";
    cin>>tm;
    cout<<"Enter the marks of the following Subjects\n";
    cout<<"Physics      : ";
    cin>>a;
     cout<<"Chemistry    : ";
    cin>>b;
     cout<<"Biology      : ";
    cin>>c;
     cout<<"Mathematics  : ";
    cin>>d;
     cout<<"Computer     : ";
    cin>>e;
    
    if(tm<a)
    cout<<"Enter the valid Marks";
    else
    {
    float sum=a+b+c+d+e;
    avg=(sum/500)*100;
    if(avg>=90)
    cout<<"Grade A"<<endl;

    else if(avg>=80)
    cout<<"Grade B"<<endl;

     else if(avg>=70)
    cout<<"Grade C"<<endl;

     else if(avg>=60)
    cout<<"Grade D"<<endl;

     else if(avg>=40)
    cout<<"Grade E"<<endl;

     else if(avg<40)
    cout<<"Grade F"<<endl;
    }
    
    return 0;
}
