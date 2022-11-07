/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *              
****************************/
#include <iostream>
using namespace std;

int* GenerateArray(int max_size);//返回一个一维数组(已给定数组长度最大值)，数组的值将会由函数内的输入决定
void printArray(int* arr, int length);//遍历数组
int insertNum(int* arr, int idx, int num, int length);//在第idx位后面插入num, 返回插入的num的idx
int removeNum(int* arr, int idx, int length);//删除索引为idx的值，删除成功则返回idx索引的值
bool updateNum(int* arr, int idx, int num, int length);//更新第idx位元素为num
bool pop(int* arr, int length);//删除数组的0号元素
bool push(int* arr, int num, int length);//给数组添加新的元素,添加在最后
bool destroyArray(int* arr);//将数组从堆区删除
const int& top(int* arr);//获取数组的0号元素，返回值
int indexOf(int* arr, int num, int length);//根据输入元素的值返回当前元素的第一个索引值，如果无，则返回-1
const int& getValue(int* arr, int begin, int end, int idx, int length);//根据所给的index，返回数组索引值为index的值
int* arraySort(int* arr, int length, bool key = true);//根据所给的排序关键词key决定排序方式：key=true则排升序，快排，冒泡，插入，选择都可以，不限方式
int* arrayReverse(int* arr, int length);//数组逆序
//确保begin的绝对值小于end
int* arrayStrip(int* arr, int begin, int end, int length);//给出两个索引值，截取出两个索引值之间的数组，注意，索引值可以为负数，此时逆向截取

//所有的函数实现中，注意边界判断！


int main(){
    /*** Test ***/

    return 0;
}
