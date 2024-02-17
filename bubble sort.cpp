#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for (int k=0;k<n;k++){
        cin>>arr[k];
    }
        
    for (int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            if (arr[(j-1)]> arr[j]){
                int t=arr[j];
                arr[j]=arr[(j-1)];
                arr[(j-1)]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}