#include<bits/stdc++.h>
using namespace std;
vector<int> remove_odd(vector<int> v){
		vector<int>::iterator it;
		for(it=v.begin();it!=v.end();++it){
			it=v.erase(it);
			if(it==v.end())
				break;
			}
			return v;
}

	main(){
		int n;
		cin>>n;
		vector<int> v;
			for(int i=0;i<n;i++){
				v.push_back(i);
			}
			for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
			}
			cout<<endl;
	v=remove_odd(v);
	vector<int>::iterator it1;
			for(it1=v.begin();it1!=v.end();++it1){
			cout<<*it1<<" ";
			}
			cout<<endl;
			
	}
