#include <iostream>

struct Parameter
{
	char name[20];
	int hp;
	int attack;
	int defense;
};

void f(int parameter)
{
}

void DispParameter(Parameter parameter)
{

	printf("プレイヤーの名前%s\n", parameter.name);
	printf("プレイヤーのHP%d\n", parameter.hp);
	printf("プレイヤーの攻撃力%d\n", parameter.attack);
	printf("プレイヤーの防御力%d\n", parameter.defense);

}

int main()
{




	Parameter player_parameter =
	{
		{
			's','a','k','a','t','a','\0',
		},
		500,
		30,
		25
	};
	DispParameter(player_parameter);




	Parameter enemy_parameter =
	{
		{
		's','h','u','n','s','u','k','e','\0',
		},
		200,
		15,
		10,
	};

}
