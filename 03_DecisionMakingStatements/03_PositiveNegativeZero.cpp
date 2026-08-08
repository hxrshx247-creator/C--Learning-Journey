//Check if a number is positive, negative, or zero.

#include<iostream> 
using namespace std; 
int main() { 
int a; 
cout<<"Enter a: "; 
cin>>a; 
if (a>0) { 
cout<<" "<<a<<"is positive.";
 } 
else if (a==0) { 
cout<<"The number is zero."; 
} 
else { 
cout<<" "<< a << " is negative."; 
} 
return 0; 
}
