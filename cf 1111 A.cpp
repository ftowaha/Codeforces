#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, t = 1, total = 0;
    char arr[1000], brr[1000];
    cin >> arr;
    cin >> brr;
    int ln1 = strlen(arr);
    int ln2 = strlen(brr);
    if(ln1 != ln2){
        return cout << "NO" << endl,0;
    }


    int ck = 0;
    for(int i = 0; i < ln1; i++){

        if(arr[i] == 'a' || arr[i] == 'e' || arr[i]=='i' || arr[i] =='o' || arr[i] == 'u'){
            if(brr[i] != 'a' && brr[i] != 'e' && brr[i]!='i' && brr[i] !='o' && brr[i] != 'u')
                return cout << "NO" << endl,0;
        }
        else if(arr[i] != 'a' && arr[i] != 'e' && arr[i]!='i' && arr[i] !='o' && arr[i] != 'u'){
            if(brr[i] == 'a' || brr[i] == 'e' || brr[i]=='i' || brr[i] =='o' || brr[i] == 'u')
                return cout << "NO" << endl,0;
        }
    }

     cout << "YES" << endl;

}
