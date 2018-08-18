#include <bits/stdc++.h>

using namespace std;

int sum(int i,int j,int a[][6])
{
    return a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
}

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int max=-9999999;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            int k=sum(i,j,arr);
            if(max<k)
                max=k;
        }
    cout<<max;
    return 0;
}
