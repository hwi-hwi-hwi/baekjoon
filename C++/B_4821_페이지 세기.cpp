#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        int totalPage;
        cin >> totalPage;

        if (totalPage == 0)
            break;

        string ranges;
        cin >> ranges;

        set<int> pages;

        stringstream ss(ranges); // 문자열 ranges를 스트림 ss로 변환환
        string range;

        while (getline(ss, range, ','))
        {
            // ss에서 ','를 기준으로 문자열을 읽어 range에 저장
            size_t dashPos = range.find('-'); // range에서 '-'의 위치를 찾음
            /* 반환값:
            (-)이 있는 경우: 해당 문자의 인덱스(위치)를 반환.
            (-)이 없는 경우: std::string::npos를 반환. */

            if (dashPos == string::npos)
            {
                // 숫자가 하나만 있는 경우
                int page = stoi(range);

                if (1 <= page && page <= totalPage)
                {
                    pages.insert(page);
                }
            }
            else
            {
                // 범위(low-high)가 두 개 있는 경우
                int low = stoi(range.substr(0, dashPos));
                int high = stoi(range.substr(dashPos + 1));

                if (low > high)
                    continue;

                for (int i = low; i <= high; i++)
                {
                    if (1 <= i && i <= totalPage)
                        pages.insert(i);
                }
            }
        }

        cout << pages.size() << "\n";
    }

    return 0;
}