#include <iostream>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

int main(){
	
	string input;
	getline(cin, input);
	
	// 1. ����� ���������� �⺻ �ܾ �и�
	stringstream ss(input);
	string word;
	vector<string> words;
	
	// ' '�� '-' �������� ������
	while(getline(ss, word, ' ')){
		
		stringstream ss2(word);
		string subword;
		
		while(getline(ss2, subword, '-')){
			
			words.push_back(subword);
		}
	} 
	
	regex pattern("^(c|j|n|m|t|s|l|d|qu)'[aeiouh].*");
	
	int count(0);
	for(string&w : words){
		
		if(regex_match(w, pattern)){
			count += 2;
		}
		else
			count++;
	}
	
	cout << count;	
	
	return 0;
}
