#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string A;
    map<string,int> mp;
    for(i=0;i<n;i++)
    {
        cin>>A;
        if(mp.count(A)==0)
        {
            cout<<"OK"<<endl;
            mp[A]=1;
        }
        else
        {
            cout<<A<<mp[A]<<endl;
            mp[A]++;
        }
    }
    return 0;
}
