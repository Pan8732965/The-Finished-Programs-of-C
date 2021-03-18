#include <iostream>

using namespace std;

void line(void);

int main()
{
	double weight, tall, BMI;
	char option;
	
		line();
		cout << "***歡迎使用此程式!***\n這是一個計算你的BMI的程式!\n";
		do
		{
		line();
		cout << "請輸入你的體重: ";
		cin >> weight;
		cout << "請輸入身高(公分): ";
		cin >> tall;
		tall = tall / 100; //公分轉公尺
		tall = tall * tall;
		BMI = weight / tall;
		cout << "你的BMI是:" << BMI << endl;
		line();
		if (BMI < 18.5)
		{
			cout << "體重過輕\n";
		}
		else if (BMI >= 18.5 && BMI < 24)
		{
			cout << "正常\n";
		}
		else if (BMI >= 24 && BMI <= 35)
		{
			cout << "異常範圍\n";
		}
		else
		{
			cout << "錯誤Error(請輸入正確!)\n";
		}
		line();
		//--------choose option-------
		do
		{
			cout << "要繼續嗎?:";
			cin >> option;
			if (option != 'y' && option != 'n')
			{
				cout << "請再輸入一次!";
			}
		} while (option != 'n' && option != 'y'); //如果while不成立，則繼續

	} while (option != 'n');
	line();
	cout<<"Bye.下次見\n";
	//--------------
}
void line(void)
{
	cout << "==============================\n";
}
