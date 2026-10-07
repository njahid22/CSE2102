#include <iostream>
using namespace std;
void insertElement(int arr[], int &n, int index, int element)
{
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    n++;
}
int main()
{
    int arr[100] = {10, 20, 30, 40};
    int n = 4;

    int element, index;

    cout << "Enter element: ";
    cin >> element;

    cout << "Enter index: ";
    cin >> index;
    insertElement(arr, n, index, element);

    cout << "After insertion: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}