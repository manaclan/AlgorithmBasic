#include "../Include/Include.h"
vector<int> InsertionSort(vector<int> Array, int N){
    vector<int> A = Array;
    for(int i =1; i<N;i++){
        int temp = A[i];
        int j = i-1;
        while(A[j]>temp&&j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    return A;
}