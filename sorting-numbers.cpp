#include<iostream>
using namespace std;

int main(){
	int enter[5];
	int i,j;
	int min,max,temp;
	//-----enter:
	cout<<"pls enter your 5 numbers in here: ";
	for(j=0;j<5;j++){
		cin>>enter[i];
	}
	
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
	cout<<endl<<"the data after sorting: \n";
	for(int i=0;i<5;i++){
		cout<<enter[i]<<" ";
	}
	
	return 0;
}
