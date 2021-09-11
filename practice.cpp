#include <iostream>
using namespace std;
#define MAX 100
int main()
{
cout << " Creation , deletion , insertion Operation on array " << endl;
int size;
char choice; 
int arr[100];
cout << " Enter the array size ";
cin >> size;
cout << "Enter elements of the array ";
for (int i = 0; i < size; i++)
{
int size;
cin>>arr[i];
}
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}
cout << endl;
cout << "arr of size: "<<size<<" is successfully created. "<<endl;
do
{
cout << "The Instructions are:  " << endl;
cout<<endl;
cout << "1. Press 1 to Insert an element" << endl;
cout << "2. Press 2 to Delete an element" << endl;
cout << "3. Press 3 to Traverse the array" << endl;
cout<<endl;

int key;
cout << "Press key  to carry the above operations:  ";
cin>>key;
switch (key){
case 1:
cout << "You have selected Insertion " << endl;
int num;
int p1;
cout << "Enter the value you want to insert:  ";
cin >> num;
cout << "Enter the position you want to insert at:  ";
cin >> p1;
if (p1 > 0 and p1 < (size + 1)){
for (int i = (size - 1); i >= (p1 - 1); i--){
arr[i + 1] = arr[i];
}
arr[p1 - 1] = num;
size++;
cout<<"The array after insertion is:  "<<endl;
for(int i = 0; i < size; i++) 
{
cout << arr[i] << " ";
}
}
else
{
cout << "Enter the position from 1 to  " << size << " only"<<endl;
}
break;

case 2:
cout << "You have selected for deletion " << endl;
int p2;
if (size <= MAX)
{
cout << "the postion you want to delete the element at:  ";
cin >> p2;
cout<<endl;
if (p2 > 0 and p2 <= size)
{
int num = arr[p2 - 1];
for (int k = p2 - 1; k < size - 1; k++)
{
arr[k] = arr[k + 1];
}
size--;
cout<<" the array after deletion "<<endl;
for (int i = 0; i< size; i++)
{
cout << arr[i] << " ";
}
cout << "The deleted Element is:  " << num;
}
else
{
cout << "enter valid positions only to carry deletion"<<endl;
}
}
else
{
cout << "The max size is only upto " << MAX<<endl;
}
break;

case 3:
cout << "You have selected for Traversal " << endl;

if (size < MAX)
{
for (int i = 0;i < size; i++)
{
cout << arr[i] << " ";
}
}
else
{ 
cout << "SORRY! The Overflow Condition"<<endl;
}
break;

default:
cout << "The key is not correct. Enter valid Key"<<endl;
}
cout << " (Press y/n):: n for stop, y for continue"<<endl;
cin >> choice;
} while (choice == 'y');
} 

