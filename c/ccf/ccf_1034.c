#include <stdio.h>

int main(void)
{

    return 0;
}

/**
 * int n, flag = 0;
 * cin >> n;
 * for (int i = 0; i <= n / 50; i++)
 *     for (int j = 0; j <= n / 20; j++)
 *     {
 *         if ((n - i * 50 - j * 20) % 10 == 0 && (n- i * 50 - j * 20) / 10 >= 0)
 *         flag++;
 *     }
 * cout << flag;
*/

/**
 * int n, ans=0;
 * cin >> n;
 * for (int i = 0 ; i<= n / 50; i++)
 *     ans += (n - 50 * i) / 20 + 1;
 * cout << ans;
*/

/**
 * int n;
 * cin >> n;
 * n /= 100;
 * cout << 5 * n * n + 4 * n + 1
*/

/**
 * int n, s = 1, k = 0;
 * scanf("%d", &n);
 * for (int i = 1; i <= n / 100; i++)
 *     k = (k += (s += 2)) + (s += 3);
 * printf("%d\n", k + 1);
*/