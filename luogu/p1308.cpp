#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	string word;
	string article;
	cin >> word >> article;

	int position = 0;
	position = article.find(word,position);
	cout << position;
	// while(true){

	// }
	return 0;
}