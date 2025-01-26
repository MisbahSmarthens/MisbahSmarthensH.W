#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
int main(){
int date;string m;
cout<<"Enter the date of Birth :";
cin>> date;
cout<<"Enter the month of Birth :";
cin>>m;
cout<<"Zodiac Sign :"<<findZodiacSign(date,m);
}
string findZodiacSign(int day, string month)
{
if (((day>=21)&&(month=="march"))||((day<=19)&&(month=="april")))
{
    return "Aries";
}
if (((day>=20)&&(month=="april"))||((day<=20)&&(month=="may")))
{
    return "Taurus";
}
if (((day>=21)&&(month=="may"))||((day<=20)&&(month=="june")))
{
    return "Gemini";
}
if (((day>=21)&&(month=="june"))||((day<=22)&&(month=="july")))
{
    return "Cancer";
}
if (((day>=23)&&(month=="july"))||((day<=22)&&(month=="august")))
{
    return "Leo";
}
if (((day>=23)&&(month=="august"))||((day<=22)&&(month=="september")))
{
    return "Virgo";
}
if (((day>=23)&&(month=="september"))||((day<=22)&&(month=="october")))
{
    return "Libra";
}
if (((day>=23)&&(month=="october"))||((day<=21)&&(month=="november")))
{
    return "Scorpio";
}
if (((day>=22)&&(month=="november"))||((day<=21)&&(month=="december")))
{
    return "Sagittarius";
}
if (((day>=22)&&(month=="december"))||((day<=19)&&(month=="january")))
{
    return "Capricorn";
}
if (((day>=20)&&(month=="january"))||((day<=18)&&(month=="february")))
{
    return "Aquaris";
}
if (((day>=19)&&(month=="febraury"))||((day<=20)&&(month=="march")))
{
    return "Virgo";
}









}