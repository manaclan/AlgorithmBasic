#include "../Include/Include.h"
vector<int> InterchangeSort(vector<int> Array, int N){
    vector<int> A = Array;
    int temp;
    for(int i =0; i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[j]<A[i]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    return A;
}