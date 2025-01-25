#include<iostream>
using namespace std;
int parityAnalysis(int no);
int main(){
int number;
cout<<"enter the Number";
cin>>number;
cout<< parityAnalysis(number);

}
int parityAnalysis(int no){
int a,b,c,sum;
a=no%10;
b=(no/10)%10;
c=(no/10)/10;
sum=a+b+c;

if (( (no%2==0) &&(sum%2==0))||((no%2!=0)&&(sum%2!=0)))
{
    return(1);
}
else
return (0);

}