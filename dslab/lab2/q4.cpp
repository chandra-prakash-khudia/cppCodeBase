#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int max= INT_MIN;
    int second_max=INT_MIN;
    int small= INT_MAX;
    int second_small= INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<small){
            second_small=small;
            small=a[i];
        }
        else if(a[i]<second_small && a[i]>small){   
             second_small=a[i];
        }
         if(a[i]>max){
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max && a[i]<max){   
             second_max=a[i];
        }

    }
   cout<<"second max: "<<second_max <<" "<<"second small :"<<second_small<<endl;
}