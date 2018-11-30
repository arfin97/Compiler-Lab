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
    #define scb(x, y)           scanf("%d %d", &x, &y)
    #define sc3(x, y, z)        scanf("%d %d %d", &x, &y, &z)
    #define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
    #define ROF(i, x, y)        for(int i=int(x-1); i>=int(y); i--)
    #define all(c)              (c.begin(), c.end())
    #define unq(v)              sort(all(v)), (v).erase(unique(all(v)),v.end())
    #define EPSILON    (1.0E-8)
    #define siz 100000

    int main(){
        #ifndef ONLINE_JUDGE
            clock_t tStart = clock();
            freopen("in.txt", "r", stdin);
            freopen("out.txt", "w", stdout);
        #endif

        string str;
        int multi = 0;
        int comment_counter = 1;
        while(getline(cin, str)){
//            cout << str << endl;
            if(multi == 1){

                cout << str << endl;
                for(int i = 0; i < str.size(); i++){
                    if(str[i] == '*' and str[i+1] == '/'){
                        multi = 0;

                    }
                }
                continue;
            }
//            cout << str << endl;

            int len = str.size();

            if(len >= 2){
                int x = 0;
                while(str[x] == ' ' or str[x] == '\t') x++;

                if(str[x] == '/' and str[x+1] == '*'){
                    cout << "No: " << comment_counter << ": ";
                    cout << "Type: Multi Line Comment:" << endl;
                    cout << str << endl;
                    multi = 1;
                    comment_counter++;
                    continue;
                }
                if(str[x] == '/' and str[x+1] == '/'){
                     cout << "No: " << comment_counter << ": ";
                    cout << "Type: Single Line Comment:" << endl;
                    cout << str << endl;
                    comment_counter++;
                }

            }
        }

        #ifndef ONLINE_JUDGE
            printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
        #endif
    }