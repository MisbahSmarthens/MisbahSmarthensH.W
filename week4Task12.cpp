#include <iostream>
using namespace std;
float totalincome(string screeningtype,int row,int column);
int main(){
string screen;int totalrows,totalcolumns;
cout<<"enter the screening type(premium/normal/discount)";
cin>>screen;
cout<<"enter the total rows";
cin>>totalrows;
cout<<"enter the total columns";
cin>>totalcolumns;
cout<<totalincome(screen, totalrows,totalcolumns);
    
}
float totalincome(string screeningtype,int row,int column){ 
if (screeningtype=="premmium")
{
    return(row*column*12.00);

}
if (screeningtype=="normal")
{
    return(row*column*7.50);
}




}
