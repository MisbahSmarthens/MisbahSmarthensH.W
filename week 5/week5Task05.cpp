#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek, double quantity);
int main(){
string fruitName,week;
double value;
cout<<"Enter the fruit name :";
cin>>fruitName;
cout<<" Enter the day of Week(e.g Monday,Sunday):";
cin>>week;
cout<<"Enter the Quantity:";
cin>>value;
cout<<calculateFruitPrice(fruitName,week,value);

}
float calculateFruitPrice(string fruit,string dayOfWeek, double quantity)
{
if ((dayOfWeek=="monday")||(dayOfWeek=="tuesday")||(dayOfWeek=="wednessday")||(dayOfWeek=="thursday")||(dayOfWeek=="friday"))
{
    if (fruit=="banana")
    {
        return(quantity*2.50);
    }
    else if (fruit=="apple")
    {
     return(quantity*1.20);
    }
    else if (fruit=="orange")
    {
     return(quantity*0.85);
    }
    else if (fruit=="grapefruit")
    {
     return(quantity*1.45);
    }
    else if (fruit=="kiwi")
    {
     return(quantity*2.70);
    }
    else if (fruit=="pineapple")
    {
     return(quantity*5.50);
    }
    else if (fruit=="grapes")
    {
     return(quantity*3.85);
    }

}
else if ((dayOfWeek=="saturday")||(dayOfWeek=="sunday"))
{if (fruit=="banana")
    {
        return(quantity*2.70);
    }
    else if (fruit=="apple")
    {
     return(quantity*1.25);
    }
    else if (fruit=="orange")
    {
     return(quantity*0.90);
    }
    else if (fruit=="grapefruit")
    {
     return(quantity*1.60);
    }
    else if (fruit=="kiwi")
    {
     return(quantity*3.00);
    }
    else if (fruit=="pineapple")
    {
     return(quantity*5.60);
    }
    else if (fruit=="grapes")
    {
     return(quantity*4.20);
    }

    
}
else 
return 0;





}