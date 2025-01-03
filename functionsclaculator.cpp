#include<iostream>
#include<math.h>
using namespace std;
int sum(int a,int b);
int sub(int a,int b);
int mul(int a, int b);
int division(int a, int b);
int mod(int a, int b);
int main(){
int no1,no2,result;
char oprtr;
cout<<"enter a no ";
cin>>no1;
cout<<"enter second no";
cin>>no2;
cout<<"enter an operator";
cin>>oprtr;
if (oprtr=='+')
{
cout<<sum(no1,no2);
}
else if (oprtr=='-')
{
    cout<<sub(no1,no2);
    }
else if (oprtr=='*')
{
cout<<mul(no1,no2);
}
else if (oprtr=='/')
{
    cout<<division(no1,no2);
}
else if (oprtr=='%')
{
    cout<<mod(no1,no2);
}
else{
    cout<<"something  went wrong";
}
return 0;}


int sum(int a,int b){
    return(a+b);
}
int sub(int a,int b){
    return(a-b);
}
int mul(int a, int b){
    return(a*b);
}
int division( int a,int b){
    return(a/b);
}
int mod(int a, int b){
    return(a%b);
}


