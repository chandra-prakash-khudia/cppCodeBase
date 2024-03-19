#include<iostream>
using namespace std;
// int evenodd(int arr[],int size,int key){
//      int start=0;
//      int end=size-1;
//      int mid=start+ (end-start)/2;
//      while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         //go to right part
//         if(key>arr[mid])
//         {
//             start=mid+1;
//         }
//         else{
//          end=mid-1;
//         }
//         mid=start+ (end-start)/2;
//      }
//      return -1;
// }
// int main(){
//     int even[6]={3,5,7,8,9,11};
//     int odd[7]={2,4,6,7,8,9,12};
//     int index=evenodd(even,6,9);
//     cout<<"the index 9"<<index;
// }


// int firstlast(int arr[],int size,int k)
// {
//     int start=0;
//     int end=size-1;
//     int ans;
//     int mid =start +(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==k) {
//             ans =mid;
//             end=mid-1;
//         } 
//         else if(k>arr[mid]){
//             start=mid +1;
//         }
//         else{
//             end=mid-1;
//         }
//          mid =start +(end-start)/2;
//     }
//     return ans;
// }

// int last(int arr[],int size,int k)
// {
//     int start=0;
//     int end=size-1;
//     int ans;
//     int mid =start +(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==k) {
//             ans =mid;
//             start=mid+1;
//         } 
//         else if(k>arr[mid]){
//             start=mid +1;
//         }
//         else{
//             end=mid-1;
//         }
//          mid =start +(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     int arr[10]={1,2,3,3,3,3,3,3,3,5};
//     int index=firstlast(arr,10,3);
    
//     cout<<"the first index of 3  "<<index<<endl;
//     cout<<"the last index of 3   "<<last(arr,10,3)<<endl;
// }




// int peak(int arr[],int size)
// {
//     int start=0;
//     int end=size-1;
//     int ans;
    
//     int mid =start +(end-start)/2;
//     while(start<=end){
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid +1]) {
//             return mid;
            
//         } 
//         else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
//             start=mid +1;
//         }
//         else{
//             end=mid-1;
//         }
//          mid =start +(end-start)/2;
        
//     }
//     return -1;
// }
// int main(){
//     int arr[6]={2,4,6,5,3,1};
//     cout<<"the index of greatest number "<<peak(arr,6)<<endl; 
// }


// int pivot(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<e)
//     {
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//          mid=s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[5]={7,9,1,2,3};
//     cout<<"the index of pivot is "<<pivot(arr,5)<<endl;;
// }



int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
            }
            
        
        else{
            e=mid;
        }
         mid=s+(e-s)/2;
    }
    return s;
}
int find(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
int main(){
    int arr[5]={7,9,1,2,3};
    int x=pivot(arr,5);
    cout<<" the index of 2 is "<<find(arr,5,x,2);

}






 