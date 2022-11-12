/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *              
****************************/
#include <iostream>
using namespace std;

int* GenerateArray(int max_size);//����һ��һά����(�Ѹ������鳤�����ֵ)�������ֵ�����ɺ����ڵ��������
void printArray(int* arr, int length);//��������
int insertNum(int* arr, int idx, int num, int length);//�ڵ�idxλ�������num, ���ز����num��idx
int removeNum(int* arr, int idx, int length);//ɾ������Ϊidx��ֵ��ɾ���ɹ��򷵻�idx������ֵ
bool updateNum(int* arr, int idx, int num, int length);//���µ�idxλԪ��Ϊnum
bool pop(int* arr, int length);//ɾ�������0��Ԫ��
bool push(int* arr, int num, int length);//����������µ�Ԫ��,��������
bool destroyArray(int* arr);//������Ӷ���ɾ��
const int& top(int* arr);//��ȡ�����0��Ԫ�أ�����ֵ
int indexOf(int* arr, int num, int length);//��������Ԫ�ص�ֵ���ص�ǰԪ�صĵ�һ������ֵ������ޣ��򷵻�-1
const int& getValue(int* arr, int begin, int end, int idx, int length);//����������index��������������ֵΪindex��ֵ
int* arraySort(int* arr, int length, bool key = true);//��������������ؼ���key��������ʽ��key=true�������򣬿��ţ�ð�ݣ����룬ѡ�񶼿��ԣ����޷�ʽ
int* arrayReverse(int* arr, int length);//��������
//ȷ��begin�ľ���ֵС��end
int* arrayStrip(int* arr, int begin, int end, int length);//������������ֵ����ȡ����������ֵ֮������飬ע�⣬����ֵ����Ϊ��������ʱ�����ȡ

//���еĺ���ʵ���У�ע��߽��жϣ�


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
				  ����̫�� 
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


