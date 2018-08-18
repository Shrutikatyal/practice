#include <bits/stdc++.h>

using namespace std;

string word(int h){
   
    string s[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
               "twelve","thirteen","fourteen","","sixteen","seventeen","eighteen","nineteen"};
    if(h<20)
        return s[h];
    switch(h/10)
    {
        case 2: return "twenty "+ s[h%10];
        case 3: return "thirty "+ s[h%10];  
        case 4: return "forty "+ s[h%10];
        case 5: return "fifty "+ s[h%10];      
    }
    return "";
}

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    if(m==0)
        return word(h)+" o' clock";
    else if(m==15)
        return "quarter past "+word(h);
    else if(m>0 && m<30)
        return word(m)+"minutes past "+word(h);
    else if(m==30)
        return "half past "+word(h);
    else return word(60-m)+" minutes to "+word((h+1)%12);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
