#include<iostream>
using namespace std;


bool check(int n){
    if(n==1) return true;
    if(n==0||n%2!=0) return false;
   return check(n/2);
}

int main(){
    bool flag;
    flag=check(3);
    if(flag) cout<<"true";
    else cout<<"false";
    return 0;
}