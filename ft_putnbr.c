#include<unistd.h>
void putchr(int c){
    char re = '0' + c;
    write(1,&re,1);
}
void ft_putnbr(int nb){
    if(nb<0){
        write(1,"-",1);
    }
    if(nb < 10){
        char r = nb + '0';
        write(1,&r,1);
    }
    while(nb>10){
    ft_putnbr(nb / 10); //123/10=12..1
    putchr(nb % 10);
    break;
    }
}
int main(){
    ft_putnbr(12674473);
    return 0;
}
