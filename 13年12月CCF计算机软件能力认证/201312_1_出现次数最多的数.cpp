#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    int n,x;
    int s[10001]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s[x]++;
    }

    int res=s[1];
    for(int i=1;i<=10000;i++){
        if(s[i]>s[res])
            res=i;
    }

    cout<<res;

    return 0;
    
}