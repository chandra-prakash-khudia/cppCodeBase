#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int M,N;
        cin>>M>>N;
	    if(M<N)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(M==N)
	    {
            cout<<"YES"<<endl;
        }    
	    else if(M%2==0)
	    {
	    M=M/2;
	    if(M==N)
	         {
	            cout<<"YES"<<endl;
	         }
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	
	return 0;
}
