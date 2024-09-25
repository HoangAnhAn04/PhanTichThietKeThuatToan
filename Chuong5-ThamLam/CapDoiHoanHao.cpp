    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n, m;
        cin >> n >> m;
        // for(int i=1; i<=n; i++) cin >> a[i];
        // sort(a,a+n,greater<int>());
        // for(int j=1; j<=m; j++) cin >> b[j];
        // sort(b,b+m,greater<int>());
        int res=0 , j = 0;
        int a[n]; for(int &x:a) cin >> x; sort(a,a+n,greater<int>());
        int b[m]; for(int &x:b) cin >> x; sort(b,b+m,greater<int>());
        for(int i = 0; i < n;i++){
            while(j < m && b[j] >= a[i]) j++;
            if(j>=m) break;
            res++;
            j++;
        }
        cout << res;
    }