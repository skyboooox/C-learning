#include<stdio.h>
int main(){
    int x,y,z;
    printf("��������������");
    scanf_s("%d%d%d",&x,&y,&z);
    if(x<y){
        int zuida=x;
        x=y;
        y=zuida;
    }
    if(x<z){
        int zuida =x;
        x=z;
        z=zuida;
    }  
    if(y<z){
        int zuida =y;
        y=z;
        z=zuida;
    }
    printf("˳��\n %d\n %d\n %d\n",x,y,z);
}
