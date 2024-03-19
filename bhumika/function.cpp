#include<iostream>
#include<string>
using namespace std;
 int countvowel(string s){
  int count=0;
  for(int i=0;i<s.length();i++){
  if(s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
    count++;
  }
  
 }
 return count;
 }
 int main(){
  int arr[6]={1,2,3,4,5,6};
  int s=0;
  int e= 5;
  
  while(s<e){
    int temp =arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
  
  }
  for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
  }
   
 }