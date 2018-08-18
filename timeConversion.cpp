#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string t=s.substr(8,2);
    if(t.compare("PM")==0)
    { 
       string h= s.substr(0,2);
       int hrs=stoi(h);
       if(hrs!=12)
        hrs+=12; 
       t=to_string(hrs)+s.substr(2,6); 
    }
    else 
    {
        if(s.substr(0,2).compare("12")==0)
            t="00"+s.substr(2,6);
        else
            t=s.substr(0,8);
    }
    
return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
