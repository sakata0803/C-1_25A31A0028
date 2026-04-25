// 2026_04_25_sakata.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // int answer = 5;

    int t = (int)time(nullptr);
    int answer = t % 10;
    bool loop = true;
	while (loop)
	{
        int input;

        scanf_s("%d", &input);

        int rank = 0;

        int sub = answer - input;

        if (answer == input)
        {
            rank = 2;
            printf("一致!\n");
        }
        if (sub > -3 && answer != input)
        {
            if (sub < 3 && answer != input)
            {
                rank = 1;
                printf("惜しい\n");
            }
        }
        switch (rank)
        {
        case 2:
            printf("ランクS\n");
            loop = false;
            break;
        case 1:
            printf("ランクA\n");
            break;
        default:
            printf("ランクB\n");
            break;
        }
	}
    return 0;
}