#include <bits/stdc++.h>
using namespace std;
int n,tongB=0;
int resultA=0,resultB,bientamthoiA,bientamthoiB;

int main(){

cout <<"Nhap so phan tu n: "<<endl;
cin >> n;
int b[n]= {};
int a[n]={};
cout <<"Nhap cac phan tu: \n";
for (int i=0; i<n; i++){
    cin >> b[i];
    tongB+=b[i];
    resultB =tongB;
}
for (int i=0;i<n;i++){
    resultA+= b[i];
    resultB-=b[i];
    if(resultA==resultB){
        bientamthoiB=b[i];
        bientamthoiA = resultA;
        break;
    }
}
if(bientamthoiA==resultB){
    cout<<bientamthoiB;
}
else{
    cout<<"0";
}
    system("pause");
    return 0;
}