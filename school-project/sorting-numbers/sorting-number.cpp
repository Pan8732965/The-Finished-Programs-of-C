#include<iostream>
using namespace std;

int main(){
	int enter[5];
	int i,j;
	int min,max,temp;
	char option;
	//-----enter:
	cout<<"================\n";
	cout<<"This is a program that can let you sorting numbers!\n";
	do{
		cout<<"================\n";
		cout<<"Please enter your 5 numbers in here: ";
		for(j=0;j<5;j++){
			cin>>enter[j];
		}
		cout<<"================\n";
    	cout<<"Your numbers are :{";
    	for(i=0;i<5;i++){
        	cout<<enter[i]<<" ";
    	}
		cout<<"}";
		//-----analyzing:
		for(i=0;i<4;i++){
			min=i;
				for(j=min+1;j<5;j++){
					if(enter[min]>enter[j])
						min=j;
			}
			if(min!=i){
			temp=enter[i];
			enter[i]=enter[min];
			enter[min]=temp;
			}
		}
	//-------result:
		cout<<"\n================";
		cout<<endl<<"The data after sorting: "<<endl<<"-->"<<"{";
		for(int i=0;i<5;i++){
			cout<<enter[i]<<" ";
		}
		cout<<"}"<<endl<<"================\n";
	//--------option:
		cout<<"still continue?(y for yes;n for no): ";
		cin>>option;
	}while(option!='n');
	
	return 0;
}
