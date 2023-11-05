#include <bits/stdc++.h>
using namespace std;
int n=0,k=0;

int main(){
    cout<<"Nhap so n phan tu: "<<endl;
    cin>> n;
    cout<<"Nhap so k: "<<endl;
    cin>> k;
    int a[n] = {};
    cout<<"Nhap cac phan tu cua mang: "<<endl;
for (int i=0; i<n;i++){
cin>> a[i];
}

for (int i=0; i<n;i++){
if (a[i]==a[k]){
    cout<<"a["<<i<<"]"<<" ";

}
}


    system("pause");
    return 0;
}