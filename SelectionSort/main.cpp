#include <iostream>

using namespace std;

class SelectionSort
{
    public:
        void SS(int *arr, int len);
        void swapf(int *v1, int *v2);
        void printarr(int *arr, int len);

};



int main()
{

    int arr[] = {10, 5, 2, 3, 4, 2, 1, 11, 12, 13};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 2;

    SelectionSort ss;
    cout << "Before sorting the array: \n";
    ss.printarr(arr, len);
    ss.SS(arr, len);
    cout << "After sorting the array: \n";
    ss.printarr(arr, len);

    return 0;
}


void SelectionSort::SS(int *arr, int len)
{
    //int temp = 0;
    for (int i=0; i<len; i++)
    {
        for (int j = i + 1; j<len-1; j++)
        {
            if(arr[i] > arr[j])
            {
                swapf(&arr[i], &arr[j]);
            }
        }
    }
}

void SelectionSort::swapf(int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

void SelectionSort::printarr(int *arr, int len)
{
    for (int i =0; i<len; i++)
    {
        cout << arr[i]<< endl;
    }
}

