 #include<iostream>
 using namespace std;
 int partition(int arr[],int s, int e)
 {
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    //place pivot at right position
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part smbal lete h
    int i=s,j=e;
    while(i<pivotindex && j> pivotindex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex; 
 }

 void quicksort(int arr[],int s,int e)
 {
    //base case)
    if(s>=e)
    {
        return ;
    }
    //partition karenge
    int p=partition(arr,s,e);

    //left wala sort karenge
    quicksort(arr,s,p-1);

    //right wala sort karenge
    quicksort(arr,p+1,e);

 }
 int main()
 {
    int arr[5]={4,2,5,3,8};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
 }