#include <iostream>

// 構造体「パラメータ型」を定義する
struct Parameter
{
	int hp;       // HP
	int mp;       // MP 
	char speed;   // 素早さ
	int attack;   // 攻撃力
	int defense;  // 防御力
	float magic;  // 魔法
};

// ---------------------------------------------------------
/**
 * @brief   各パラメータを表示する関数
 * @param   hp      HP
 * @param   mp      MP
 * @param   speed   素早さ
 * @param   attack  攻撃力
 * @param   defense 防御力
 * @param   magic   魔力
 */
void DispParameter(int hp, int mp, char speed, int attack, int defense, float magic)
{
	printf("HP:%d\n", hp);
	printf("MP:%d\n", mp);
	printf("素早さ:%c\n", speed);
	printf("攻撃力:%d\n", attack);
	printf("防御力:%d\n", defense);
	printf("魔力:%2.1f\n", magic);
}

// ---------------------------------------------------------
/**
 * @brief   main 関数
 */

int main()
{
	// 文字の表示
	//char s = 'a';
	//printf("%c\n", s);
	// 文字列の表示
	//char str[10] = "abc";

	//char str[10];
	//str[0] = 'a';
	//str[1] = 'b';
	//str[2] = 'c';
	//str[3] = '\0'; // ヌル文字

	//char str[10] = "abcdefghij";

	//str[0] = 97;
	//str[1] = 0;

	//str[0] = 'あ';
	//str[1] = 'い';
	//str[2] = 'う';
	//str[3] = '\0';

	//char str[10] = "あいう";

	//printf("%s\n", str);
	//printf("%c\n", str[0]);

	//int count[4];
	//int hp = 100;                 // * メモリ上で count の直後に配置される可能性がある

	// count 配列の初期化
	//for (int i = 0; i <= 4; i++)
	//{
		//count[i] = 0; // * i が 4 の時に hp の領域を破壊している可能性がある
	//}

	// ～～～～～
	// ・・・・・
	// 敵やアイテムなどの処理を行う
    // ・・・・・
	// ～～～～～

	//if (hp == 0)
	//{

	//}

	Parameter player_param; // パラメータ型の変数を宣言する

	int player_param_hp = 100;
	int player_param_mp = 50;
	char player_param_speed = 'A';
	int player_param_attack = 11;
	int player_param_defense = 15;
	float player_param_magic = 20.5;

	// プレイヤーのパラメータ表示
	DispParameter(player_param_hp, player_param_mp, player_param_speed, player_param_attack, player_param_defense, player_param_magic);

	int enemy_hp = 110;
	int enemy_mp = 20;
	char enemy_speed = 'B';
	int enemy_attack = 30;
	int enemy_defense = 1;
	float enemy_magic = 0;

	// 敵のパラメータ表示
	DispParameter(enemy_hp, enemy_mp, enemy_speed, enemy_attack, enemy_defense, enemy_magic);

	return 0;
}
