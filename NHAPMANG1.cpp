#include <bits/stdc++.h>
using namespace std;
int n=0;
int a[] = {};

int main(){
    cout<<"Nhap so n phan tu: "<<endl;
    cin >> n;
    cout <<"Mang A: \n";
for (int i=0; i<n; i++){
cin >> a[i];
}

cout <<"Cac gia tri chan: "<<endl;
for (int i=0; i<n;i++){
if (a[i]%2 ==0){
    cout << a[i]<<"                                                 "<<endl;
}
}
    system("pause");
    return 0;
}