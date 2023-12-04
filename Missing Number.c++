#include <iostream>
using namespace std;
const int MAX = 1e6;
bool a[MAX];

int main(){
    int n; cin >> n;
    for (int i =0; i < n - 1; i++){
        int x; cin >> x;
        a[x] = true;
    }
    for (int i = 1; i <= n; i++){
        if (!a[i]){
            cout << i << endl;
            break;
        }
    }
    return 0;
}