#include <iostream>
using namespace std;
string checkSpeed(float speed);
int main()
{
float valueOfSpeed;
cout<<"enter the speed";
cin>> valueOfSpeed;
cout<<checkSpeed(valueOfSpeed);

}
string checkSpeed(float value){
if (value<=10)
{
   return "slow";
}
if ((value>10)&&(value<=50))
{
   return "average";
}
if ((value>50)&&(value<=150))
{
   return "fast";
}
if ((value>150)&&(value<=1000))
{
   return "ultra fast";
}
if (value>1000)
{
   return "extremely fast";
}



}
