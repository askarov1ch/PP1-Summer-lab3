#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];
    cout << "Enter a 4x4 matrix:\n";

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];

    int maxSum = 0;     // <-- потенциальная ошибка
    int maxRow = 0;

    for (int i = 0; i < 4; i++) {
        int rowSum = 0;
        for (int j = 0; j < 4; j++)
            rowSum += matrix[i][j];

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    cout << "Row " << maxRow + 1 << " has the maximum sum: " << maxSum << endl;
    return 0;
}

