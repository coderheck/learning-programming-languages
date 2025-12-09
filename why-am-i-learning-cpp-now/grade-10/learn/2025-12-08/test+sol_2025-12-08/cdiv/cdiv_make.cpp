//Dai Ca Di Hoc
#include <bits/stdc++.h>
#include <windows.h>
#include <direct.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define Rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define For(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define maxn 3000005
#define MOD 1000000007
#define maxc 1000000003
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define bit(x, i) (((x) >> (i)) & 1)

using namespace std;

typedef long long ll;
typedef long double ld;

ofstream fi;
char Name_file[] = "cdiv";
char exe_file[100] = "";
char inp_file[100] = "";
char out_file[100] = "";
string folder = "Test00";

int Prime[maxn], cnt = 0, used[maxn];

int random(int x)
{
    long long u = rand() % maxc;
    long long v = rand() % maxc;
    long long k = rand() % maxc;
    return ((u*v+k) % x + 1);
}


long long random(long long x)
{
    int u = random(1000000000);
    int v = random(1000000000);
    int k = random(1000000000);
    return ((1ll*u*v+k)%x)+1;
}

void make_test( int test)
{
    int n = random(1000);
    if (test <= 5){
        vector <int> v;
        v.clear();
        long long T = 1;
        while (1){
            int x = random(1000);
            if (random(10) < 3) x = random(3000000);
            if (T*x > 1e12) break;
            T *= x;
            v.push_back(x);
        }
        fi << v.size() << "\n";
        for(int i = 0; i < v.size(); i++) fi << v[i] << " ";
    } else if (test <= 8)
    {
        fi << n << "\n";
        For(i, 1, n) fi << random(100000) << " ";
    } else {
        n = random(500000);
        if (test == 10) n = 1000000;
        fi << n << "\n";
        For(i, 1, n){
            int x = random(3000000);
            if (random(10) < 6) x = Prime[random(cnt)];
                else x = Prime[5000+random(cnt/2)] * 2;
            fi << x << " ";
        }
    }
}

void run_answer()
{
    system(exe_file);
}

void Rename_file(int test)
{
    folder[4] = test/10 + 48;
    folder[5] = test%10 + 48;
    mkdir(&folder[0]);
    string output_path = folder + "\\" + inp_file;
    CopyFile(inp_file, &output_path[0], false);
    output_path = folder + "\\" + out_file;
    CopyFile(out_file, &output_path[0], false);
}

void Make_file_name()
{
    strcpy(exe_file,Name_file);
    strcpy(inp_file,Name_file);
    strcpy(out_file,Name_file);

    strcat(exe_file,".exe");
    strcat(inp_file,".inp");
    strcat(out_file,".out");

}

void Init(){
    cnt = 0;
    for (int i = 2; i < maxn; i++)
        if (!used[i]){
            Prime[++cnt] = i;
            for (int j = i+i; j < maxn; j += i) used[j] = 1;
        }
}

int main()
{
    Init();
    Make_file_name();
    For(test,10,10)
    {
        cout << test << endl;
        fi.open(inp_file);
        make_test(test);
        fi.close();
        run_answer();
        Rename_file(test);
    }
    DeleteFile(inp_file);
    DeleteFile(out_file);
    return 0;
}
