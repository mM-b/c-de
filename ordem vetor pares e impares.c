#include<stdio.h>
int main(){
    int y,i,j,k,clone;
    scanf("%d",&y);
    int x[y];
    for(i=0;i<y;i++){
    scanf("%d",&x[i]);
}
for(j=0;j<y;j++){
    for(k=j;k<y;k++){
        if(x[j]>x[k]){
            clone=x[j];
            x[j]= x[k];
            x[k]= clone;
        }
    }
}
printf("\n");
for(i=0;i<y;i++){
    if(x[i]%2==0){
        printf("%d\n",x[i]);
    }
}
for(j=0;j<y;j++){
    for(k=j;k<y;k++){ 
            if(x[j]<x[k]){
            clone= x[j]; 
            x[j]= x[k];
            x[k]= clone;
        }
    }
}
for(i=0;i<y;i++){
    if(x[i]%2!=0){
        printf("%d\n",x[i]);
    }
}
    return(0);
}