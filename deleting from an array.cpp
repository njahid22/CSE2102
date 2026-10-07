#include <iostream>
using namespace std;

void deleteElement(int arr[], int &n, int index)
{
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
}
int main()
{
    int arr[100] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;

    deleteElement(arr, n, 3);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}