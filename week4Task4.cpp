#include<iostream>
using namespace std;
int findGreatest(int n1,int n2,int n3);

int main(){
    int no1,no2,no3;
    cout<<"enter the First number:";
    cin>>no1;
    cout<<"enter the second number:";
    cin>>no2;
    cout<<"enter the third number:";
    cin>>no3;
    cout<< "the greatest number among"<<no1<<","<<no2<<"and"<<no3<<"is"<<findGreatest(no1,no2,no3);

}
int findGreatest(int n1,int n2,int n3){
if ((n1>n2)&&(n1>n3))
{
    return(n1);
}
if ((n2>n1)&&(n2>n3))
{
    return(n2);
}else
return(n3);



}