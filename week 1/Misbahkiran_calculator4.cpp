#include <iostream>
using namespace std;
int n1,n2;
main(){
    int no1,no2,add,sub,mul,div,mod;
    char oprtr;
    int result;
cout<<"enter no1 :";
cin>>no1;
cout<<"enter no2 :";
cin>>no2;
cout<<"enter any operator";
cin>>oprtr;
if (oprtr=='+')
{
    result = no1+no2;
    cout<<result;
}
else if (oprtr=='-')
{
    result = no1-no2;
    cout<<result;

}
else if (oprtr=='*')
{
result = no1*no2;
cout<<result;
}
else if (oprtr=='/')
{
    result = no1/no2;
    cout<<result;
}
else if (oprtr=='%')
{
    result = no1%no2;
    cout<<result;
}
else{
    cout<<"something  went wrong";
}
return 0;
}