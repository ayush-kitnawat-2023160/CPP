#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int no_tests;
    cin >> no_tests;
    cin.ignore(); // Ignore newline after reading number of test cases

    for (int i = 0; i < no_tests; i++) {
        int n;
        cin >> n;
        cin.ignore(); // Ignore the newline after reading n

        string s;
        getline(cin, s);

        int cnt=0;
        int total_empty=0;
        int maxi=INT_MIN;
        for(char i: s) {
            if(i == '.') {
                cnt+=1;
                total_empty++;
            }else{
                maxi=max(maxi, cnt);
                cnt=0;
            }
        }

        if(maxi > 2 || cnt>2){
            cout<< 2<<endl;
        }else{
            cout<<total_empty<<endl;
        }
    }
    return 0;
}
