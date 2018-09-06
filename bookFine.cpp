#include <iostream>
using namespace std;

int fine(int ret[],int expRet[])
{
    if(ret[2]<expRet[2])
        return 0;
    if(ret[2]==expRet[2])
    {
        if(ret[1]<=expRet[1])
        {
            if(ret[0]<=expRet[0])
                return 0;
            else
                return (ret[0]-expRet[0])*15;
        }
        else
            return (ret[1]-expRet[1])*500;
        
    }
    else
        return 10000;
}

int main() {
    int ret[3],expRet[3];
    for(int i=0;i<3;i++)
        cin>>ret[i];
     for(int i=0;i<3;i++)
        cin>>expRet[i];
    cout<<fine(ret,expRet);
    return 0;
}
