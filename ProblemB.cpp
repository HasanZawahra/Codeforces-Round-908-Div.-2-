#include <iostream>
#include <algorithm>
using namespace std;
#include <map>

int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        int n,c=0;
cin>>n;
int ar[n], an [n];
bool b = false;
map<int,int> m;
        for (int i = 0; i <n ; ++i) {
            cin>>ar[i];
            an[i]=1;
            if (m.find(ar[i]) != m.end()){
                if (m[ar[i]] == 1){
                    m[ar[i]] ++;
                    c++;
                    if(b)an[i]+=2;
                    else {
                        an[i]++;
                        b= true;
                    }
                }
            }
            else m[ar[i]] = 1;
        }
        if(c<2)cout<<"-1\n";
        else{
            for (int i = 0; i < n; ++i) {
                cout<<an[i]<<" ";
            }
            cout<<"\n";
        }


    }

    return 0;
}
