#include <iostream>
#include <array>
using namespace std;
void solve(){
    int n, st,end;
    cin>>n;
    array<int, 100> m{0};
    for (int j=0;j<n;j++){
        int x;
        cin>>x;
        m[j]=x;
    }
    st=0;
    end=0;
    for (int k=0; k<n;k++){
        if (m[k]==1){
            st++;
        }else{
            break;
        }
    }
    for (int u=n-1;u>0;u--){
        if (m[u]==1){
            end++;
        }else{
            break;
        }

    }
    if (st+end>=n){
        cout<<0<<endl;
    }
    else if (n-st-end+1<=n-1){
        cout<<n-st-end+1<<endl;
    }else{
        cout<<n-1<<endl;

    }
}
int main() {
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        solve();
    }
}
