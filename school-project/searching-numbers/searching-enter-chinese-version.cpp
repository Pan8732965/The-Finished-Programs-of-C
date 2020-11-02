#include<iostream> 
using namespace std;

int main(){
	int data[10];
	int i,s,s2;
    char option;
	//------enter the number
	cout<<"========================\n";
	cout<<"您好!\n這是一個查詢數字的程式\ncoding with c++\n";
	cout<<"========================\n";
	cout<<"{1 2 3 4 5 6 7 8 9 10}\n" ;
	cout<<"請輸入數字: "; 
	for(i=0;i<10;i++){
		cin>>data[i];
	}
	cout<<"您輸入的值:\n{";
	for(i=0;i<10;i++){
		cout<<data[i]<<" ";
	}
	cout<<"}\n";
	
	while(1){
	cout<<"----------------\n";
    cout<<"請輸入數字搜尋(如果要結束程式請輸入0): ";
	cin>>s;
	if(s==0){
		break;
	}
	//-----analying
	    for(i=0;i<10;i++){
		    if(data[i]==s){
			    cout<<"在註標值為 "<<i<<" 的地方找到數字 "<<s<<"\n";
				break;
		    }
		}
		if(data[i]!=s){
		cout<<"在這陣列中沒有叫做 "<<s<<" 的值\n";
		}
	//-----------
	}
	cout<<"下次再見!\n";
	cout<<"========================\n";
	return 0;
}
