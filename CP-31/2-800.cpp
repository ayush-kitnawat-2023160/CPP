#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int no_tests;
    cin>>no_tests;
    for(int i=0;i<no_tests;i++) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n+2,0);
        for(int j=1;j<n+1;j++) {
            cin >> arr[j];
        }
        arr[n+1]=k;

        int last = 0;
        int maxi=INT_MIN;
        for(int i=1;i<n+2;i++) {
            if(i!= n+1){
                maxi=max(maxi, arr[i]-last);
                last=arr[i];
            }else{
                maxi=max(maxi, (arr[i]-last)*2);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}