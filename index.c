#include <stdio.h>
#include <math.h>
int main(void){
        // 宣言と同時に初期化する方法
    int temp, hum;
    float group1, group2, mid;
    scanf("%d", &temp);
    scanf("%d", &hum);
    int int_arr1[9] = {0, 55, 60, 65, 70, 75, 80, 85, 200};
    char eval[8][64] = {"寒い", "肌寒い", "何も感じない", "快い", "暑くない", "やや暑い", "暑くて汗が出る", "暑くてたまらない"};
    group1 = temp * 0.81;
    group2 = hum * 0.01 * (0.99 * temp - 14.3);
    int result = round(group1 + group2 + 46.3);
    printf("不快指数: %d\n", result);
    for(int i=0; i<=8; i++){
        if(result >= int_arr1[i] && result < int_arr1[i+1]){
            printf("現在の体感: %s", eval[i]);
        }
    }
}