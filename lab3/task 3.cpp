#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}


