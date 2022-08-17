#include <iostream>
using namespace std;
class binarysearch
{
    int *arr, size;

public:
    binarysearch(int *a, int sizz)
    {
        arr = a;
        size = sizz;
    }
    int searchelement(int k)
    {
        int f, r, m;
        f = 0;
        r = size - 1;
        m = (f + r) / 2;
        while (f <= r)
        {
            if (k == arr[m])
            {
                return m;
            }
            else if (k > arr[m])
            {
                f = m + 1;
                m = (f + r) / 2;
            }
            else
            {
                r = m - 1;
                m = (f + r) / 2;
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    cout << "\nEnter size:";
    cin >> n;
    int arr[n];
    cout << "\nEnter sorted array....";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key, index;
    cout << "\nEnter the element that to be searched:";
    cin >> key;
    binarysearch bs(arr, n);
    index = bs.searchelement(key);
    if (index == -1)
        cout << "\nElement not found";
    else
        cout << "\nElement found at index " << index;
}