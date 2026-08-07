//Calculate the electricity bill (basic formula).
#include<iostream>
using namespace std;
int main(){
    double energy;
    double rate;
    double cost;
    
    cout<<"Energy: ";
    cin>>energy;
    
    cout<<"Rate: ";
    cin>>rate;
    
    cost = energy * rate;
    
    cout<<"Total Cost: "<<cost;
    return 0;
}

