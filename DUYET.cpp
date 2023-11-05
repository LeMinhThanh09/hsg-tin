#include <bits/stdc++.h>
using namespace std;
int s1 =0, s2=0, s3=0, s4=0;
int n,b=1;
int c;

int main(){
cout << "Nhap so phan tu n"<<endl;
cin >> n;
c =n;
int a[n]= {};

cout <<"Nhap cac phan tu"<<endl;
for (int i = 0; i<n; i++){
    cin >> a[i];
    s1 += a[i];
    s2 += pow(a[i],b);
    b+=1;

    if (a[i]%3 == 0){
    s3 += a[i];
    }

    s4 += pow(a[i],c);
    c = c-1;
}
cout <<"s1= "<< s1<<" "<<endl;
cout <<"s2= "<< s2<<" "<<endl;
cout <<"s3= "<< s3<<" "<<endl;
cout <<"s4= "<< s4<<" "<<endl;
system("pause");
return 0;
}