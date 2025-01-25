#include<iostream>
using namespace std;
int areSameNumbers(int n1,int n2,int n3);
int main(){
int no1,no2,no3;
cout<<"enter First no";
cin>>no1;
cout<<"enter second no";
cin>>no2;
cout<<"enter third no";
cin>>no3;
cout<<areSameNumbers(no1,no2,no3);

}
int areSameNumbers(int n1,int n2,int n3){
if ((n1==n2)&&(n1==n3))
{
    return(1);

}
else
return (0);


}
