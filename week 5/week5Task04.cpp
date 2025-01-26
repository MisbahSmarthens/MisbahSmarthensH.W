#include<iostream>
using namespace std;
float premiumBill(int usedMinutes,char callType);
float regularBill(int useMinutes);
int main(){
char service,callTime;
int minutes;
cout<<"enter the service code (R/r for Regular,P/p for Premium)";
cin>>service;
if ((service=='R')||(service=='r'))
{
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    cout<<"service type: Regular "<<endl;
    cout<<"total no of minutes used: "<<minutes<<endl;
    cout<<"Amount Due:"<<regularBill(minutes)<<"$" <<endl;

}
else if ((service=='P')||(service=='p'))
{
    cout<<"Enter the time of call(D/d for day,N/n for night):";
    cin>>callTime;
     cout<<"Enter the number of minutes used: "<<endl;
    cin>>minutes;
    cout<<"service type: Premium "<<endl;
    cout<<"total no of minutes used: "<<minutes<<endl;
    cout<<"Amount Due: "<< premiumBill(minutes,callTime)<< "$"<<endl;

}
else 
cout<<"error";
}
float regularBill(int useMinutes){
if (useMinutes>50)
{
    return (((useMinutes-50)*0.20)+10.00);
}
else
return (10.00);

}


float premiumBill(int usedMinutes,char callType){
if ((callType=='D')||(callType=='d'))
{
    if (usedMinutes>75)
    {
        return(((usedMinutes-75)*0.10)+25.00);
    }
    else
    return (25.00);    
}
else if((callType=='N')||(callType=='n'))
{
    if (usedMinutes>100)
    {
        return(((usedMinutes-100)*0.05)+25.00);
    }
    else
    return (25.00);    
}






}



