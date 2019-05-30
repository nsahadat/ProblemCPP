#include <iostream>

using namespace std;

class BinarySearch
{
    public:
        int BS(int *arr, int l, int u, int data);

};

int main()
{
    BinarySearch *bs = new BinarySearch;
    int arr[] = {0, 1, 2, 3, 4, 5, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 10;

    cout << bs->BS(arr, 0, len-1, data) << endl;

    //cout << "Hello world!" << endl;
    return 0;
}

int BinarySearch::BS(int *arr, int l, int u, int data)
{
    while (u >= l)
    {
        int m = l + (u - l)/2 ;  // find the mid point
        cout << m << endl;

        if (arr[m] == data)
            {
                return m;
            }
        else if (arr[m]>data)
            {
                u = m-1;
            }
        else
            {
                l = m+1;
            }

    }

    return -1;

}
