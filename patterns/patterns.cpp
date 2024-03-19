#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n)
    // {
    //     int j=n;
    //     while(j>0)
    //     {
    //         cout<<j;
    //         j=j-1;
    //     }
    //     cout<<endl;;
    //     i++;
    // }

//     int i=1;
//    int j=1;
//     while(i<=n)
//     {
//         int k=1;
//         while(k<=n)
//         {
//             cout<<j<<" ";
//             j++;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }


// int i=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//}




// int i=1;
// int count=1;
// while(i<=n)
// {
//     int j=1;
//     while(j<=i)
//     {
//         cout<<count<<" ";
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int i=1;
// while(i<=n)
// {
//     int j=1;
//     int k=i;
//    while(j<=i)
// {
//   cout<<k<<"  ";
//   k++;
//   j++;
// }
// cout<<endl;
// i++;
// }

// int i=1;
// int j;
// while(i<=n)
// {
//     j=1;
//     int k=0;
//     while(j<=i)
//     {
//         cout<<i-k<<" ";
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

// int i=1;
// int k=1;
// while(i<=n){
//     int j=1;
//     while(j<=n)
//     {
//         char cp='A'+k-1;
//         cout<<cp<<" ";
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int i=1;
// char k;
// while(i<=n){
//     int j=1;
//      k='A'+i-1;
//     while(j<=n)
//     {
//         cout<<k<<" ";
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


// int i=1;
// char k;
// while(i<=n){
//     int j=1;
//      k='A'+i-1;
//     while(j<=i)
//     {
//         cout<<k<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }



// int i=1;
// while(i<=n){
//     int j=1;
//    char k='A'+i-1;
//     while(j<=i)
//     {
//         cout<<k<<" ";
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }  



//  int i=1;
// while(i<=n){
//     int j=1;
//    char k='A'+n-i;
//     while(j<=i)
//     {
//         cout<<k<<" ";
//         k++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }  



// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n-i){
//         cout<<" ";
//         j++;
//     }
//     j=1;
//     while(j<=i)
//     {
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }


int space;
int i=1;
while(i<=n)
{
    space=n-i;
    int j=1;
    while(j<=space)
    {
        cout<<" ";
        j++;
    }
    j=1;
    while(j<=i){
        cout<<j;
        j++;
    }
    int k=i-1;
    while(k>0){
        cout<<k;
        k--;
    }
    cout<<endl;
    i++;
}
    return 0;
}