#include "Include.h"
int main(){
    char choice=100;
    vector<int> A = {-1,4,3,7,17,-23,15,11,5};
    while(true){
        cout<<"1. Selection sort\n";
        cout<<"1. Selection sort\n";
        cout<<"Press ESC to exit\n";
        cout<<"Please enter your choice\n";
        cin>>choice;
        if(choice==27)break;
        switch(choice){
            case 49: 
            {
                vector<int> B = SelectionSort(A,10);
                for(auto i : B)
                    cout<<i<<" ";
                cout<<endl;
                break;
            }
        }
    }
    
    return 1;
}