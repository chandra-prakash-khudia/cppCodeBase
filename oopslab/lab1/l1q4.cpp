#include<iostream>
using namespace std;
 int main(){
    int secretnumber=9;
    int guess;
    int guess_count=0;
    int guess_limit=3;
    bool outofguess=false;
    while(secretnumber!=guess && !outofguess){
        if(guess_count<guess_limit){
            cout<<"Enter the Guess:";
            cin>>guess;
            guess_count++;
        }
        else{
            outofguess=true;
        }
       
    }
     if(outofguess){
            cout<<"You lose"<<endl;
        }
        else{
            cout<<"YOU win";
        }
 }