#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
cout<<"enter your Distance";
    int distance;
cin>>distance;
cout<<"enter time";
int time;
cin>>time;
 
int speed;
speed = distance/time;
cout<<"speed is:"<<speed<<endl;

int *ptr = &speed;
cout<<ptr;
    return 0;
}