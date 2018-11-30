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
 
struct point{
    int x;
    int y;
};
 
int main(){
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
 
        //Write code here
        string keyword[60] = {
            "Asm", "auto", "bool", "break", "case",
            "catch", "char", "class", "const_cast", "continue",
            "default", "delete", "do", "double", "else",
            "enum", "dynamic_cast", "extern", "false", "float",
            "for", "union", "unsigned", "using", "friend",
            "goto", "if", "inline", "int", "long",
            "mutable", "virtual", "namespace", "new", "operator",
            "private", "protected", "public", "register", "void",
            "reinterpret_cast", "return", "short", "signed", "sizeof",
            "static", "static_cast", "volatile", "struct", "switch",
            "template", "this", "throw", "true", "try",
            "typedef", "typeid", "unsigned", "wchar_t", "while"
        };

        string misc[4] = {
            ",", ";", "/", "#"
        };

        string oparator[6] = {
            "+", "-", "*", "/", "%", "="
        };


        string input;
        getline(cin, input);

        vector<string> token;

        string temp = "";
        for(int i = 0; i < input.length(); i++){
            if(input[i] == ' '){
                token.push_back(temp);
                // d(temp)
                temp = "";
            }
            else{
                temp += input[i];
            }
        }

        set<string> Keyword;
        set<string> Misc;
        set<string> Oparator;
        set<string> Variable;

        int k = 0, m = 0, o = 0; 
        for(int x = 0; x < token.size(); x++){
            k = 0, m = 0, o = 0; 
            //checking for keyword
            for(int i = 0; i < 60; i++){
                if(token[x] == keyword[i]){
                    Keyword.insert(token[x]);
                    k = 1;
                    break;
                }
            }
            if(k == 1) continue;
            //checking for misc
            for(int i = 0; i < 4; i++){
                if(token[x] == misc[i]){
                    Misc.insert(token[x]);
                    m = 1;
                    break;
                }
            }
            //checking for operator
            if(m == 1) continue;
            for(int i = 0; i < 6; i++){
                if(token[x] == oparator[i]){
                    // printf("Keyword\n");
                    Oparator.insert(token[x]);
                   
                    o = 1;
                    break;
                }
            }
            if(o == 1) continue;
            //then its a variable
            if(k == 0 and m == 0 and o == 0){
                Variable.insert(token[x]);
            }
        }

        set<string>::iterator it;
        cout << "Keywords:";
        for (it=Keyword.begin(); it!=Keyword.end(); ++it){
            cout << ' ' << *it;
            
        }
        cout << "\n";
        cout << "Misc:";
        for (it=Misc.begin(); it!=Misc.end(); ++it){
            cout << " " << *it;
            
        }
        cout << "\n";
        cout << "Operator:";
        for (it=Oparator.begin(); it!=Oparator.end(); ++it){
            cout << " " << *it;
            
        }
        cout << "\n";
 
    #ifndef ONLINE_JUDGE
        printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
}