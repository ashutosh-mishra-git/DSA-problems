#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>k) count++;
        }
    cout<<count<<"\n";
    }
    
    
}