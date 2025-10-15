#include<iostream>
using namespace std;

template<typename T>
void bubblesort(T arr[],int n)	
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				T temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

template < typename T>
void printarray(T arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;

	// Integer array
	int arrint[n];
	cout<<"Enter "<<n<<" integer elements: \n";
	for(int i=0;i<n;i++)
		cin>>arrint[i];
	cout<<"Original integer array: ";
	printarray(arrint,n);
	bubblesort(arrint,n);
	cout<<"Sorted integer array: ";
	printarray(arrint,n);

	float arrfloat[n];
	cout<<"\nEnter "<<n<<" float elements: \n";
	for(int i=0;i<n;i++)
		cin>>arrfloat[i];
	cout<<"Original float array: "; 
	printarray(arrfloat,n);
	bubblesort(arrfloat,n);
	cout<<"Sorted float array: ";
	printarray(arrfloat,n);

	cout<<"\nEnter "<<n<<" char elements: \n";
	for(int i=0;i<n;i++)
		cin>>arrchar[i];
	cout<<"Original char array: ";
	printarray(arrchar,n);
	bubblesort(arrchar,n);
	cout<<"Sorted char array: ";
	printarray(arrchar,n);

	return 0;
}
