#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"

using namespace std;

int main(){
    Array v, a;
    v.iPush(12);
    v.iPush(13);
    v.iPush(10);
    v.iPush(9);

    //v elements
    for(int i=0; i<v.iGetSize(); i++) cout<<v.arr[i]<<'\n';

    for(int i=0; i<v.iGetSize(); i++){
        a.xinsert(v.arr[i]);
    }

    //a elements
    for(int i=0; i<a.iGetSize(); i++) cout<<a.arr[i]<<'\n';
}
