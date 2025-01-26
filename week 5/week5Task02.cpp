#include <iostream>
using namespace std;
string calculateGrade(float average);
float calculateAverage(float engmarks,float mathsmarks,float chemistrymarks,float ssTmarks,float biologymarks);
int main(){
string name;
float percentage;
int eng,maths,sst,bio,chem;
cout<<"Enter Student's Name: ";
cin>>name;
cout<<"enter marks for English :";
cin>>eng;
cout<<"enter marks for maths :";
cin>>maths;
cout<<"enter marks for Social Science :";
cin>>sst;
cout<<"enter marks for Biology:";
cin>>bio;
cout<<"enter marks for Chemistry :";
cin>>chem;
cout<<"Student Name :"<<name<<endl;
cout<< "Percentage: " <<calculateAverage(eng,maths,chem,sst,bio)<<"%" <<endl;
percentage=calculateAverage(eng,maths,chem,sst,bio);

cout<< "Grade: " <<calculateGrade(percentage)<<endl;


}
float calculateAverage(float engmarks,float mathsmarks,float chemistrymarks,float ssTmarks,float biologymarks){

return ((engmarks+mathsmarks+chemistrymarks+ssTmarks+biologymarks)*0.2);
}
string calculateGrade(float average){
if ((average>=90)&&(average<=100))
{
    return "A+";
}
if ((average>=80)&&(average<=90))
{
    return "A";
}
if ((average>=70)&&(average<=80))
{
    return "B+";
}
if ((average>=60)&&(average<=70))
{
    return "B";
}
if ((average>=50)&&(average<=60))
{
    return "C";
}
if ((average>=40)&&(average<=50))
{
    return "D";
}
if (average<40)
{
    return "F";
}





}
