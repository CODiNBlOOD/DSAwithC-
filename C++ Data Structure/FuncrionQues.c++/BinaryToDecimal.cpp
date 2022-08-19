#include <iostream>
using namespace std;

int Binarytodecimal(int n){
    int ans =0;
    int x=1;
    while(n>0){
        int z=n%10;
        ans +=x*z;
        x*=2;
        n/=10;

    } 
    return ans;
}

int OctaltoDeciaml(int n){
        int ans =0;
    int x=1;
    while(n>0){
        int z=n%10;
        ans +=x*z;
        x*=8;
        n/=10;

    } 
    return ans;
}

int HexatoDeciaml(string n){
        int ans =0;
    int x=1;
  int s=n.size();
  for(int i=s-1;i>=0;i--){
    if(n[i]>= '0' && n[i]<='9'){
        ans = x*(n[i]-'0');
    }
    else if( n[i]>='A' && n[i]<='F'){
        ans = x*(n[i]- 'A' + 10);
    }
   x*=16;
  }

    
    return ans;
}





void decimaltobinary(int n){
//     If the decimal number is 10. 
// Step 1: Remainder when 10 is divided by 2 is zero. Therefore, arr[0] = 0. 
// Step 2: Divide 10 by 2. New number is 10/2 = 5. 
// Step 3: Remainder when 5 is divided by 2 is 1. Therefore, arr[1] = 1. 
// Step 4: Divide 5 by 2. New number is 5/2 = 2. 
// Step 5: Remainder when 2 is divided by 2 is zero. Therefore, arr[2] = 0. 
// Step 6: Divide 2 by 2. New number is 2/2 = 1. 
// Step 7: Remainder when 1 is divided by 2 is 1. Therefore, arr[3] = 1. 
// Step 8: Divide 1 by 2. New number is 1/2 = 0. 
// Step 9: Since number becomes = 0. Print the array in reverse order. Therefore the equivalent binary number is 1010.
     
     int ans[32]; //32 is the size of array
     int i=0;
     while(n>0){
       ans[i]=n%2;
        n/=2;
        i++;

     }
     for(int j=i-1;j>=0;j--)//i-1 because we increamenting at last in above code

cout<<ans[j];

      
    
}

// int decimaltoOctal(int n){

     
//      int ans=0; //32 is the size of array
//      int x=1;
//      while(x<=n)
//        x*=8;
//        x/=8;

     
//    while(x>0){
//     int lastdigit=n/x;
//     n-=lastdigit*x;
//     x/=8;
//     ans=ans*10 + lastdigit;

//    }
//    return ans;
    
// }


void decimaltoOctal(int n){
     
     int ans[32]; //32 is the size of array
     int i=0;
     while(n>0){
       ans[i]=n%8;
        n/=8;
        i++;

     }
     for(int j=i-1;j>=0;j--)//i-1 because we increamenting at last in above code

cout<<ans[j];

      
    
}



void decTohexa(int n){
 
char DecimaltoHexa[100];  // char array to store hexadecimal number
 int x=0; // counter for hexadecimal number array

 while(n>0){
    int temp=0;
    temp = n%16; // storing Remainder

    if(temp<10){
        DecimaltoHexa[x]=temp+48; 

//Explain : ******* 
// output is 49 and  decimal of 49  in char is 1 char 
// why 48 ? those are for ascii values i.e numbers 0 to 9 have ascii values from 48 to 57 and characters A to F have ascii values from 55 to 70.

        x++;
    }
    else{ 
    DecimaltoHexa[x]=temp+55; 
 x++;
    }
    n/=16;

 }

 for(int j=x-1; j>=0;j--){
   cout<<DecimaltoHexa[j];
 }
    
}

int main(){
int n;
    cin>>n;
   decTohexa(n);
}