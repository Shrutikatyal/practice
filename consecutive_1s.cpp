#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int prev=0,count1=0,count=0;
    while(n)
    {
        if(prev==0 && n%2==1)
        {
            count1=1;
            prev=1;
        }
        else if(prev==1 && n%2==0)
        {
            count=max(count1,count);
            prev=0;
        }
        else if(prev==1 && n%2==1)
            count1++;
        count=max(count1,count);
        n=n/2;
    }

    cout<<count;
    return 0;
}
