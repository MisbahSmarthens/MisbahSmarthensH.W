#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter no:";
        cin>>n;
    while (n>=0)
    {   sum=sum+n;
        cout<<"enter no:";
        cin>>n;
       
    }
 cout<<"user has entered a neg no\n";
cout<<"sum is:"<<sum;
 return 0;   
}