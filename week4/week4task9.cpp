#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
int main(){
int ageOfPerson;
char genderOfPerson;
cout<<"enter your age:";
cin>> ageOfPerson;
cout<<"enter your gender:";
cin>>genderOfPerson;
cout<<"Your Personal title is:"<<checkTitle(ageOfPerson,genderOfPerson);

}
string checkTitle(int age, char gender){
    if ((age<16) && (gender=='m')){
        return "Master";
    }
    if ((age>=16) && (gender=='m'))
    {
        return "mr.";
    }if ((age<16)&&(gender=='f'))
    {
        return"Miss";
    }if ((age>=16)&&(gender=='f'))
    {
        return"Ms.";
    }

}