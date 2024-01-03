#include <bits/stdc++.h>


using namespace std;

int main() {

    int N;
    pair<int, int> max;
    pair<int, int> min;

    cin >> N;
    int arr[N];
    max.second = -1, min.second = 10001;
    int mid = 0;
    bool flag = true;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > max.second) {
            max.first = i;
            max.second = arr[i];
        }
        if (arr[i] < min.second) {
            min.first = i;
            min.second = arr[i];
        }
    }

    // kalau sama semua
    if (max.second == min.second) {
        cout << "SESUAI" << endl;
        return 0;
    }

    // kalau N = 2
    if (N == 2) {
        int selisih = max.second - min.second;
        if (selisih % 2 == 0) {
            cout << selisih / 2 << " " << max.first + 1 << " " << min.first + 1 << endl;
        }
        else {
            cout << "TIDAK SESUAI" << endl;
        }
        return 0;

    }

    // N > 2, cari nilai tengah
    for (int i = 0; i < N; i++) {
        if (arr[i] != max.second && arr[i] != min.second) {
            if (mid == 0 || mid == arr[i]) {
                mid = arr[i];
            }
            else {
                flag = false;
                break;
            }
        }
    }

    int selisih = abs(max.second - mid);
    if (flag) {
        if (selisih + min.second != mid)
            flag = false;
    }


    if (flag) {
        cout << selisih << " " << max.first + 1 << " " << min.first + 1 << endl;
    }
    else {
        cout << "TIDAK SESUAI" << endl;
    }

    return 0;
}