#include "../Include/Include.h"
vector<int> SelectionSort(vector<int> Array, int N){
    vector<int> A = Array;
    for(int i =0; i<N-1;i++){
        int minPos = i;
        for(int j=i+1; j<N;j++){
            if(A[j]<A[minPos])
            minPos = j;
        }
        if(A[minPos]<A[i]){
            int temp = A[i];
            A[i]=A[minPos];
            A[minPos]=temp;
        }
    }
    return A;
}