Related Issue
Reason(purpose, problem)
Description(do, change)
Test case(new, change, influence)


int* GenerateArray(int max_size)
{
int a[max_size];
	int i;
	for(i=0;i<=max_size-1;i++)
	cin>>a[i];
	int *p =new int [max_size];
	p=a;
	return p;
}

//�������� 
void printArray(int* arr, int length){
	int i;
	for(i=0;i<=length;i++)
	cout<<arr[i];
}

//�ڵ�idxλ�������num, ���ز����num��idx
int insertNum(int* arr, int idx, int num,int length){
	int i;
	if(idx<length&&idx>=0){
	
	for(i=idx;i<length;i++)
	{
		arr[i+1]=arr[i];
	}
	arr[idx]=num;
	int *a = new int (length);
    a=arr;
	return idx;}
	else return -1;
	}
	
	
	
	//ɾ������Ϊidx��ֵ��ɾ���ɹ��򷵻�idx������ֵ 

int removeNum(int* arr, int idx,int length){
	int i,j=0,t=0;
	
	for(i=0;i<length;i++)
	{
		if(arr[i]==idx){
			for(j=i;j<length;j++)
			arr[j]=arr[j+1];
			t++;
		}		
	}
if(t) return arr[idx];
else return -1;
	}
	
	
	
	//���µ�idxλԪ��Ϊnum
bool updateNum(int* arr, int idx, int num,int length){
	if(idx<length&&idx>=0){
	int *a = new int (length);
    a=arr;
	arr[idx]=num;
	return true;}
	else return false;
}



//ɾ�������0��Ԫ��

bool pop(int* arr,int length){
  int i,j;
  int *a = new int (length);
    a=arr;
  for(i=0,j=0;i<length;j++){
  	arr[j]=arr[i+1];
  	i++;
  }  
  arr[n]=0; 
  return true;    
}



//����������µ�Ԫ��,��������
bool push(int* arr,int length,int num){
  int j=0;
    int array[length+1];
    int *a = new int (length+1);
    a=array;
    for(j=0;j<length;j++)
    array[j]=arr[j];
    array[length+1]=num;
    int *a = new int (length+1);
    a=array;
      return true;
	}

//������Ӷ���ɾ��
bool destroyArray(int* arr){
	delete [] arr;
	return true;
}


//��ȡ�����0��Ԫ�أ�����ֵ
const int& top(int* arr){
	const int &m = arr[0];
	return m;
}

//��������Ԫ�ص�ֵ���ص�ǰԪ�صĵ�һ������ֵ������ޣ��򷵻�-1
int indexOf(int* arr, int num, int length){
	int i;
	for(i=0;i<length;i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}

//��������������ؼ���key��������ʽ��key=true�������򣬿��ţ�ð�ݣ����룬ѡ�񶼿��ԣ����޷�ʽ
int* arraySort(int* arr, int length, bool key){
     int temp,i,j;
	if(key){
	for(i=0;i<length;i++){
			for(j=0;j<length-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		}
	}
}int *p= new int [length];
p=arr;
return p;
}
	else return arr;	
}

//��������
int* arrayReverse(int* arr, int length){
	int b[length];
	int i;
	int *p = new int [length];
	p=b;
	for(i=0;i<length;i++)
	b[i]=arr[length-i];
	return p;
}










