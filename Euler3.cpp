#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        if (n == 2) {
            cout << 2 << endl;
            continue;
        }
        while (n % 2 == 0) n /= 2;
        if (n == 1) {
            cout << 2 << endl; // pow of 2
            continue;
        }
        long d = 3;
        while (n != d) {
            if (n % d == 0) n /= d;
            else d += 2;        
        }
        cout << n << endl;
    }
    return 0;
}