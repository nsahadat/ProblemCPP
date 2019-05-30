#include <iostream>

using namespace std;

class QuickSort
{
    public:
        void QS(int *arr, int l, int u);
        int part(int *arr, int l, int u);
        void swapf(int *val1, int *val2);
        void printarr(int *arr, int len);

};



int main()
{

    int arr[] = {10, 5, 2, 3, 4, 2, 1, 11, 12, 13};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 2;

    QuickSort qs;
    cout << "Before sorting the array: \n";
    qs.printarr(arr, len);
    qs.QS(arr, 0, len-1);
    cout << "After sorting the array: \n";
    qs.printarr(arr, len);

    return 0;
}


void QuickSort::QS(int *arr, int l, int u)
{
    if(l<u)
    {
        int prt = part(arr, l, u);

        QS(arr, l, prt-1);
        QS(arr, prt + 1, u);
    }

}

int QuickSort::part(int *arr, int l, int u)
{
    int highest = arr[u];

    int j = l-1;

    for (int i = l; i<u; i++)
    {
        if(arr[i] <= highest)
        {
            j++;
            swapf(&arr[i], &arr[j]);
        }
    }

    swapf(&arr[j+1], &arr[u]);
    return j+1;

}

void QuickSort::swapf(int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}


void QuickSort::printarr(int *arr, int len)
{
    for (int i =0; i<len; i++)
    {
        cout << arr[i]<< endl;
    }
}

