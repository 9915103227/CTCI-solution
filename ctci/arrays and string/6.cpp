char *encode(char *src)
{     
  //Your code here 
 // char str[10000];
 int len=strlen(src);
 char *str=(char *)malloc(sizeof(char)*(2*len+1));
  int j=0;
  char prev=src[0];
  int occ=1;
  int i=1;
  while(*(src+i)!='\0'){
     if(*(src+i)==prev)
        occ++;
    else{
        str[j++]=prev;
        str[j++]=occ+'0';
        prev=*(src+i);
        occ=1;
    }
    i++;
  }
  str[j++]=prev;
  str[j++]=occ+'0';
  str[j]='\0';
  //cout<<str;
  return &str[0];
}