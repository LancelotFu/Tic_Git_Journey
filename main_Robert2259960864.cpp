//
// Created by Robert Shen on 2022/11/7.
//
#include <bits/stdc++.h>
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

int a[10000];

int main(){
    /*** Test ***/
    int *arr = GenerateArray(3);
    printArray(arr, 3);
    insertNum(arr,1,5,3);
    removeNum(arr, 2, 4);//删除索引为idx的值，删除成功则返回idx索引的值
    updateNum(arr, 1, 1, 3);
    pop(arr, 3);
    push(arr, 2, 2);
    destroyArray(arr);
    top(arr);
    indexOf(arr,1,2);
    getValue(arr,0,1,1,2);
    arraySort(arr,2,1);
    arrayStrip(arr,0,2,2);
    return 0;
}

int* GenerateArray(const int max_size){
    //返回一个一维数组(已给定数组长度最大值)，数组的值将会由函数内的输入决定
    for(int i=0; i<max_size; i++) cin>>a[i];
    int *ptr = &a[0];
    return ptr;
}

void printArray(int* arr, int length){
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}//遍历数组

int insertNum(int* arr, int idx, int num, int length){//在第idx位后面插入num, 返回插入的num的idx
    for(int i=length; i>=idx; i--){
        arr[i] = arr[i-1];
    }
    arr[idx-1] = num;
    length++;
    return idx-1;
}

int removeNum(int* arr, int idx, int length){
    for(int i=idx-1; i<length; i++){
        arr[i] = arr[i+1];
    }
    return idx-1;
}

bool updateNum(int* arr, int idx, int num, int length){
    if(length < idx) return 0;
    arr[idx-1] = num;
    return 1;
}//更新第idx位元素为num

bool pop(int* arr, int length){
    for(int i=length-2; i>=0; i++){
        arr[i] = arr[i+1];
    }
    return 1;
}//删除数组的0号元素

bool push(int* arr, int num, int length){//给数组添加新的元素,添加在最后
    arr[length] = num;
    return 1;
}

bool destroyArray(int* arr){//将数组从堆区删除
    if(arr == nullptr) return 0;
    delete arr;
    return 1;
}

const int& top(int* arr){//获取数组的0号元素，返回值
    return arr[0];
}

int indexOf(int* arr, int num, int length){//根据输入元素的值返回当前元素的第一个索引值，如果无，则返回-1
    for(int i=0; i<=length; i++){
        if(num == arr[i]) return i;
    }
    return -1;
}

const int& getValue(int* arr, int begin, int end, int idx, int length){//根据所给的index，返回数组索引值为index的值
    return arr[idx];
}

int* arraySort(int* arr, int length, bool key){//根据所给的排序关键词key决定排序方式：key=true则排升序，快排，冒泡，插入，选择都可以，不限方式
    if(key){
        for(int i=length-1; i>0; i--){
            for(int j=i-1; j>=0; j--){
                if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            }
        }
    }else{
        for(int i=length-1; i>0; i--){
            for(int j=i-1; j>=0; j--){
                if(arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
            }
        }
    }
}

int* arrayReverse(int* arr, int length){
    int tmp[length+1];
    for(int i=0; i<length; i++) tmp[i] = arr[i];
    for(int i=length-1; i>=0; i--) arr[i] = tmp[length-1-i];
}

int* arrayStrip(int* arr, int begin, int end, int length){//给出两个索引值，截取出两个索引值之间的数组，注意，索引值可以为负数，此时逆向截取
    int cur[length];
    int *p = &cur[0];
    if(begin > end) swap(begin, end);
    if(begin < 0 || end < 0){
        for(int i=begin; i<=end; i++){
            p[i-begin] = arr[end-i];
        }
    }else {
        for (int i=begin; i<=end; i++) {
            p[i-begin] = arr[i];
        }
    }
    return p;
}