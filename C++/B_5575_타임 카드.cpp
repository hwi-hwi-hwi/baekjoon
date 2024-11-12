#include <iostream>

using namespace std;

int main(){
	
	for(int i = 0; i < 3; i++){
		
		int h1, m1, s1, h2, m2, s2;
		
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		
		int h3, m3, s3;
		
		h3 = h2 - h1;
		
		if(m2 >= m1)		m3 = m2 - m1;
		else{
			h3--;
			m3 = (m2 + 60) - m1;
		}
		
		if(s2 >= s1)	s3 = s2 - s1;
		else{
			if(m3 == 0){
				h3--;
				m3 += 59;
				s3 = (s2 + 60) - s1;
			}
			else{
				m3--;
				s3 = (s2 + 60) - s1;
			}
		}
		
		cout << h3 << " " << m3 << " " << s3 << endl;
	}
	
	return 0;
}
