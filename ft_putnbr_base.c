
#include<unistd.h>
void printn(int nbr,int size){
    char hex[16]="0123456789abcdef";
    char bin[2]="01";
    char bas_8[8]="01234567";
    if(size==16){
        char re = hex[nbr];
        write(1,&re,1);
    }
    if(size==2){
        char re = bin[nbr];
         write(1,&re,1);
    }
    if(size==8){
        char re = bas_8[nbr];
         write(1,&re,1);
    }
}
void putnbr(int nbr,int size){
    if(nbr<0){
        write(1,"-",1);
        nbr = -nbr;
    }
if(nbr>=size){
      putnbr( nbr/size ,size);}
       printn( nbr%size , size);
}
void ft_putnbr_base(int nbr, char *base){
    int size=0;
    int i=0;
    while(base[i]!='\0'){
        size++;i++;
    }
    for(int i =0;i<size-1;i++){
         //printf(" %d",i);
        for(int j =i+1;j<size;j++){
             if(base[i]==base[j]){
                return;
        }}
    }
    putnbr(nbr,size);
}

