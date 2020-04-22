#include<stdio.h>

int ary[1000000], ary_size_1;

int binarySearch(int key) {
    int left_idx = 0;
    int right_idx = ary_size_1;
    int mid_idx;

    while( left_idx < right_idx) {
        mid_idx = (left_idx + right_idx) / 2;
        if (ary[mid_idx] == key) return 1;
        if (ary[mid_idx] < key) left_idx = mid_idx + 1;
        else if (ary[mid_idx] > key) right_idx = mid_idx;
    }
    return 0;
}

int main() {
    int ary_size_2, key, sum = 0;

    scanf("%d", &ary_size_1);
    for (int i=0; i < ary_size_1; i++) {
        scanf("%d", &ary[i]);
    }

    scanf("%d", &ary_size_2);
    for (int i=0; i < ary_size_2; i++) {
        scanf("%d", &key);
        if (binarySearch(key)) sum++;
    }
    printf("%d\n", sum);

    return 0;
}