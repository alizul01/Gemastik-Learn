#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

#define ok ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    ok
    int N, M, max_sum = 0;
    cin >> N >> M;
    int *arr = new int[N + 1];

    for (int i = 1; i <= N; i++) cin >> arr[i];

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) sum += arr[k];
            if (sum > max_sum) max_sum = sum;
        }
    }
    

    // masih erorrrrr :(
    
    
    cout << max_sum << endl;
}