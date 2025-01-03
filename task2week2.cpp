#include<iostream>
using namespace std;
int howManyStickers(int n);
int main()
{int p;
cout<<"enter the side length of rubiks cube:";
cin>>p;
cout<<"number of stickers needed:"<<howManyStickers(p);
    return 0;
}
int howManyStickers(int n){
    return(n*n*6);
}

