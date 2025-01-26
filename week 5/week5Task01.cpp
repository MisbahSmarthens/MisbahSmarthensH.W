#include<iostream>
using namespace std;
string decideActivity(string temperature,string humidity);
int main(){
string temp,humidity;
cout<<"enter the temperature(warm or cold):";
cin>>temp;
cout<<"enter humidity(dry or humid):";
cin>>humidity;
cout<<"Recommended activity " <<decideActivity(temp,humidity);

}
string decideActivity(string temperature,string humidity)
{
if ((temperature=="warm")&&(humidity=="dry"))
{
 return "Play Tennis";
}
if ((temperature=="warm")&&(humidity=="humid"))
{
 return "Swim";
}
if ((temperature=="cold")&&(humidity=="dry"))
{
 return "Play Basketball";
}
if ((temperature=="cold")&&(humidity=="humid"))
{
 return "Watch TV";
}




}
