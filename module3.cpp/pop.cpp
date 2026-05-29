#include<iostream>
using namespace std;
int areaofRectangle(int length, int width){
	return length * width;
}
int main(){
	int length, width;
	cout<<"enter length:";
	cin>>length;
	cout<<"enter width :";
	cin>>width;
	int area = areaofRectangle(length,width);
	cout<<"area of rectangle ="<< area;
	return 0;
}