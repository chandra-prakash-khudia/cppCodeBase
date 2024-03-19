// #include<iostream>
// #include<vector>
// using namespace std;
// void solve(vector<int>arr,vector<vector<int>>&ans,int index)
// {
//     //base case
//     if(index>=arr.size() )
//     {
//         ans.push_back(arr);
//         return;
//     }
//     for(int j=index;j<arr.size();j++)
//     {
//         swap(arr[index],arr[j]);
//         solve(arr,ans,index+1);

//         //backtrack
//         swap(arr[index],arr[j]);

//     }
// }
// void permutation(vector<int>arr,vector<vector<int>>&ans)
// {
//     int index =0;
//     solve(arr,ans,index);
// }
// int main()
// {
//     vector<int>arr={1,2,3};
    
//     vector<vector<int>>ans;
//     permutation(arr,ans);
// for(const auto& i:ans){
//         cout<<"["<<i<<"]\t";
//     }
// }
