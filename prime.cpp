#include<iostream>
using namespace std;

bool prime(int no)
{
    if(no<0)
        return 0;
    for(int i=2;i*i<=(no);i++)
        if(no%i==0)
            return 0;
    return 1;    
}

int main()
{
    int n;
    cout<<"\nEnter a number:";
    cin>>n;
    if(n==0)
    	cout<<"0 is neither prime nor composite";
    else{
		if(prime(n))
			cout<<n<<" is a prime number";
		else
			cout<<n<<" is a composite number";
	}
}
