#include<bits/stdc++.h>
#include"LinkList.h"
#include"Array.h"
#include"Stack.h"

using namespace std;

int main(){
    int result=0, x=0;
    string expression="12,6,/,8,*,3,-,20,22,+,-";
    //cout<<expression;
    Stack obj;
    for(int i=0; i<expression.size(); i++){
        string str="";
        if(expression[i]==','){
            str=expression.substr(x, i-x);
            x=i+1;
        }
        else if(i+1==expression.size()){
            str=expression.substr(x);
        }
        if(str=="") continue;

        if(str=="+"){
           int num1=stoi(obj.sPop());
           int num2=stoi(obj.sPop());
           int tmp=num1+num2;
           string tmpstr=to_string(tmp);
           obj.sPush(tmpstr);
           //cout<<tmpstr<<'\n';

        }
        else if(str=="-"){
           int num1=stoi(obj.sPop());
           int num2=stoi(obj.sPop());
           int tmp=num2-num1;
           string tmpstr=to_string(tmp);
           obj.sPush(tmpstr);
           //cout<<tmpstr<<'\n';
        }
        else if(str=="*"){
           int num1=stoi(obj.sPop());
           int num2=stoi(obj.sPop());
           int tmp=num1*num2;
           string tmpstr=to_string(tmp);
           obj.sPush(tmpstr);
           //cout<<tmpstr<<'\n';
        }
        else if(str=="/"){
           int num1=stoi(obj.sPop());
           int num2=stoi(obj.sPop());
           int tmp=num2/num1;
           string tmpstr=to_string(tmp);
           obj.sPush(tmpstr);
           //cout<<tmpstr<<'\n';
        }
        else if(str=="^"){
           int num1=stoi(obj.sPop());
           int num2=stoi(obj.sPop());
           int tmp=pow(num2, num1);
           string tmpstr=to_string(tmp);
           obj.sPush(tmpstr);
           //cout<<tmpstr<<'\n';
        }
        else{
            obj.sPush(str);
        }
    }

    cout<<obj.sPop()<<'\n';
}
