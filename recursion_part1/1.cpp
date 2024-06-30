#include<iostream>
using namespace std;

void seq(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    seq(i+1,n);
    if(i==n){
        return;
    }
    cout<<i<<" ";
   
}
int main(){
    seq(1,7);
    return 0;
}