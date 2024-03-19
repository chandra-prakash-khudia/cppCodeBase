#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 6, 1, 2, 1, 1, 5, 4, 6};
    int ans1 = 0;
    int count1;
    int count2 = 0;
    for (int i = 0; i < 14; i++)
    {
        count1 = 0;
        for (int j = 0; j < 14; j++)
        {
            
            if (arr[i] == arr[j])
            {
                count1++;
            }
        }
        if (count1 > count2)
        {
            count2 = count1;
            ans1 = i;
        }
    }
    cout << "maxm occurenece is of  : " << arr[ans1] << endl;
}