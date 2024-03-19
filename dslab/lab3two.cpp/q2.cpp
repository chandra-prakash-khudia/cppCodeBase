#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int k;
    cout << "Enter the number of elements: ";
    cin >> k;

    vector<int> nums(k);

    cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; ++i)
    {
        cin >> nums[i];
    }
    cout << "Enter the  target:" << endl;
    int target;

    cin >> target;
    for (int i = 1; i < k; i++)
    {
        int j = i - 1;
        int pos = binarySearch(nums, 0, j, target);
        int element = nums[i];
        while (j >= pos)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = element;
    }

    for (int i = 0; i < k; ++i)
    {
        cout << nums[i] << " ";
    }
}
