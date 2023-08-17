#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"

using namespace std;

int main(){
    Array obj;
    obj.iPush(3);
    obj.iPush(1);
    obj.iPush(2);
    obj.sPush("abc");
    obj.sPush("eac");
    obj.sPush("cac");


    for(int i=0; i<obj.sGetSize(); i++) cout<<obj.str[i]<<' ';

}
