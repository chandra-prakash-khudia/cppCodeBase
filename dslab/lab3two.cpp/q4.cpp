#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
   int k ;
   cout<<"enter the value of k"<<endl;
   cin>>k;
    int minIndex;

    for(int i =0 ; i< k ; i++){
        minIndex=i;
        for(int j = i+1; j< n; j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
        }
        swap(nums[minIndex],nums[i]);
    }
     cout<<"kth smallest number is :"<<nums[k-1];
}