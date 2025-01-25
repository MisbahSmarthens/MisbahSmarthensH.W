#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

double volume(double l,double w,double h, string u);

int main(){
    double  length, width, height;
    string unit;
    double v;

    cout<<"enter the length ";
    cin>>length;
    
    cout<<"enter the width ";
    cin>>width;

    cout<<"enter the height ";
    cin>>height;
    
    cout<<"enter the unit ";
    cin>>unit;
    
    v = volume(length, width, height, unit ); 


    cout << fixed << setprecision(5);
    cout<< "Volume of the Paramide " << v <<unit;

}
double volume(double l, double w, double h,string unit){
    double value = (l*w*h)/3;

   if (unit == "cm") {
        return value * 1000000;
    } else if (unit == "mm") {
        return value * 1000000000;
    } else if (unit == "km") {
        return value / 1000000000;
    } else if (unit == "m") {
        return value;
    }

}
