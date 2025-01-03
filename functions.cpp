#include<iostream>
using namespace std;

float fuel(float a,float b);
int main(){
float no1=10,no2 ;
cout<<"enter your distance";
cin>>no2;
cout<<"your fuel is="<<fuel(no1 ,no2);
return 0;
}
float fuel(float a, float b){
    return(10* b);

}

