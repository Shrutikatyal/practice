#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int swaps=0;
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swaps++;
                flag=true;
            }
        if(!flag)
            break;
    }
    cout<<"Array is sorted in "<<swaps<<" swaps.";
    cout<<"\nFirst Element: "<<a[0];
    cout<<"\nLast Element: "<<a[n-1];
    return 0;
}
