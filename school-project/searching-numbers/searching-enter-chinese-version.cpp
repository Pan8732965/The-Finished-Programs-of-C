#include<iostream> 
using namespace std;

int main(){
	int data[10];
	int i,s,s2;
    char option;
	//------enter the number
	cout<<"========================\n";
	cout<<"�z�n!\n�o�O�@�Ӭd�߼Ʀr���{��\ncoding with c++\n";
	cout<<"========================\n";
	cout<<"{1 2 3 4 5 6 7 8 9 10}\n" ;
	cout<<"�п�J�Ʀr: "; 
	for(i=0;i<10;i++){
		cin>>data[i];
	}
	cout<<"�z��J����:\n{";
	for(i=0;i<10;i++){
		cout<<data[i]<<" ";
	}
	cout<<"}\n";
	
	while(1){
	cout<<"----------------\n";
    cout<<"�п�J�Ʀr�j�M(�p�G�n�����{���п�J0): ";
	cin>>s;
	if(s==0){
		break;
	}
	//-----analying
	    for(i=0;i<10;i++){
		    if(data[i]==s){
			    cout<<"�b���ЭȬ� "<<i<<" ���a����Ʀr "<<s<<"\n";
				break;
		    }
		}
		if(data[i]!=s){
		cout<<"�b�o�}�C���S���s�� "<<s<<" ����\n";
		}
	//-----------
	}
	cout<<"�U���A��!\n";
	cout<<"========================\n";
	return 0;
}
