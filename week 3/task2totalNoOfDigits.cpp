#include <iostream>
using namespace std;
int main(){
int num;
int count=0;
cout<<"enter any num";
cin>>num;
while (num!=0)
{ num= num/10;
    count++;
  
}
cout<<"the total entered digits were:"<<count<<endl;

}   