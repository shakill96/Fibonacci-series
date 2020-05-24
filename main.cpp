//--Created on 23/05/20 21:00

#include <iostream>

using namespace std;

int main(void) {
	int a=0,n,b=1,i,c;
	char redo;
	
	do{
		a = 0;
		b = 1;
		cout<<"Enter the value of n:";
		cin>>n;
		
		if(n>100){
			cout<<"Enter some lesser value"<<endl;
		}else{
			cout<<"Serial no."<<i<<"==";
			cout<<a<<endl;
			
			for(i=0;i<=n;i++){
				c = a + b;
				a=b;
				b=c;
				cout<<"Serial no."<<i+1<<"==";
				cout<<a<<endl;
			}
			
			cout<<"Enter y or Y to continue:";
			cin>>redo;
			cout<<endl<<endl;
		}
	}while(redo=='y' || redo=='Y');
	
	system("pause");
	return 0;
}


