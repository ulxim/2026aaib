///week09-5.cpp 想要更了解大到小的排序
#include <stdio.h>
int main()
{
    int a[10]={11,22,33,44,55,66,77,88,99,97};

    for (int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");


        for(int i=0;i<10-1;i++){
           if(a[i]<a[i+1]){
             int temp =a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");

}

