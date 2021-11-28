//Стасюк Анна П13121
#include <iostream>
using namespace std;
int main() {
    int M, N, K, i, j, cnt;
    int** A;
    cout << "M = " << endl;
    cin >> M;
    cout << "N = " << endl;
    cin >> N;
    A = new int* [M];
    for (i = 0; i < M; i++)
        A[i] = new int[N];
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            cin >> A[i][j];

    cout << "K = ";
    cin >> K;
    if (K < 1 && K > M)
        cout << "Must be from 1 to 10";
    else
    {
        for (cnt = 0; cnt < N; cnt++)
            cout << A[K - 1][cnt] << "\t";
    }
    delete[]A[i];
    delete[]A;
    return(0);
}