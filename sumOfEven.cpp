#include<iostream>
using namespace std;
int evenSum(int num1,int num2);
int main(){
    int no1,no2, result;
    cout<<"enter first range no:";
    cin>>no1;
    cout<<"enter second range no:";
    cin>>no2;

    result = evenSum(no1, no2);
   

    cout<<"the sum of even digits is:"<<result;
}

int evenSum(int no1, int no2){
    int sum=0;
    while (no1<=no2){
        if (no1%2==0){
            sum=sum+no1;
        }
        else{
            sum=sum;
        }
        no1++;
    }
    return sum;

}