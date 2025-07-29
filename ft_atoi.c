
int ft_atoi(char *str){
    for(int i =0;str[i]!='\0';i++){
        while (str[i]==' '|| (str[i]>=9 && str[i]<=13)){
            i++;
          }
          int gri=0;
          int min =0;
        while(str[i]==43 || str[i]==45){
            if(str[i]==43){
                gri++;
            }
            if(str[i]==45){
                min++;
            }i++;
        }

     int re = 0;
    while(str[i]>='1' && str[i]<='9'){

        re = re * 10 +( str[i] -'0');
        i++;

    }
     if(min>gri){
           re = re * -1;
        }
        return re;
}}
