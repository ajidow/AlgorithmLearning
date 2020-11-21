#include <iostream>
int main(void)
{
	int i;
	cin >> i;
	if( i > 0 )
	{
		cout << "right";
	}else if(i < 0){
		cout << "left";
	}else{
		cout << "middle";
	}
	
	return 0;
	
}