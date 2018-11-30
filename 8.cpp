#include <bits/stdc++.h>
using namespace std;
#define d(x)                cout << #x << " = " << (x) << endl;
#define fr                  freopen("in.txt", "r", stdin);
#define fw                  freopen("out.txt", "w", stdout);
#define mem(x)              memset((x), 0, sizeof((x)));
#define pb                  push_back
#define LL                  long long
#define fastIO              ios_base::sync_with_stdio(false)
#define sf                  scanf
#define pf                  printf
#define SQR(x)              ((x)*(x))
#define sc1(x)              scanf("%d", &x)
#define sc2(x, y)           scanf("%d %d", &x, &y)
#define sc3(x, y, z)        scanf("%d %d %d", &x, &y, &z)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(x-1); i>=int(y); i--)
#define all(c)              (c.begin(), c.end())
#define unq(v)              sort(all(v)), (v).erase(unique(all(v)),v.end())
#define siz 1000000
#define EPSILON    (1.0E-8)

int main(){
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
 		char ch;
        int extra=0;
        while(scanf("%c", &ch)!=EOF)
        {
            if(ch==' ')
            {
                if(!extra){
                    printf(" ");
                    extra=1;
                }
            }
            else
            {
                printf("%c", ch);
                extra=0;
            }
        }
        printf("\n");

    #ifndef ONLINE_JUDGE
        printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
}