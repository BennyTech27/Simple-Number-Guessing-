#include <iostream>

using namespace std;

namespace correct_num{
	
	int number=13;
}

int main(){
	int user_number;
	
	cout << "Enter your number here: " << endl;
	cin >> user_number;
	
	using namespace correct_num;
	
	if(number==user_number){
		cout << "Correct Number" << endl;
	}
	
	else if(number!=user_number){
		
		cout << "Incorrect Number" << endl;
	}
	
	else{
		cout << "Please try again" << endl;
	}
	
	
	return 0;
	
}