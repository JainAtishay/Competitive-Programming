#include <bits/stdc++.h>
using namespace std;
int power(int n,int a){
	if(n==0)
		return 1;
	if(n==1)
		return a%M;
	int r=power(n/2,a);
	if(n%2==0)
		return ((r%M)*(r%M))%M;
	else
		return ((r)%M*(a)%M*(r)%M)%M;
}
int main(){
	int n,a=2,M;
	scanf("%d",&n);
	int res=power(n,a,M);
	printf("%d\n",res);
}
