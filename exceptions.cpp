#include <string>
#include <iostream>


using namespace std;


int main(){
    string S;
    cin >> S;
    try{
    stoi(S,0,10);
    }
    catch(invalid_argument e)
    {
        cout<<"Bad String";
        return 1;
    }
    cout<<S;
    return 0;
}
