#include<iostream>
using namespace std;
int discountamount(string day,string month,int amount);
int main(){
int price;
string d,m;
cout<<"Enter The Purchase Day:";
cin>>d;
cout<<"Enter The Purchase month:";
cin>>m;
cout<<"Enter The Purchase Amount:";
cin>>price;
cout<<"Payable amount after discount :"<<discountamount( d,m,price);

}
int discountamount(string day,string month,int amount){
if ((day=="sunday")&&(month=="october"))
{
    return(amount-(amount*0.1));
}
if((day=="sunday")&&(month=="august"))
{
    return(amount-(amount*0.1));
}
if((day=="sunday")&&(month=="march"))
{
    return(amount-(amount*0.1));
}
if((day=="monday")&&(month=="november"))
{
    return(amount-(amount*0.05));
}
if((day=="monday")&&(month=="december"))
{
    return(amount-(amount*0.05));
}
else
return(amount);



}