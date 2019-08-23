#include<iostream>
using namespace std;

void exp(int x,int n,int res=0,int contador=1){
    if(contador==n){
        cout<<res;
    }else if(contador==1){
        res=x;
    }
    exp(x,n,res*x,contador+1);
}

int main(){
    exp(3,3);
    return 0;
}