#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int orignalNum=num;
    int sum=0;
    while(num>0){
        int lastdig=num%10;
        sum+= pow(lastdig,3); // Power Function , 3 is for power value
        num=num/10;
    }
    if(sum==orignalNum){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}