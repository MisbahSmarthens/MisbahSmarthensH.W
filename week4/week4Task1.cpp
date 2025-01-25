#include <iostream>
using namespace std;
int greatestno(int no1,int no2);

int main(){
 int n1,n2;
 cout<<"enter first no";
 cin>>n1;
 cout<<"enter second no";
 cin>>n2;
 cout<<greatestno(n1,n2);

}
int greatestno(int no1,int no2){
if (no1>no2)
{
    return(1);
}
else
return(0);
}