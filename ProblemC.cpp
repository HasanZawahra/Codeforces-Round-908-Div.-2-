#include <iostream>
#include <algorithm>
using namespace std;
//#include <vector>
//#include <map>

int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        int n,k;
cin>>n>>k;
int ar[n];
        for (int i = 0; i <n ; ++i) {
            cin>>ar[i];
        }
        int i = n-1;
        bool b = true;
        k = min(k,n);
        while (k--){
            if (ar[i] > n){
                cout<<"NO\n";
                b= false;
                break;
            }

            else{
                if (i-ar[i] < 0){
                    i = (n-1)-(ar[i]-i-1);
                }
                else i-=ar[i];
            }
        }
        if (b)cout<<"YES\n";

    }
    return 0;
}
