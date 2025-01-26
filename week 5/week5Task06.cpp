#include<iostream>
using namespace std;
float apartmentPrice(string month,int numberOfStays);
float calculateHotelPrices(string month, int numberOfStays);
int main(){
string m;
int days;
cout<<"enter the Month(May, June,July,August,September,October):";
cin>>m;
cout<<"Enter the number of Stays:";
cin>>days;
cout<<"Apartment: "<<apartmentPrice(m,days)<<endl;
cout<<"Studio: " <<calculateHotelPrices(m,days)<<endl;
}
float calculateHotelPrices(string month, int numberOfStays)
{
    if ((month=="may")||(month=="october"))
{
    if (numberOfStays<=7)
    {
        return (numberOfStays*50);
    }
    else if((numberOfStays>7)||(numberOfStays<=14))
    {
        return ((numberOfStays*50)*0.05);
    }
    else
    {
        return ((numberOfStays*50)*0.3);
    }
}
else if ((month=="june")||(month=="september"))
{ if (numberOfStays<=14)
{
    return (numberOfStays*75.20);
}
else
return ((numberOfStays*75.20)*0.2);

}
else if ((month=="july")||(month=="august"))
{
  return (numberOfStays*76);
}
else 
return 0;

}
float apartmentPrice(string month,int numberOfStays){
 if ((month=="may")||(month=="october"))
 {if (numberOfStays<=14)
 {
    return (numberOfStays*65);
 }
 else
return ((numberOfStays*65)*0.1);
 }
 if ((month=="june")||(month=="september"))
 {if (numberOfStays<=14)
 {
    return (numberOfStays*68.70);
 }
 else
return ((numberOfStays*68.70)*0.1);
 }
 if ((month=="july")||(month=="august"))
 {if (numberOfStays<=14)
 {
    return (numberOfStays*77);
 }
 else
return ((numberOfStays*77)*0.1);
 }

}
