#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int ary[], int ary_size) {
    int count = 0;
    bool loop_continue_flg = 1;
    for (int sorted_head_idx=0; loop_continue_flg; sorted_head_idx++) {
        loop_continue_flg = 0;
        for (int unsorted_tail_idx=ary_size-1; unsorted_tail_idx >= sorted_head_idx+1; unsorted_tail_idx--){
            if (ary[unsorted_tail_idx] < ary[unsorted_tail_idx - 1]) {
                swap(ary[unsorted_tail_idx], ary[unsorted_tail_idx - 1]);
                loop_continue_flg = 1;
                count++;
            }
        }
    }

    return count;
}

int main() {
    int ary[100], ary_size, count;
    cin >> ary_size;
    for (int i=0; i < ary_size; i++){
        cin >> ary[i];
    }
    count = bubbleSort(ary, ary_size);
    for (int i=0; i < ary_size; i++){
        if (i) cout << " ";
        cout << ary[i];
    }
    cout << endl;
    cout << count << endl;

    return 0;
}