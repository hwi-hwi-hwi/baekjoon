#include <iostream>
#include <map>

using namespace std;

int main(){
	
	int hour, min;
	cin >> hour >> min;
	
	map<int, string> number_words = {
        {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"},
        {9, "nine"}, {10, "ten"}, {11, "eleven"}, {12, "twelve"},
        {13, "thirteen"}, {14, "fourteen"}, {15, "quarter"},
        {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"},
        {19, "nineteen"}, {20, "twenty"}, {21, "twenty one"},
        {22, "twenty two"}, {23, "twenty three"}, {24, "twenty four"},
        {25, "twenty five"}, {26, "twenty six"}, {27, "twenty seven"},
        {28, "twenty eight"}, {29, "twenty nine"}, {30, "half"}
    };
    
	string time;
	if(min == 0){
		time = number_words[hour] + " o' clock";
	}
	else if(0 <= min && min <= 30){
		if(min == 15 || min == 30){
			time = number_words[min] + " past " + number_words[hour];
		}
		else{
			string min_word  = (min == 1) ? " minute" : " minutes";
			time = number_words[min] + min_word + " past " + number_words[hour];
		}
	}
	else{
		int next_hour = (hour % 12) + 1;
		int remaining_min = 60 - min;
		
		if(remaining_min == 15){
			time = number_words[remaining_min] + " to " + number_words[next_hour];
			
		}
		else{
			string min_word  = (remaining_min == 1) ? " minute" : " minutes";
			time = number_words[remaining_min] + min_word + " to " + number_words[next_hour];
		}
	}
	
	cout << time;	
	
	return 0;
}
