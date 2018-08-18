#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

    int arr[1000];
    arr[0]=1;
    int length=1,carry=0;
    
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<length;j++)
        {
            int mul=arr[j]*i+carry;
            arr[j]=mul%10;
            carry=mul/10;
        }
        
        while(carry)
        {
            length++;
            arr[length-1]=carry%10;
            carry=carry/10;
        }
    }
    for(int i=length-1;i>=0;i--)
        cout<<arr[i];
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
