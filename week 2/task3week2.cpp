#include<iostream>
using namespace std;
int Vote(int a=0);
main(){
    int age=0;
    cout<<"Enter your age";
    cin>>age;
    cout<< Vote(age);
return 0;
}
int Vote(int a){
if (a>=18)
{
cout<<"you are eligible to vote"<<endl;

}else
{ cout<<"you are not eligible to vote"<<endl;

}

}


