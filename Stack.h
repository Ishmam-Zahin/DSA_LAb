using namespace std;
class Stack{
    int arr[1000];
    string str[1000];
    int iTop=0, sTop=0;
public:
    void iPush(int item){
        arr[iTop]=item;
        iTop++;
    }

    void sPush(string item){
        str[sTop]=item;
        sTop++;
    }

    int iGetSize(){
        return iTop;
    }

    int sGetSize(){
        return sTop;
    }

    int iPop(){
        int tmp=arr[iTop-1];
        iTop--;
        return tmp;
    }

    string sPop(){
        string tmp=str[sTop-1];
        sTop--;
        return tmp;
    }

    int iTopF(){
        return arr[iTop-1];
    }

    string sTopF(){
        return str[sTop-1];
    }
};
