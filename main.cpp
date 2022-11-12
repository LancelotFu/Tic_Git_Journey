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
int* GenerateArray(int max_size)
{
	int arr[max_size];
	for(int i=0;i<max_size;i++)
	{
		arr[i]=i;
	}
	return arr;
}
void printArray(int* arr, int length)
{
	for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	}
	return;
}
int insertNum(int* arr, int idx, int num, int length)
{
	if(idx>=length) return 1;
	else 
	{
		int array[length+1];
		for(int j=0;j<length;j++)
		{
			array[j]=arr[j];
		}
		for(int i=length;i>idx+1;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[idx+1]=num;
		return idx+1;
	}
}
int removeNum(int* arr, int idx, int length)
{
	if(idx>=length) return 1;
	else 
	{
		for(int i=idx;i<length-1;i++)
		{
			arr[i]=arr[i+1];
		}
		return idx;
	}
}
bool updateNum(int* arr, int idx, int num, int length)
{
	if(idx>=length) return false;
	else{
		arr[idx]=num;
		return true;
	}
}
bool pop(int* arr, int length)
{
	for(int i=0;i<length-1;i++)
	{
		arr[i]=arr[i+1];
		return true;
	}
}
bool push(int* arr, int num, int length)
{
	int *array=new int[length+1];
	array[length]=num;
	for(int i=0;i<length;i++)
	{
		array[i]=arr[i];
	}
	return true;
}
bool destroyArray(int* arr)
{
	delete[] arr;
	return true;
}
const int& top(int* arr)
{
	return arr[0];
}
int indexOf(int* arr, int num, int length)
{
	for(int i=0;i<length;i++)
	{
		if(num==arr[i]) return i;
	}
	return -1;
}
const int& getValue(int* arr, int begin, int end, int idx, int length)
{
	//I dont understand what this means.
}
int* arraySort(int* arr, int length, bool key)
{
	int temp=0;
	if(key==true)
	{
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<length-i-1;j++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	}
	else if(key==false)
	{
		for(int i=0;i<length;i++)
	{
		for(int j=0;j<length-i-1;j++)
		{
			if(arr[i]<arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	}
	return arr;
}
int* arrayReverse(int* arr, int length)
{
	int b[length];
	for(int i=0;i<length;i++)
	{
		b[i]=arr[i];
	}
	for(int j=0;j<length;j++)
	{
		arr[j]=b[length-j-1];
	}
	return arr;
}
int* arrayStrip(int* arr, int begin, int end, int length)
{
	int * array=new int[end-begin+1];
	for(int i=begin;i<=end;i++)
	{
		array[i]=arr[i];
	}
	return array;
}
/*I am Idol trainee Caixukun and have practiced for two and a half years.I am from America.I like Sing Dance Rap Basketball.Music~~
				  鸡你太美 
                   ??????
                   ?????
                    ????
                ???????
               ?? ???????  ?
            ??  ???????   ??
        ??     ???????      ??        
    ??       ???????          ??
  ??       ????????       ????
? ?       ???????          ?????
?            ????????         ???
                ????????
                  ????    ???
                   ???         ???
                     ??              ??
                     ??                ??
                      ??                ??
                      ??                ??
                    ? ?                ??
                    ? ?                ????
                     ??                ?? ??
                    ??
My school card ID is 202219198101
Coming to me for fun is welcome*/


