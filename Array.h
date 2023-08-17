using namespace std;
class Array{
public:
    int arr[1000];
    int n=0, iCurrentNode=0;
    string str[1000];
    int sn=0, sCurrentNode=0;
public:
    void iPush(int value){
        arr[iCurrentNode]=value;
        n++;
        iCurrentNode++;
    }

    void sPush(string value){
        str[sCurrentNode]=value;
        sn++;
        sCurrentNode++;
    }

    int iGetSize(){
        return n;
    }

    int sGetSize(){
        return sn;
    }

    void xinsert(int item){
        int loc=n;
        for(int i=0; i<n; i++){
            if(item>arr[i]) continue;
            else{
            loc=i;
            break;
            }
        }
        for(int i=n-1; i>=loc; i--){
            arr[i+1]=arr[i];
        }
        arr[loc]=item;
        n++;
    }

    void xinsert(int item, int loc){
        loc--;
        for(int i=n-1; i>=loc; i--){
            arr[i+1]=arr[i];
        }
        arr[loc]=item;
        n++;
    }

    void xdelete(int item){
        int loc=sn;
        for(int i=0; i<n; i++){
            if(arr[i]==item){
                loc=i;
                break;
            }
        }
        for(int i=loc; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        n--;
    }

    void xinsert(string item){
        int loc=sn;
        for(int i=0; i<sn; i++){
            if(item>str[i]) continue;
            else{
                loc=i;
                break;
            }
        }
        for(int i=sn-1; i>=loc; i--){
            str[i+1]=str[i];
        }
        str[loc]=item;
        sn++;
    }

    void xinsert(string item, int loc){
        loc--;
        for(int i=sn-1; i>=loc; i--){
            str[i+1]=str[i];
        }
        str[loc]=item;
        sn++;
    }

    void xdelete(string item){
        int loc=sn;
        for(int i=0; i<sn; i++){
            if(str[i]==item){
                loc=i;
                break;
            }
        }
        for(int i=loc; i<sn-1; i++){
            str[i]=str[i+1];
        }
        sn--;
    }

    void iSort(){
        for(int i=n-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    void sSort(){
        for(int i=sn-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(str[j]>str[j+1]){
                    string tmp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=tmp;
                }
            }
        }
    }
};
