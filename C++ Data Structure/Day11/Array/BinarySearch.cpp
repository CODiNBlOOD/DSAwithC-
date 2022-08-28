// Binary Search in array  Very important
#include<iostream>
using namespace std;



int BinarySearch(int array[],int n , int key)
{
   int startpoint=0;
   int endpoint=n;

   while(startpoint<=endpoint){
    int middle = (startpoint+endpoint)/2; // For Calculate between term in array 
    if(array[middle]==key){
          return middle;
    
    }
    else if(array[middle]>key){ 

        endpoint=middle-1;
//here if condition then the endpoint value will changed or decrease means as it will get to know that value must be before middle 
    }
    else{
      startpoint=middle+1;
//here if condition then the endpoint value will changed or increase means as it will get to know that value must be after middle 
    }
   }
   return -1;
   
}


// Now the time complexity is O(log n base 2 = log2^n)


int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
   cin>>key;
   cout<<BinarySearch(array,n,key);
}