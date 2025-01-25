#include <iostream>
using namespace std;
float taxCalculator(string type,float price);
int main(){
    string vehicletype;
    float vehicleprice;
    float i;

    cout<<"enter the type of vehicle ";
    cin>>vehicletype;

    cout<<"enter the price of the vehicle type $";
    cin>>vehicleprice;

    i= taxCalculator(vehicletype,vehicleprice);

    cout<<"the final price of vehicle of type"<<vehicletype<<"after adding the tax is"<<i<<endl;

}
float taxCalculator (string type,float price){
    if (type=="M")
    {
      return(price+(price*0.06));  
    }
    else if (type=="E")
    {return(price+(price*0.08));
                }
    
else if (type=="S")
    {
      return(price+(price*0.1));  
    }else if (type=="V")
    {
     return(price+(price*0.12));   
    }
    else if (type=="T")
    {
        return(price+(price*0.15));
    }
   else{
    return 0;
   }    

}