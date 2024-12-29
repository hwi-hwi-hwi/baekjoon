#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int  main(){
	string ssn;
	map<string, int> ssn_count;
	set<string> duplicates;
	
	while(cin >> ssn){
		if(ssn == "000-00-0000")	break;
		
		ssn_count[ssn]++;
		if(ssn_count[ssn] == 2){
			duplicates.insert(ssn);
		}
	}
	
	for(const string& ans : duplicates){
		cout << ans << "\n";
	}
	
	return 0;
}
