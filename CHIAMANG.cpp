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
/*resultA ban đầu bằng 0, cộng b[0,1,2] vào resultA , đồng thời lấy tongB trừ đi b[0] -> đến khi nào
2 giá trị bằng nhau-> xuất phần tử tại đó 2 mảng bằng nhau */
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