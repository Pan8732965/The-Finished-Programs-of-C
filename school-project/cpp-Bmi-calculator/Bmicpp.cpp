#include <iostream>

using namespace std;

void line(void);

int main()
{
	double weight, tall, BMI;
	char option;
	
		line();
		cout << "***�w��ϥΦ��{��!***\n�o�O�@�ӭp��A��BMI���{��!\n";
		do
		{
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
		//--------choose option-------
		do
		{
			cout << "�n�~���?:";
			cin >> option;
			if (option != 'y' && option != 'n')
			{
				cout << "�ЦA��J�@��!";
			}
		} while (option != 'n' && option != 'y'); //�p�Gwhile�����ߡA�h�~��

	} while (option != 'n');
	line();
	cout<<"Bye.�U����\n";
	//--------------
}
void line(void)
{
	cout << "==============================\n";
}
