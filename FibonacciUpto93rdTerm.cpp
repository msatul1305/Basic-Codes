#include<bits/stdc++.h>
using namespace std;
main(){
	long long int n;
	cin>>n;
	long long int n1=0,n2=1,sum=0;
	cout<<n1<<" "<<n2<<" ";
	n=n-2;
		while(n--){
		sum=n1+n2;
		n1=n2;
		n2=sum;
		cout<<sum<<" ";
		}
	}
