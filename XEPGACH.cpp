#include <bits/stdc++.h>
using namespace std;
int soChong=0, chuaChia , result=0 , doCaoTb , sai =-1;

int main(){
 ifstream fileIn;
 ofstream fileOut;
 fileIn.open("XEPGACH.INP.txt", ios_base::in);
 fileOut.open("XEPGACH.OUT.txt", ios_base::out);
fileIn >> soChong;
int a[soChong] = {};

for (int i=0; i<soChong; i++){
    fileIn >> a[i];
    chuaChia += a[i];
}
doCaoTb = chuaChia / soChong;
float khac = chuaChia % soChong;

if(khac == 0){
  for (int i=0; i<soChong;i++){
    if (a[i]>doCaoTb){
    result = result + (a[i]-doCaoTb);
  }
  }
  fileOut << result;
}
else {
  fileOut << sai;
}
    fileIn.close();
    fileOut.close();
    system("pause");
    return 0;
}