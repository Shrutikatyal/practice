#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {

    int ltr=0,rtl=0;
    for(int i=0;i<arr.size();i++)
        for(int j=0;j<arr[i].size();j++)
        {  if(i==j)
            ltr+=arr[i][j];
            if(i+j==arr.size()-1)
                rtl+=arr[i][j];}
    if(rtl>ltr)
        return rtl-ltr;
    else
        return ltr-rtl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
