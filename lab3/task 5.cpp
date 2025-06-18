#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n;
    
	int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> c;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            cout << "Found at index " << i << endl;
            return 0;  
        }
    }
	
	cout << "Not Found" << endl;
    return 0;
	
		
	}
