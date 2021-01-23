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
		for(i=0;i<4;i++){ //i=0
			min=i;	//min=0
				for(j=min+1;j<5;j++){ //j=1
					if(enter[min]>enter[j]) //enter[0]59>enter[1]63
						min=j;
			}
			if(min!=i){ //exclude the situation of min=0,i=1,min=1,i=1
			temp=enter[i];//the number of receiving temp=59
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
		cout<<"}"<<endl;
	//--------option:
		cout<<"still continue?(y for yes;n for no): ";
		cin>>option;
	}while(option!='n');
	
	return 0;
}
