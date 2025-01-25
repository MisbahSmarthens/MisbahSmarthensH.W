#include<iostream>
using namespace std;
int perimeter(int shape,int side);

int main(){
char shape; float value;
cout<<"enter the shape(s for square,c for circle,t for triangle,h hexagon)";
cin>>shape;
cout<<"enter the value";
cin>>value;
cout<<"the perimeter is"<<perimeter(shape,value);

}
int perimeter(int shape,int side){
if (shape=='s')
{
    return(4*side);
}
if (shape=='c')
{
  return(6.28*side);
}
if (shape=='t')
{
    return(3*side);
}
if (shape=='h')
{
return(6*side);
}



}
