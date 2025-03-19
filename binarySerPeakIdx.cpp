#include <iostream>
#include <vector>

using namespace std;

int peakIdx(vector<int> arr)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            st = mid - 1;
        }
        return mid;
    }
}

int main()
{
    vector<int> arr = {1, 2, 1};
    cout << peakIdx(arr);
    return 0;
}