#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){

	string text, R_text;

    cout << "Input text: ";
	cin >> text;
	R_text = func1(text);

    cout << "Reversed text: " << R_text << endl;
   	cout << "Palindrome: ";

	if(func3(text) == func3(R_text)){
		cout << "Yes";
	}else{
		cout << "No";
	}

    return 0;
}
