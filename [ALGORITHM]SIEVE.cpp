#include<bits/stdc++.h>
using namespace std;

void mark(bool ar[],int a,int n){
	int i=2,num;
	while((num=i*a)<=n){
		ar[num-1]=1;
		++i;
	}
}

void sieve(int n){
	if(n>=2){
		bool ar[n];
		memset(ar,0,sizeof(ar));
		for(int i=1;i<n;++i){
			if(ar[i]==0){
				cout<<i+1<<endl;
				mark(ar,i+1,n);
			}
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	cout<<"prime numbers are : "<<endl;
	sieve(n);
	return 0;
}
