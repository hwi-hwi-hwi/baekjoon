#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*
    sum = (x) + (x+1) + (x+2) + ... + (x + (L-1))
        = (x * L) + (L * L-1) / 2 = N

    x = {N - (L * L-1) / 2} / L
    -> {N - (L * L-1) / 2} 가 L 로 나누어 떨어지며, x가 0 이상이어야 함함
    */

    long long n; // 주어진 합
    int l;       // 최소 길이
    cin >> n >> l;

    for (int len = l; len <= 100; len++)
    {
        // 0 ~ (L-1) 까지의 합 : firstSum
        long long firstSum = (long long)(len * (len - 1)) / 2;

        // n 보다 크면 X
        if (n < firstSum)
            break;

        if ((n - firstSum) % len == 0)
        {                                       // x가 정수인지 확인
            long long x = (n - firstSum) / len; // 수열 첫 항 x

            if (x >= 0)
            { // x가 0 이상상
                for (int i = 0; i < len; i++)
                {
                    cout << x + i << " ";
                }

                return 0; // 찾으면 종료
            }
        }
    }

    cout << -1;

    return 0;
}