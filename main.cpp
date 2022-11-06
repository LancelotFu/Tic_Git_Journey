/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *              
****************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <random>
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

int* GenerateArray(int max_size){
    default_random_engine engine;
    uniform_int_distribution<int>uniformIntDistribution(1, 100);
    int* arr = new int[max_size];
    for(int i = 0; i < max_size; i++){
        arr[i] = uniformIntDistribution(engine);
    }
    return arr;
}

void printArray(int *arr, int length){
    if(arr == nullptr){
        cout << "数组为空" << endl;
        return;
    }
    for(int i = 0; i < length; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int insertNum(int* arr, int idx, int num, int length){
    if(arr == nullptr){
        cout << "数组为空，无法完成操作" << endl;
        return -1;
    }
    if(idx < 0 || idx > length){
        cout << "越界，操作无法完成" << endl;
        return -1;
    }
    int* new_arr = new int[length + 1];
    for(int i = 0; i < length; i++){
        new_arr[i] = arr[i];
    }
    new_arr[length] = num;
    for(int i = length; i > idx; i--){
        swap(new_arr[i], new_arr[i - 1]);
    }
    *arr = *new_arr;
    return idx + 1;
}

int removeNum(int* arr, int idx, int length){
    if(idx < 0 || idx >= length){
        cout << "越界，操作无法完成" << endl;
        return -1;
    }
    if(arr == nullptr){
        cout << "数组为空，无法操作" << endl;
        return -1;
    }
    int* new_arr = new int[length - 1];
    for(int i = idx; i < length - 1; i++){
        swap(arr[i], arr[i + 1]);
    }
    for(int i = 0; i < length - 1; i++){
        new_arr[i] = arr[i];
    }
    *arr = *new_arr;
    return idx;
}

bool updateNum(int* arr, int idx, int num, int length){
    if(idx < 0 || idx >= length){
        cout << "越界，操作无法完成" << endl;
        return -1;
    }
    if(arr == nullptr){
        cout << "数组为空，无法操作" << endl;
        return -1;
    }
    arr[idx] = num;
    return true;
}

bool pop(int* arr, int length){
    if(removeNum(arr, 0, length) == 0){
        return true;
    }
    return false;
}

bool push(int* arr, int num, int length){
    if(insertNum(arr, length, num, length) != -1){
        return true;
    }
    return false;
}

bool destroyArray(int* arr){
    if(arr == nullptr){
        cout << "空数组，无法完成操作" << endl;
        return false;
    }
    delete[] arr;
    return true;
}

const int& top(int* arr){
    if(arr == nullptr){
        cout << "数组为空，无法操作" << endl;
        return -1;
    }
    return arr[0];
}

int indexOf(int* arr, int num, int length){
    for(int i = 0; i < length; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

void quickSort(int* arr, int left, int right){
    if(left >= right){
        return;
    }
    int i, j, base, temp;
    i = left,j = right;
    base = arr[left];
    while(i < j){
        while(arr[j] >= base && i < j)j--;
        while(arr[i] <= base && i < j)i++;
        if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[left] = arr[i];
    arr[i] = base;
    quickSort(arr, left, i-1);
    quickSort(arr, i+1, right);
}

int* arraySort(int* arr, int length, bool key){
    quickSort(arr, 0, length - 1);
    if(key == 1){
        return arr;
    }
    else{
        return arrayReverse(arr, length);
    }
}

const int& getValue(int* arr, int begin, int end, int idx, int length){
    if(idx < 0 || idx >= length || begin < 0 || end >= length) {
        cout << "越界，操作无法完成" << endl;
        return -1;
    }
    if(arr == nullptr){
        cout << "数组为空，无法操作" << endl;
        return -1;
    }
    return arr[idx];
}

int* arrayReverse(int* arr, int length){
    for(int i = 0; i < length / 2; i++){
        swap(arr[i], arr[length - 1 - i]);
    }
    return arr;
}


//确保begin的绝对值小于end(2, 13), (-2, -13)
int* arrayStrip(int* arr, int begin, int end, int length){
    if(abs(begin) < 0 || abs(end) >= length) {
        cout << "越界，操作无法完成" << endl;
        return arr;
    }
    if(arr == nullptr){
        cout << "数组为空，无法操作" << endl;
        return arr;
    }
    if(begin * end < 0 || begin == end) {
        cout << "非法输入" << endl;
    }
    int new_length = abs(end - begin);
    int* new_arr = new int[new_length];
    if(end > 0) {
        for(int i = begin; i < end; i++){
            new_arr[i - begin] = arr[i];
        }
        return new_arr;
    }
    else{
        for(int i = length + begin; i > length + end; i--){
            new_arr[length + begin - i] = arr[i];
        }
        return new_arr;
    }

}

int main(){
    /*** Test ***/
    int* arr = GenerateArray(50);
    printArray(arr, 50);

    return 0;
}
