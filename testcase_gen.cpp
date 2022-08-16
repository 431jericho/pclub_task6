#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int rand_e(vector<int>& v)
{
    
    int n = v.size();
    srand(time(NULL));
    int index = rand() % n;
    int num = v[index];
    swap(v[index], v[n - 1]);
    v.pop_back();
    return num;
}

void randompermute(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    
    
    while (v.size()) {
        cout << rand_e(v) << " ";
    }
    
    cout << endl;
}


int main()


{
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
freopen("error.out", "w", stderr);
#endif
    
    int q = 10;

    while(q--){
    for(int n = 1000; n < 100000; n *= 2){
        cout << n << endl;
        randompermute(n);
    }
    }
    
    return 0;
}
