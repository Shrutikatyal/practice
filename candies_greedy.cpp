#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
//1 2 1 2 1 2 1 2
    long dp[n],tot=0;
    dp[0]=1;
    /*for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            candies[i]=candies[i-1]+1;
        else if(arr[i]<arr[i-1] && candies[i-1]==1)
            {
                int j=i;
                while(arr[j]<arr[j-1] && j>=1)
                candies[j--]++;
                candies[i]=1;
            }
        else candies[i]=1;
    }*/
    
     for(int i = 1 ; i < n  ;i++){ //forward track
        if(arr[i] > arr[i-1]){
            dp[i] = 1 + dp[i-1]; 
        }
         else
             dp[i]=1;
    }

    for(int i = n-2 ; i >= 0 ; i--){ // back track
        if(arr[i] > arr[i+1] && dp[i] <= dp[i+1]){
            dp[i] = dp[i+1] + 1;
        }
    }

    
    
    for(int i=0;i<n;i++)
        tot+=dp[i];
    
    return tot;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
