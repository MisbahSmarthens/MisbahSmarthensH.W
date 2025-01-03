#include<iostream>
using namespace std;
int main(){
int num,largest=0,min;
cout<<"enter a no(-1 to stop)";
cin>>num;
while (num!=-1)
{
    if (num>=largest)
    {
        largest=num;
    }
    else{
        largest=largest;
    }
    cout<<"enter next no";
    cin>>num;

}

cout<<"the largest no is"<<largest;

}