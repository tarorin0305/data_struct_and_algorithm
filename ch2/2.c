#include<stdio.h>

void trace(int ary[], int size) {
    for (int i=0; i<size; i++) {
        if (i>0) {
            printf(" ");
        }
        printf("%d", ary[i]);
    }
    printf("\n");
}

void insertionSort(int ary[], int size) {
    int pick_up_sorted_idx, head_unsorted_idx, unsorted_value;
    for (head_unsorted_idx = 1; head_unsorted_idx < size; head_unsorted_idx++) {
        unsorted_value = ary[head_unsorted_idx];
        pick_up_sorted_idx = head_unsorted_idx - 1;
        while (pick_up_sorted_idx >= 0 && ary[pick_up_sorted_idx] > unsorted_value) {
            ary[pick_up_sorted_idx + 1] = ary[pick_up_sorted_idx];
            pick_up_sorted_idx--;
        }
        ary[pick_up_sorted_idx + 1] = unsorted_value;
        trace(ary, size);
    }
}

int main() {
    // int num, head_unsorted_idx, insert_idx;
    int size; //入力する整数の個数
    int ary[100]; //入力した整数を受け入れる箱

    scanf("%d", &size);
    for (int i=0; i<size; i++){
        scanf("%d", &ary[i]);
    }

    trace(ary, size); //配列の出力
    insertionSort(ary, size); //配列の要素の並び替え

    return 0;
}