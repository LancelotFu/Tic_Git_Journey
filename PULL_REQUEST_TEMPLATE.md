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

//遍历数组 
void printArray(int* arr, int length){
	int i;
	for(i=0;i<=length;i++)
	cout<<arr[i];
}

//在第idx位后面插入num, 返回插入的num的idx
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
	
	
	
	//删除索引为idx的值，删除成功则返回idx索引的值 

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
	
	
	
	//更新第idx位元素为num
bool updateNum(int* arr, int idx, int num,int length){
	if(idx<length&&idx>=0){
	int *a = new int (length);
    a=arr;
	arr[idx]=num;
	return true;}
	else return false;
}



//删除数组的0号元素

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



//给数组添加新的元素,添加在最后
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

//将数组从堆区删除
bool destroyArray(int* arr){
	delete [] arr;
	return true;
}


//获取数组的0号元素，返回值
const int& top(int* arr){
	const int &m = arr[0];
	return m;
}

//根据输入元素的值返回当前元素的第一个索引值，如果无，则返回-1
int indexOf(int* arr, int num, int length){
	int i;
	for(i=0;i<length;i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}

//根据所给的排序关键词key决定排序方式：key=true则排升序，快排，冒泡，插入，选择都可以，不限方式
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

//数组逆序
int* arrayReverse(int* arr, int length){
	int b[length];
	int i;
	int *p = new int [length];
	p=b;
	for(i=0;i<length;i++)
	b[i]=arr[length-i];
	return p;
}










