#include <iostream>

using namespace std;

void line(void);

int main()
{
	double weight, tall, BMI;
	char option;
	do
	{
			line();
		cout << "***�w��ϥΦ��{��!***\n�o�O�@�ӭp��A��BMI���{��!\n";
		line();
		cout << "�п�J�A���魫: ";
		cin >> weight;
		cout << "�п�J����(����): ";
		cin >> tall;

		tall = tall / 100; //�����ऽ��
		tall = tall * tall; 
		BMI = weight / tall;
		cout << "�A��BMI�O:" << BMI << endl;
		line();
		if (BMI < 18.5)
		{
			cout << "�魫�L��\n";
		}
		else if (BMI >= 18.5 && BMI < 24)
		{
			cout << "���`\n";
		}
		else if (BMI >= 24 && BMI <= 35)
		{
			cout << "���`�d��\n";
		}
		else
		{
			cout << "���~Error(�п�J���T!)\n";
		}
		line();
		cout << "�n�~���?(�O��Jy/�_��Jn):";
		cin >> option;
	} while (option != 'n');

	return 0;
}
void line(void)
{
	cout << "==============================\n";
}
