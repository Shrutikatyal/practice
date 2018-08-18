#include <bits/stdc++.h>
#include<math.h>
using namespace std;

long myXOR(long x, long y)
{
   return (x | y) & (~x | ~y);
}
 

// Complete the theGreatXor function below.
long theGreatXor(long x) {
long count=0;
    /*for(int i=1;i<x;i++)
    {
        if(myXOR(x,i) > x)
            count++;
    }*/
    //long n=x;
       long log=0;
       long store=x;
        while(x)
        {
            x=x/2;
            log++;
        }
        count=(pow(2,log)-store-1);
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long x;
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = theGreatXor(x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
