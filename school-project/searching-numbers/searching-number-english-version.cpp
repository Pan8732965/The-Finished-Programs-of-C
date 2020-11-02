#include<iostream> 
using namespace std;

int main(){
	int data[10];
	int i,s,s2;
    char option;
	//------enter the number
	cout<<"========================\n";
	cout<<"Hello!\nThis is a program which can let you searching the numbers\nThis is program coding with c++\n";
	cout<<"========================\n";
	cout<<"{1 2 3 4 5 6 7 8 9 10}\n" ;
	cout<<"Please enter the numbers: "; 
	for(i=0;i<10;i++){
		cin>>data[i];
	}
	cout<<"The data you entered:\n{";
	for(i=0;i<10;i++){
		cout<<data[i]<<" ";
	}
	cout<<"}\n";
	
	while(1){
	cout<<"----------------\n";
    cout<<"Please enter the number to search(if want to finish please enter 0): ";
	cin>>s;
	if(s==0){
		break;
	}
	//-----analying
	    for(i=0;i<10;i++){
		    if(data[i]==s){
			    cout<<"The number "<<s<<" is in the ";
				if(i==1){
					cout<<" first";
					cout<<" place in this array\n";
				}
				else if(i==2){
					cout<<" second";
					cout<<" place in this array\n";
				}
				else if(i==3){
					cout<<" third";
					cout<<" place in this array\n";
				}
				else{
					cout<<i<<"th place in this array\n";
				}
				break;
		    }
		}
		if(data[i]!=s){
		cout<<"There is no such number called "<<s<<" in this array\n";
		}
	//-----------
	}
	cout<<"See you next time!\n";
	cout<<"========================\n";
	return 0;
}
