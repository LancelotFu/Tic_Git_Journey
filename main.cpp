/***************************
* Created by LancelotFu    *
* Email: 909104772@qq.com  *
* Phone number: None       *
* On 2022/10/28            *              
****************************/
#include <iostream>
using namespace std;

int* GenerateArray(int max_size)
{
	int arr[max_size];
	for(int i=0;i<=max_size-1;i++)
	{
		arr[i]=i;
	}
	return arr;
}
//����һ��һά����(�Ѹ������鳤�����ֵ)�������ֵ�����ɺ����ڵ��������
void printArray(int* arr, int length)
{
	int array[length];
	for(int i=0;i<=length-1;i++)
	{
		array[i]=i;
	}
	arr=array;
	for(int n=0;n<=length-1;n++)
	{
		cout<<*(arr+n)<<" ";
	}
	cout<<endl;
}
//��������
int insertNum(int* arr, int idx, int num)
{
	int array[100];
	arr=array;
	if(idx>99)
	{
		return 1;
	}
	else
	{
		for(int i=0;i<=100;i++)
		{
			arr[i]=i;
		}
		for(int x=99;x>=idx+1;x--)
		{
			arr[x+1]=arr[x];
		}
		*(arr+idx+1)=num;
		for(int j=0;j<=100;j++)
		{
			cout<<arr[j]<<' ';
		}
		return idx+1;
	}
}
//�ڵ�idxλ�������num, ���ز����num��idx
int removeNum(int* arr, int idx)
{
	int array[100];
	int i;
	arr=array;
	if(idx>99) return 1; 
	else 
	{
		for(i=0;i<=99;i++)
		{
			arr[i]=i;
		}
		for(i=0;i<=99;i++)
		{
			cout<<arr[i]<<" ";
		}
		int temp=arr[idx];
		for(i=idx;i<=98;i++)
		{
			arr[i]=arr[i+1];
		}
		for(i=0;i<=98;i++)
		{
			cout<<arr[i]<<" ";
		}
		return temp;
	}
	
	
}
//ɾ������Ϊidx��ֵ��ɾ���ɹ��򷵻�idx������ֵ
bool updateNum(int* arr, int idx, int num);//���µ�idxλԪ��Ϊnum
bool pop(int* arr);//ɾ�������0��Ԫ��
bool push(int* arr, int num);//����������µ�Ԫ��,��������
bool destroyArray();//������Ӷ���ɾ��
const int& top(int* arr);//��ȡ�����0��Ԫ�أ�����ֵ
const int& indexOf(int* arr, int num);//��������Ԫ�ص�ֵ���ص�ǰԪ�صĵ�һ������ֵ������ޣ��򷵻�-1
const int& getValue(int* arr, int begin, int end, int idx);//����������index��������������ֵΪindex��ֵ
int* arraySort(bool key = true);//��������������ؼ���key��������ʽ��key=true�������򣬿��ţ�ð�ݣ����룬ѡ�񶼿��ԣ����޷�ʽ
int* arrayReverse();//��������
int* arrayStrip(int begin, int end);//������������ֵ����ȡ����������ֵ֮������飬ע�⣬����ֵ����Ϊ��������ʱ�����ȡ

//���еĺ���ʵ���У�ע��߽��жϣ�


int main()
{
    /*** Test ***/
    int *ptr=NULL;
    cout<<insertNum(ptr,30,40)<<endl;
    cout<<removeNum(ptr,40);
}
