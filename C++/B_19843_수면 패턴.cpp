#include <iostream>
#include <string>

using namespace std;

int day_to_hours(const string& day){
	
	if(day == "Mon")		return 0;
	else if(day == "Tue")	return 24;
	else if(day == "Wed")	return 48;
	else if(day == "Thu")	return 72;
	else if(day == "Fri")	return 96;
	
	return 0;
}

int main(){
	
	int t, n;
	
	cin >> t >> n;
	
	int total(0);
	
	while(n--){
		
		string d1, d2;
		int h1, h2;
		cin >> d1 >> h1 >> d2 >> h2;
		
		int start = day_to_hours(d1) + h1;
		int end = day_to_hours(d2) + h2;
		
		total += end - start;
	}
	
	int required = t - total;
	
	if(required <= 0)		cout << '0';
	else if(required > 48)		cout << "-1";
	else	cout << required;	
	
	return 0;
}
