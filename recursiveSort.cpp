#include<iostream>
using namespace std;

void ejercicioTres(int A[],int n,int menor,int contador=1){
    if(contador== n){
        cout<<menor;
    }else{
        if(A[contador-1]<menor){
            menor = A[contador-1];
        }
        ejercicioTres(A,n,menor,contador+1);
    }
}

int main(){
    int A[] {5,2,3,9};
    int n = sizeof(A)/sizeof(*A);
    ejercicioTres(A,n,A[0]);
    return 0;
}