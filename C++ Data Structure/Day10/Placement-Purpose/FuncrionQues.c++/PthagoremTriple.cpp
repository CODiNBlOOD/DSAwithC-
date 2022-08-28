#include<iostream>
using namespace std;


bool check(int x, int y , int z){
    //Now store maxmum x,y,z in a
    int a = max(x, max(y,z));
    // Now chaeck which is maximum and rest of put it in variable b and c
    int b,c;
    if(a==x){
        b=y;
        c=z;
    } 
    else if(a==y){
b=x;
c=z;

    }
    else{
        b=x;
        c=y;

    }




    if(a*a == b*b +c*c){
        return true;
    }
    else{
       return false;
    }
}


int32_t main(){

    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorial Triplet";
    }
    else{
        cout<<"Not a Pythagorial Triplet";
    }
    
}