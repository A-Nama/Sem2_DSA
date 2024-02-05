#include<iostream>
using namespace std;

void mergesort(int A[], int B[], int C[],int A_LB, int A_UB, int B_LB, int B_UB){
    int k = 0;
    int j = B_LB;
    int i = A_LB;
    for(; i<= A_UB && j<=B_UB; ++k){
        if(A[i]<B[j]){
            C[k] = A[i++];
        }
        else if (B[j]<A[i]){
            C[k] = B[j++];
        }
        else{
            C[k] = B[j++];
            C[++k] = A[i++];
        }
    }
    while (i<=A_UB){
        C[k++] = A[i++];
    }

    while (j<=B_UB){
        C[k++] = B[j++];
    }
}

int main(){
    int A[4] = {1,2,3,4};
    int B[4] = {3,5,6,7};
    int C[8];
    mergesort(A,B,C,0,3,0,3);
    for( int i = 0; i<8; i++){
        cout<<C[i]<<" ";
    }
    return 0;
}