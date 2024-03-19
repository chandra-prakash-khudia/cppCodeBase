#include <bits/stdc++.h>
using namespace std;

int main(){
 int k;
    cout << "Enter the number of elements: ";
    cin >> k;

    vector<int> nums(k);

    cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; ++i)
    {
        cin >> nums[i];
    }


    for(int i =1 ; i< k ; i++){
        int  j =i-1;
        int element = nums[i];
        for(; j>=0; j--){
            if(nums[j]>element ){
                nums[j+1]= nums[j];
            }
        }
        nums[j+1]= element;
    }
     for (int i = 0; i < k; ++i)
    {
        cout<< nums[i]<<" ";
    }

}