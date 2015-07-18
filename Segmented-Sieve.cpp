#include<iostream>
using namespace std;

inline bool check(int n){
	if(n==1||n%2==0)
	return 0;
	else if(n==2)
	return 1;
	
	else{
		int i;
		for(i=3;i*i<=n;i+=2)
		{
			if(n%i==0)
			return 0;
		}
		return 1;
	}
}

int main(){
	cout<<"Enter number to be checked : "<<endl;
	int num;
	cin>>num;
	bool c =check(num);
	if(c==0)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;
	
	return 0;
}
