#include<iostream>
using namespace std;
int main(){
int num,a,sum;
cout<<"enter any no";
cin>>num;
sum=0;
while (num!=0)
{
   a=num%10;
   sum=sum+a;
   num=num/10;
    }
cout<<"the sum of digits is:"<<sum<<endl;

}