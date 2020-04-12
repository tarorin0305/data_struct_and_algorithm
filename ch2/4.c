#include<stdio.h>

int selectionSort(int ary[], int ary_size){
    int unsorted_head_idx;
    int current_min_value_in_unsorted_idx;
    int current_picked_up_idx;
    int tmp_value;
    int change_cnt = 0;
    for (unsorted_head_idx=0; unsorted_head_idx < ary_size-1; unsorted_head_idx++){
        current_min_value_in_unsorted_idx = unsorted_head_idx;
        for (current_picked_up_idx=unsorted_head_idx; current_picked_up_idx < ary_size; current_picked_up_idx++) {
            if (ary[current_min_value_in_unsorted_idx] > ary[current_picked_up_idx]) {
                current_min_value_in_unsorted_idx = current_picked_up_idx;
                change_cnt++;
            }
        }
        // ary[unsorted_head_idx] = current_min_value_in_unsorted;
        tmp_value = ary[unsorted_head_idx];
        ary[unsorted_head_idx] = ary[current_min_value_in_unsorted_idx];
        ary[current_min_value_in_unsorted_idx] = tmp_value;
        if (unsorted_head_idx != current_min_value_in_unsorted_idx){
            change_cnt++;
        }
    }

    return change_cnt;
}

int main() {
    int ary[100], ary_size, change_cnt;

    scanf("%d", &ary_size);
    for (int i=0; i<ary_size; i++){
        scanf("%d", &ary[i]);
    }
    change_cnt = selectionSort(ary, ary_size);

    for (int i=0; i<ary_size; i++) {
        if (i > 0){
            printf(" ");
        }
        printf("%d", ary[i]);
    }
    printf("\n");
    printf("%d\n", change_cnt);

    return 0;
}