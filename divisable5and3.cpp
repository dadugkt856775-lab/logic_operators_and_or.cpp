#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x value : ";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"it is divisible by 3 and 5";
    }
    else{
        cout<<"it is not divisable by 3 and 5";
    }
}