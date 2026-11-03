#include <iostream>
using namespace std;
const int n = 100;
int arr[n];
int top = -1;
void push(int val)
{
    if(top == n - 1)
    {
    cout << "stack overflow" << endl;
    return;
    }
    top++;
    arr[top] = val;
}
void pop()
{
    if(top == -1)
    {
    cout << "Stack underflow" << endl;
    return;
    }
    top--;
}
void print()
{
    for(int i = top; i >= 0; i--)
    {
     cout <<"\n"<< arr[i];
    }
    cout << endl;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    print();
    pop();
    cout << "After pop: ";
    print();
    return 0;
}