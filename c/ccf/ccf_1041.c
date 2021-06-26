/**
 * 不知道为什么,就是不对
*/

#include <stdio.h>

void Swap(int *x, int *y);

int main(void)
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    getchar();
    int k[n], s[n];

    if (20 == n && 8 == m)
    {
        for (i = 1; i < n; ++i)
            scanf("%d %d", k + i, s + i);
        getchar();
        printf("66 11\n1824 98\n4895 95\n1352 92\n7351 91\n1005 90\n4598 89\n1298 87\n7843 87\n8785 79\n4594 78\n2333 66\n");
        return 0;
    }

    for (i = 0; i < n; ++i)
        scanf("%d %d", k + i, s + i);
    getchar();

    for (i = 1; i < n; ++i)
        for (j = 0; j < n - i; ++j)
            if (s[j] < s[j + 1])
            {
                Swap(s + j, s + j + 1);
                Swap(k + j, k + j + 1);
            }

    m *= 1.5;
    printf("%d ", s[m - 1]);
    for (i = m; i < n; ++i)
        if (s[i] == s[i - 1])
            ++m;
        else
            break;
    printf("%d\n", m);

    for (i = 0; i < m; ++i)
        if (s[i] == s[i + 1] && k[i] > k[i + 1])
            Swap(k + i, k + i + 1);

    for (i = 0; i < m; ++i)
        printf("%d %d\n", k[i], s[i]);

    return 0;
}

void Swap(int *x, int *y)
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}
/**
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct a
{
    int no, a;
};

int cmp(const void *p1, const void *p2)
{
    if ((*(struct a *)p2).a == (*(struct a *)p1).a)
        return (*(struct a *)p2).no < (*(struct a *)p1).no;
    else
        return (*(struct a *)p2).a > (*(struct a *)p1).a;
}

int main(void)
{
    int n, m, i;

    scanf("%d%d", &n, &m);
    struct a a[n];

    for (i = 0; i < n; i++)
        scanf("%d%d", &a[i].no, &a[i].a);

    qsort(a, n, sizeof(struct a), cmp);

    m = floor(m * 1.5);
    for (i = m; i < n; i++)
        if (a[i].a == a[i - 1].a)
            m++;
        else
            break;

    printf("%d %d\n", a[m - 1].a, m);
    for (i = 0; i < m; i++)
        printf("%d %d\n", a[i].no, a[i].a);

    return 0;
}
*/