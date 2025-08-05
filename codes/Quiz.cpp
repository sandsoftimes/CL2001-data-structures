#include<iostream>
using namespace std;
int main(){

	int a[6]={2,45,5,7,4,53};
int	b[6]={52,7,5,6,4,45};
int *a1,*b1;
a1=a;int k=0;
b1=b;int x=0,y=0;int z=0;
for(int i=0;i<6;i++){
	if(*a1==*b1&&x==y){
		z++;
	}
	
	*a1++;
	*b1++;

}
b1=b;a1=a;
for(int i=0;i<6;i++){
for(int y=0;y<6;y++){

if(*a1==*b1){
	k++;
}
b1++;
}	
b1=b;a1++;
}
cout<<k;
}
