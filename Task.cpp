/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *
****************************/
#include <iostream>
using namespace std;

int* GenerateArray(int max_size)//返回一个一维数组(已给定数组长度最大值)，数组的值将会由函数内的输入决定
{
    int i = 0;
    int str[1000] = { 0 };
    for (i = 0; i < max_size; i++)
    {
        scanf("%d", &str[i]);
    }
    return str;
}
void printArray(int* arr, int length)//遍历数组
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}
int insertNum(int* arr, int idx, int num, int length)//在第idx位后面插入num, 返回插入的num的idx
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
int removeNum(int* arr, int idx, int length)//删除索引为idx的值，删除成功则返回idx索引的值
{
    int i = 0;
    int m = arr[idx];
    for (i = idx; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return m;
}
bool updateNum(int* arr, int idx, int num, int length)//更新第idx位元素为num
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
bool pop(int* arr, int length)//删除数组的0号元素
{
    int i = 0;
    for (i = 1; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[length - 1] = 0;
}
bool push(int* arr, int num, int length)//给数组添加新的元素,添加在最后
{
    scanf("%d", &num);
    arr[length] = num;
}
bool destroyArray(int* arr)//将数组从堆区删除
{
    delete(*arr);
}
const int& top(int* arr)//获取数组的0号元素，返回值
{
    int n = 0;
    n = arr[0];
    return n;
}
int indexOf(int* arr, int num, int length);//根据输入元素的值返回当前元素的第一个索引值，如果无，则返回-1
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
const int& getValue(int* arr, int begin, int end, int idx, int length)//根据所给的index，返回数组索引值为index的值
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
int* arraySort(int* arr, int length, bool key = true)//根据所给的排序关键词key决定排序方式：key=true则排升序，快排，冒泡，插入，选择都可以，不限方式
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
int* arrayReverse(int* arr, int length)//数组逆序
{
    int str[length] = 0;
    int i = 0;
    for (i = 0; i < length; i++)
    {
        str[i] = arr[length - 1 - i];
    }
    return *str;
}
//确保begin的绝对值小于end
int* arrayStrip(int* arr, int begin, int end, int length)//给出两个索引值，截取出两个索引值之间的数组，注意，索引值可以为负数，此时逆向截取
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

//所有的函数实现中，注意边界判断！


int main() {
    /*** Test ***/

    return 0;
}