#include<iostream>
using namespace std;
                               //selection sorting
// void sorting(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex])
//             minindex=j;
//         }
//         swap(arr[minindex],arr[i]);
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<endl;
//     // }
// }
// int main(){
//     int arr[6]={8,2,7,5,3,6};
//     sorting(arr,6);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }

// }


                                   //bubble sort
void sorting(int arr[],int n){
    for(int j=1;j<n;j++){
        bool swaped=false;
    for(int i=0;i<n-j;i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i+1],arr[i]);
            swaped=true;
        }
        if(swaped==false){
            break;
        }
    }} 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}  
int main(){
    int arr[6]={9,8,7,6,5,4};
    sorting(arr,6);

}                             


                  //insertion sort


// void insertion(int arr[],int n){
    // for(int i=1;i<n;i++){
    //     int temp=arr[i];
    //     int j=i-1;
    //     for(;j>=0;j--){  
    //         if(arr[j]>temp){   
    //             arr[j+1]=arr[j];   
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
        
    //     }

//     int i=1;
//     while(i<n){
//         int j =i-1;
//         int temp=arr[i];
//         while(j>=0){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//             j--;
//         }
//         arr[j+1]=temp;
//         i++;
//     }
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
       
//     }
   

// int main(){
//     int arr[6]={4,3,6,9,7,2};
//     insertion(arr,6);
// }


