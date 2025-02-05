#include <iostream>
#include<cstdio>
using namespace std;
int n, m, k, a, b, ans;
int s[5005][5005];
bool pd(int x, int y) {
    if(x < 1 || y < 1 || x > n || y > n) return 0;
    return 1;
}
int main() 
{
    cin>>n>>m>>k;
    for(int i = 1; i <= m + k; i++) {
        cin>>a>>b;
        for(int x = -2; x <= 2; x++)
            for(int y = -2; y <= 2; y++)
                if((i > m || abs(x) + abs(y) <= 2) && pd(x + a, b + y))
                    s[x + a][b + y]++;
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            ans += s[i][j] == 0;
    cout<<ans<<endl;
    return 0;
}