void main(){
    char str[]= "My 143! Name is &*";
    char ch[20];
    int len = strlen(str),j=0;

    for(int i=0; i<len; i++){
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
            ch[j]=str[i];
            j++;
        }
    }
    ch[j]='\0';
    printf("%s",ch);
}