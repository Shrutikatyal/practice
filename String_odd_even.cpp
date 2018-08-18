#include <cmath>
#include <cstdio>
#include<string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        for(int j=0;j<str.size();j+=2)
            cout<<str[j];
        cout<<" ";
        for(int j=1;j<str.size();j+=2)
            cout<<str[j];
        cout<<"\n";
    }
    
    return 0;
}
