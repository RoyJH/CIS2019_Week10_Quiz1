#include <iostream>
#include <cstring>

using namespace std;
string typed;
int count=0;
int main(){
cout<<"Enter a message: \n";
getline(cin, typed);
for (int i=0; i<=typed.length();i++)
	if (typed[i]=='b'||typed[i]=='B'){
		count++;
		if (count % 2 == 0){
			cout<<"STAND";

		}
		else if (count%2!=0){
			cout<<"SIT";
		}	
	}
	else{
		cout<< typed[i];
	}
}