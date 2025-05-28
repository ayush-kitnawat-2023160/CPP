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
        vector<int> arr(n);
        for(int j=0;j<n;j++) {
            cin >> arr[j];
        }
        if(k==1){
            if(is_sorted(arr.begin(), arr.end())) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }else{
            cout<<"YES" << endl;
        }
    }
    return 0;
}