#include<iostream>
#include<climits> // to use INT_MIN and INT_MAX
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

int maxNO = INT_MIN;
int minNO = INT_MAX;

// for(int i=0;i<n;i++){
//     if(array[i]>max){
//         max=array[i];
//     }
//     if(array[i]<min){
//         min=array[i];
//     }
// }
// cout<<max<<""<<min;

// We can also make this program like this below
for(int i=0;i<n;i++){

//**** max is a built in function , here we give two values maxNO and 
// array[i]; if array will be greater then maxNO it update maxNO value
 
maxNO=max(maxNO,array[i]); 
minNO=min(minNO,array[i]);


}


}