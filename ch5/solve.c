#include<stdio.h>

int ary_size1, ary1[50];

//入力値のMから選んだ要素を引いていく再帰関数
int solve(int i, int input_value){
    if (input_value == 0) return 1; //再帰処理をしたうえでこの関数に戻ってくることを前提としている
    if (i >= ary_size1) return 0; //配列の最後の要素まで行ってしまった場合
    int res = solve(i+1, input_value) || solve(i+1, input_value - ary1[i]); //出てきた要素を足し合わせるか否かの分岐。「入力値から要素の値を引く」とは、出てきた各要素の値の足し合わせをした結果、入力値と一致するということ
    return res;
}

int main() {
    int ary_size2, input_value;

    scanf("%d", &ary_size1);
    for (int i=0; i < ary_size1; i++) scanf("%d", &ary1);
    scanf("%d", &ary_size2);
    for (int i=0; i <ary_size2; i++) {
        scanf("%d", &input_value);
        if (solve(0, input_value)) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}