#include <bits/stdc++.h>
#include<math.h>
using namespace std;


// Complete the solve function below.
long solve(long n) {

    int z=0;
    while(n)
    {
        if(n%2==0)
            z++;
        n=n/2;
    }
  
   long count=pow(2,z);
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
