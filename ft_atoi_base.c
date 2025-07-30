
int size_bas(char *bas){
    int size =0;
    while(bas[size]!='\0'){
        size++;
    }
   return size;
}
int ft_bas_cri(char *bas,int size){
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(bas[i]==bas[j]){
                return 0;
            }
        }
     if (bas[i] =='-' ||  bas[i] == '+' || bas[i]<=32 || bas[i] >123){
         return 0;
        }
    }
   return 1;
}
int index_pos(char *bas,char elm){
    for(int i=0;bas[i]!='\0';i++){
        if(bas[i] == elm){
            return i;
        }
    }
    return -1;
}
int ft_atoi_base(char *str, char *bas){
    int size =size_bas(bas);
    if(ft_bas_cri(bas,size) == 1){
        int k =0;
        int result =0;
        int sign = 1;
        
        while(str[k] == ' '|| str[k] == '\n' || str[k] == '\t')k++;
        if(str[k]=='-' || str[k]=='+'){
            if(str[k]=='-'){
            sign = -1;}
            k++;
        }
        while(str[k]!='\0'){
          
            int indx = index_pos(bas,str[k]);//a1= / 
            if(indx==-1){
                break;
            }
            result = result * size + indx;
            k++;
        }
        return result * sign;
    }
    else{
        return 0;
    }
}




