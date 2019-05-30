#include <iostream>

using namespace std;

class MergeSort
{
    public:
        void MS(int *arr, int l, int u);
        void merg(int *arr, int l, int m, int u);
        void printarr(int *arr, int len);

};



int main()
{

    int arr[] = {10, 5, 2, 3, 4, 2, 1, 11, 12, 13};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 2;

    MergeSort ms;
    cout << "Before sorting the array: \n";
    ms.printarr(arr, len);
    ms.MS(arr, 0, len-1);
    cout << "After sorting the array: \n";
    ms.printarr(arr, len);

    return 0;
}


void MergeSort::MS(int *arr, int l, int u)
{
    if(l<u)
    {
        int m = l + (u - l)/2;
        MS(arr, l,m);
        MS(arr,m+1,u);
        merg(arr,l,m,u);
    }
}

void MergeSort::printarr(int *arr, int len)
{
    for (int i =0; i<len; i++)
    {
        cout << arr[i]<< endl;
    }
}

void MergeSort::merg(int *arr, int l, int m, int u)
{
    int i,j, k;
    int n1 = 1 + (m - l);
    int n2 = (u-m);

    int L[n1];
    int U[n2];

    for (i = 0; i<n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j<n2; j++)
        U[j] = arr[m + j + 1];

    k = l;
    i = 0;
    j = 0;

    while(i<n1 && j<n2)
    {
        if(L[i] < U[j])
        {
            arr[k++] = L[i++];
            //i++;
        }
        else
        {
            arr[k++] = U[j++];
            //j++;
        }
        //k++
    }

    while(i<n1)
    {
        arr[k++] = L[i++];
    }

    while(j<n2)
    {
        arr[k++] = U[j++];
    }
}
