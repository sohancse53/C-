#include <bits/stdc++.h>
using namespace std;


int countMultiples(int x, int a, int b) {
    return b / x - (a - 1) / x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    int t;
    cin >> t;

    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int cnt = 0;
        
       
        for (int i = a; i <= b; ++i) {
           
            int multiples = countMultiples(i, a, b);

            
            if (multiples >= k) {
                ++cnt;
            }

           
            if (multiples == 0) {
                break;
            }
        }

        
        cout << cnt << endl;
    }

    return 0;
}
