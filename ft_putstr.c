#include<unistd.h>
int ft_strlen(char *str){
    int size =0;
    for(int i =0;str[i]!='\0';i++){
        size++;
    }
    return size;
}
void ft_putstr(char *str){
    int size =ft_strlen(str);
    write(1,str,size);
}
int main(){
    char strn[]="just write !!!";
    ft_putstr(strn);
}
