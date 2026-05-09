#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	// 1.ランダムな5教科の点数を作成する

	// 乱数のシード値を作成する
	srand((unsigned)time(NULL));
	// 5教科の点数を保持する変数を宣言する
	int japanese = rand() % 101; //国
	int english  = rand() % 101; //英
	int math     = rand() % 101; //数
	int science  = rand() % 101; //理
	int society  = rand() % 101; //社

	// 2.合計点と平均点 (少数第一位まで) を計算
	int total = japanese + english + math + science + society;
	float avarage = (float)total / 5.0f;

	// 結果を出力
	printf("国: %d点 / 英: %d点 / 数: %d点　理: %d点 / 社: %d点\n", japanese, english, math, science, society);
	printf("合計: %d点 / 平均: %.1f点\n", total, avarage);
	// 3.合否判定
	const int pass_score = 40; // 教科ごとの合計点は 40
	bool pass_japanese = (pass_score <= japanese); //	 国語が合格点かどうか
	bool pass_english  = (pass_score <= english);  //	 英語が合格点かどうか
	bool pass_math     = (pass_score <= math);     //	 数学が合格点かどうか
	bool pass_science  = (pass_score <= science);  //	 理科が合格点かどうか
	bool pass_society  = (pass_score <= society);  //	 社会が合格点かどうか
	// すべての教科で合格しているかどうか
	bool pass_all = pass_japanese && pass_english && pass_math && pass_science && pass_society;

	// 4.結果の表示
	const float pass_avarage = 60.0f; // 合計平均点は60
	if (60.0f <= avarage && pass_all)
	{
		printf("合格です\n");
	}
	else
	{
		printf("不合格です\n");
		if (avarage < pass_avarage)
		{
			printf("平均点が60未満です\n");
		}
		if (!pass_japanese)
		{
			printf("国語が40未満です\n");
		}
		if (!pass_english)
		{
			printf("英語が40未満です\n");
		}
		if (!pass_math)
		{
			printf("数学が40未満です\n");
		}
		if (!pass_science)
		{
			printf("理科が40未満です\n");
		}
		if (!pass_society)
		{
			printf("社会が40未満です\n");
		}
	}
}