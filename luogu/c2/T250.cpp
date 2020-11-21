#include<cstdio>
#include<iostream>

using namespace std;

int a,b,c;

int main(){
	cin>>a>>b;
	if(a>10){
		c=c+(a-10);
		a=10;
	}
	
	if(a>5){
		c=c+2*(a-5);
		a=5;
	}
	
	c=c+a*3;
	
	if(b>=c) cout<<"give him "<<c<<" yuan";
	else cout<<"fighting!!";
	return 0;
}