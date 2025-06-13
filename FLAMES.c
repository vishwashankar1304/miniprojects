#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int length(char *s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
int calculatecount(char *s1,char *s2){
    int len1=length(s1);
    int len2=length(s2);
    int m1[26]={0};int m2[26]={0};
    int i=0;
    for(i=0;i<len1;i++){
        m1[s1[i]-'a']++;
    }
    for(i=0;i<len2;i++){
        m2[s2[i]-'a']++;
    }
    int res=0;
    for(i=0;i<26;i++){
        res+=abs(m1[i]-m2[i]);
    }
    
        printf("%d ",res);
        return res;
}
void cancelcheck(int count) {
    char arr[] = "flames";
    int len = strlen(arr);
    int pos = 0; 

    while (len > 1) {
        
        int steps = (count % len == 0) ? len : count % len;
        for (int i = 0; i < steps; i++) {
          
            while (arr[pos] == 'r') {
                pos = (pos + 1) % 6;
            }
            if (i < steps - 1) {
                pos = (pos + 1) % 6;
            }
        }

       
        arr[pos] = 'r';
        len--;
        pos = (pos + 1) % 6;
        while (arr[pos] == 'r') {
            pos = (pos + 1) % 6;
        }
    }

 
    for (int i = 0; i < 6; i++) {
        if (arr[i] != 'r') {
            printf("Result: %c\n", arr[i]);
            break;
        }
    }
}

int main(){
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    
    int count=calculatecount(a,b);
   cancelcheck(count);
    return 0;
}
//printf("%s %s",a,b);
