#include<iostream>
using namespace std;

void suma(int A[3][3],int B[3][3],int C[3][3],int n,int fil=0,int col=0){
    if(fil>=n){
        for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < n; e++)
        {
            cout<<C[i][e]<<" ";
        }
        cout<<endl;
    }
    return;
    }
    C[fil][col] = A[fil][col] + B[fil][col];
    col++;
    if(col==n){
        col = 0;
        fil++;
    }
    suma(A,B,C,n,fil,col);
}

/*void mostrar(int matrix[3][3],int n){
    for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < n; e++)
        {
            cout<<matrix[i][e];
        }
        
    }
    
}*/

int main(){
    int matrix1 [3][3] = {{5,4,3},{2,5,7},{9,8,1}};
    int matrix2 [3][3] = {{2,3,8},{6,7,1},{1,5,3}};
    int matrix3 [3][3];

    suma(matrix1,matrix2,matrix3,3);
    return 0;
}