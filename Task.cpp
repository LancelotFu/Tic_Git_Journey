/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *
****************************/
#include <iostream>
using namespace std;

int* GenerateArray(int max_size)//����һ��һά����(�Ѹ������鳤�����ֵ)�������ֵ�����ɺ����ڵ��������
{
    int i = 0;
    int str[1000] = { 0 };
    for (i = 0; i < max_size; i++)
    {
        scanf("%d", &str[i]);
    }
    return str;
}
void printArray(int* arr, int length)//��������
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}
int insertNum(int* arr, int idx, int num, int length)//�ڵ�idxλ�������num, ���ز����num��idx
{
    int i = 0;
    if (length > idx + 1)
    {
        return -1;
    }
    else
    {
        for (i = length - 1; i > idx; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[idx + 1] = num;
        return idx + 1;
    }
}
int removeNum(int* arr, int idx, int length)//ɾ������Ϊidx��ֵ��ɾ���ɹ��򷵻�idx������ֵ
{
    int i = 0;
    int m = arr[idx];
    for (i = idx; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return m;
}
bool updateNum(int* arr, int idx, int num, int length)//���µ�idxλԪ��Ϊnum
{
    if (idx >= 0 && idx < length)
    {
        arr[idx] = num;
    }
    else
    {
        return -1;
    }
}
bool pop(int* arr, int length)//ɾ�������0��Ԫ��
{
    int i = 0;
    for (i = 1; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[length - 1] = 0;
}
bool push(int* arr, int num, int length)//����������µ�Ԫ��,��������
{
    scanf("%d", &num);
    arr[length] = num;
}
bool destroyArray(int* arr)//������Ӷ���ɾ��
{
    delete(*arr);
}
const int& top(int* arr)//��ȡ�����0��Ԫ�أ�����ֵ
{
    int n = 0;
    n = arr[0];
    return n;
}
int indexOf(int* arr, int num, int length);//��������Ԫ�ص�ֵ���ص�ǰԪ�صĵ�һ������ֵ������ޣ��򷵻�-1
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        if (strcmp(pc->arr[i], num) == 0)
        {
            return i;
        }
    }
    return -1;
}
const int& getValue(int* arr, int begin, int end, int idx, int length)//����������index��������������ֵΪindex��ֵ
{
    if (idx >= 0 && idx < length)
    {
        return arr[idx];
    }
    else
    {
        return -1;
    }
}
int* arraySort(int* arr, int length, bool key = true)//��������������ؼ���key��������ʽ��key=true�������򣬿��ţ�ð�ݣ����룬ѡ�񶼿��ԣ����޷�ʽ
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j++])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
int* arrayReverse(int* arr, int length)//��������
{
    int str[length] = 0;
    int i = 0;
    for (i = 0; i < length; i++)
    {
        str[i] = arr[length - 1 - i];
    }
    return *str;
}
//ȷ��begin�ľ���ֵС��end
int* arrayStrip(int* arr, int begin, int end, int length)//������������ֵ����ȡ����������ֵ֮������飬ע�⣬����ֵ����Ϊ��������ʱ�����ȡ
{
    int str[length] = { 0 };
    int i = 0;
    if (begin >= 0 && end >= 0 && end > begin && end < length)
    {
        int m = end - begin;
        for (i = 0; i < m; i++)
        {
            str[i] = arr[begin + i];
        }
        return *str;
    }
    if (begin <= 0 && end <= 0 && end < begin && -end < length)
    {
        int n = begin - end;
        for (i = 0; i < n; i++)
        {
            str[i] = arr[-end - i];
        }
        return *str;
    }
    else
    {
        return NULL;
    }
}

//���еĺ���ʵ���У�ע��߽��жϣ�


int main() {
    /*** Test ***/

    return 0;
}