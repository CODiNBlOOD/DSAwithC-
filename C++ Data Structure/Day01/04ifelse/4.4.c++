// 4. Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main(){

int scal,isos,equil;

cout<<"enter the size of traingle size a,b,c";
cin>>scal>>isos>>equil;
if(scal==isos && scal==equil){
    cout<<"After analyzed you make a Equilateral Triangle";
}
else if(scal==isos || scal==equil || isos==equil){
    cout<<"After analyzed you make a Isosceles Triangle";
}
else{
     cout<<"After analyzed you make a Scalene Triangle";
}
    return 0;
}