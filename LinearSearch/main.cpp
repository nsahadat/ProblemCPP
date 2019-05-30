#include <iostream>

using namespace std;

class LinearSearch
{
    public:
        int LS(int *arr, int len, int data);

};

int main()
{
    LinearSearch *ls = new LinearSearch;
    int arr[] = {1, 2, 3, 4, 5, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int data = 3;

    cout << ls->LS(arr, len, data) << endl;

    //cout << "Hello world!" << endl;
    return 0;
}

int LinearSearch::LS(int *arr, int n, int data)
{
    for (int i = 0; i<n; i++)
    {
        if (arr[i] == data)
            return i;
    }

    return -1;

}
