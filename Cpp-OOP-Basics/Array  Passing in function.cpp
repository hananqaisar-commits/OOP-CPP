#include <iostream>
using namespace std;

void array(int *arr)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Element is : " << arr[i] << endl;
    }
}
void array2d(int array2d[][5])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Element " << j + 1 << " in row " << i + 1 << array2d[i][j] << endl;
        }
        cout << endl;
    }
}

void input2d(int array2d[3][5])
{
    cout << "Enter array for array[3][5]: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> array2d[i][j];
        }
    }
    return;
}
int main()
{
    int arr[3] = {1, 2, 3};
    array(arr);

    int arr2d[3][5];
    input2d(arr2d);
    array2d(arr2d);

    return 0;
}