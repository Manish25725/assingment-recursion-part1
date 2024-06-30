#include<iostream>
using namespace std;


void  sum(int a,int b,int sum1){
    if(a>b){
        cout<<sum1;
        return;
    }

    if(a%2!=0) sum(a+1,b,sum1+a);
    else sum(a+1,b,sum1);

}


int main(){
    sum(1,9,0);
    return 0;
}