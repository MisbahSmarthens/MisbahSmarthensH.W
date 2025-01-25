#include<iostream>
using namespace std;
float lowestPrice(int kilometers,string time);
int main(){
int km; string period;
cout<<"enter the number of kilometers:";
cin>>km;
cout<<"Enter the period of the day:";
cin>>period;
cout<<lowestPrice(km,period)<<"EUR";

}
float lowestPrice(int kilometers,string time){
if ((kilometers<20)&&(time=="day"))
{
 return(kilometers*0.79)+0.70;
}
if ((kilometers<20)&&(time=="night"))
{
 return(kilometers*0.90)+0.70;
}
if ((kilometers>=20)&&(time=="day"))
{
 return(kilometers*0.09);
}
if ((kilometers>=20)&&(time=="night"))
{
 return(kilometers*0.09);
}
else
return 0;




}
