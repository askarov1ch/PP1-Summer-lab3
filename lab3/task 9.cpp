#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[4][4];
	
	for (int i=0; i<4; i++)
	for (int j=0; j<4; j++)
	cin >> arr[i][j];
	
	cout << "Main: "<< "\n";
		for (int i=0; i<4; i++)
		cout << arr[i][i]<< " " << "\n";
		
		cout << "Secondary: "<< "\n";
		for (int i=0; i<4; i++)
		cout << arr[i][3-i]<< " " << "\n";
		
	
	
	
	
	
	
	return 0;
}
