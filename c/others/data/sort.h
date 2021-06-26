void Sort_sma(int length, float *p);         //插入排序
void Sort_mid(float *p, int low, int high);  //快速排序
void Sort_big(float *p, int start, int end); //归并排序
void Swap(float *x, float *y);               //交换

float *Sort(int length, float *p) //排序
{
    if (length <= 0)
    {
        printf("Sort error!");
        return NULL;
    }
    else if (length < 20)
        Sort_sma(length, p);
    else if (length < 100)
        Sort_mid(p, 0, length - 1);
    else
        Sort_big(p, 0, length - 1);
    return p;
}

void Sort_sma(int length, float *p) //插入排序
{
    int j, k;
    for (int i = 1; i < length; ++i)
    {
        for (j = p[i], k = i - 1; (k >= 0) && (j < p[k]); --k)
            p[k + 1] = p[k];
        p[k + 1] = j;
    }
    return;
}

void Sort_mid(float *p, int low, int high) //快速排序
{
    int i = low, j = high, key = p[low];
    if (high <= low) //如果low >= high说明排序结束了
        return;

    while (low < high) //该while循环结束一次表示比较了一轮
    {
        while (low < high && key <= p[high])
            --high; //向前寻找

        if (p[high] < key)
        {
            Swap(&p[low], &p[high]);
            ++low;
        }

        while (low < high && p[low] <= key)
            ++low; //向后寻找

        if (key < p[low])
        {
            Swap(&p[low], &p[high]);
            --high;
        }
    }

    Sort_mid(p, i, low - 1); //左边
    Sort_mid(p, low + 1, j); //右边
}

void Sort_big(float *p, int start, int end) // 归并排序
{
    int mid = start + (end - start) / 2;
    if (start >= end)
        return;
    Sort_big(p, start, mid);
    Sort_big(p, mid + 1, end);

    int *temp = (int *)malloc((end - start + 1) * sizeof(int));
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
        if (p[i] <= p[j])
            temp[k++] = p[i++];
        else
            temp[k++] = p[j++];
    while (i <= mid)
        temp[k++] = p[i++];

    while (j <= end)
        temp[k++] = p[j++];
    for (i = 0; i < k; i++)
        p[start + i] = temp[i];
    free(temp);
}

void Swap(float *x, float *y) //交换
{
    float mid;
    mid = *x;
    *x = *y;
    *y = mid;
}