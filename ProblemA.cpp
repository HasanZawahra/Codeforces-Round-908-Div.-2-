#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>;
#include <map>

int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        if (s[n-1] == 'A')cout<<"A\n";
        else if (s[n-1] == 'B')cout<<"B\n";
        else cout<<"?\n";}

    return 0;
}
