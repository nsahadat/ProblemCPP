#include <iostream>

using namespace std;

class BubbleSort
{
    public:
        void BS(int *arr, int len);
        void swapf(int *val1, int *val2);
        void printarr(int *arr, int len);

};



int main()
{

    int arr[] = {10, 5, 2, 3, 4, 2, 1, 11, 12, 13};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 2;

    BubbleSort bs;
    cout << "Before sorting the array: \n";
    bs.printarr(arr, len);
    bs.BS(arr, len);
    cout << "After sorting the array: \n";
    bs.printarr(arr, len);

    return 0;
}


void BubbleSort::BS(int *arr, int len)
{
    bool swp;
    for (int i=0; i<len-1; i++)
    {
        swp = false;
        for (int j = 0; j<len - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swapf(&arr[j], &arr[j+1]);
                swp = true;
            }
        }
        if(!swp) break;
    }
}

void BubbleSort::swapf(int *v1, int *v2)
{
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}


void BubbleSort::printarr(int *arr, int len)
{
    for (int i =0; i<len; i++)
    {
        cout << arr[i]<< endl;
    }
}

