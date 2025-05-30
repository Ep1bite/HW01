#include <iostream>
using namespace std;

int SumArray(int arr[], int size);
int AvgArray(int arr[], int size);

int main()
{
    int arr[50] = {0};

    int num = 0;
    int sum = 0;
    int avg = 0;

    cout << "입력할 숫자의 개수 : " << endl;
    cin >> num;

    for (int i = 0; i < num; ++i) {
        cout << "숫자를 입력하세요 : ";
        cin >> arr[i];
    }

    sum = SumArray(arr, num);
    avg = AvgArray(arr, num);

    cout << "합 : " << sum << endl;
    cout << "평균 : " << avg << endl;
    return 0;
}

int SumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum = sum + arr[i];
    }
    return sum;
}

int AvgArray(int arr[], int size) {
    if (size == 0) return 0; // Avoid division by zero
    return SumArray(arr, size) / size;
}