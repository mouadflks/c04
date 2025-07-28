int ft_strlen(char *str){
    int size =0;
    for(int i =0;str[i]!='\0';i++){
        size++;
    }
    return size;
}
