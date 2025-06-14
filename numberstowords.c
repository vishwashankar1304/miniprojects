#include<stdio.h>
#include<math.h>
#include<stdlib.h>

char *ones(int n) {
    switch(n) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "Invalid";
    }
}
char *elevenes(int n)
{
    char s[10];
     switch(n)
    {
        case 11:
             return "eleven";
            
        case 12:
            return "twelve";
            
        case 13:
           return "thirteen";
        case 14:
           return "fourteen";
        
        case 15:
            return "fifteen";
        case 16:
            return "sixteen";
        case 17:
            return "seventeen";
        case 18:
            return "eighteen";
        case 19:
            return "nineteen";
    }
   
}
char *tens(int n)
{
   
     switch(n)
    {
        case 10:
            return "ten";
        case 20:
            return "twenty";
        case 30:
           return "thirty";
        case 40:
            return "forty";
        case 50:
            return "fifty";
        case 60:
            return "sixty";
        case 70:
            return "seventy";
        case 80:
            return"eighty";
        case 90:
            return "ninety";
    }

}
char *hundreds(int n)
{
    
   
    switch(n)
    {
        case 100:
            return "one hundred";
        case 200:
            return "two hundred";
        case 300:
          return "three hundred";
        case 400:
            return "four hundred";
        case 500:
            return "five hundred";
        case 600:
            return "six hundred";
        case 700:
            return "seven hundred";
        case 800:
            return "eight hundred";
        case 900:
            return "nine hundred";
    }
     
}

int main()
{
    
   long long num,rem1,rem2,rem3;
    char a[100];
    printf("\nEnter the number :");
    
    scanf("%lld",&num);
    
    printf("\nnumber to words :");
    if(num<0)printf("Negative ");
    num=abs(num);
    if(num==0)
    {
        printf("Zero");//for zero
    }
    
    
    
    
    else if(num>10 && num<20)
    {
        printf("%s ",elevenes(num));//for 11 to 20
    }
    
    
    
    else if(num<10)
    {
        printf("%s ",ones(num));//for 1 to 9
    }
    
    
    
    
    else if(num>=20 && num<100 || num==10)
    { 
            rem1=num%10;
            
            num=num/10;
            rem2=num%10;
            if(rem1!=0)
            {
            printf("%s %s",tens(rem2*10),ones(rem1));// for 10 and 20 to 99
            }
            else{
                printf("%s",tens(rem2*10));//for only 10 20 30 40 50 60 70 80 90
            }
    }
    
    
    
    
    
    else if(num>=100 && num<1000)// for 100 and 1000
    {
        rem1=num%10;
        if(num%100>10 && num%100<20)
        {
        rem2=(num%100);
        num=num/10;
        }
        else{
            num=num/10;
            rem2=(num%10);
        }
        num=num/10;
        rem3=(num%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s",hundreds(rem3),ones(rem1));//for 100
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s",hundreds(rem3),tens(rem2*10),ones(rem1));
        }
        
    }
    
    
    
    else if(num>=1000 && num<100000){   // for 1000 to 100000
        long t=num/1000;
        if(t<10)
        printf("%s thousand ",ones(t));
        else if(t>10 && t<20 )
        printf("%s thousand ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s thousand ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s thousand ",tens(rem2*10));
            }
        }
        long num1=num%1000;
        if(num1==0)
            {main();}
         if(num1>10 && num1<20)
    {
        printf("%s ",elevenes(num1));
    }
    else if(num1<10)
    {
        printf("%s ",ones(num1));
    }
    else if(num1>=20 && num1<100 || num1==10)
    { 
            rem1=num1%10;
            
            num1=num1/10;
            rem2=num1%10;
            if(rem1!=0)
            {
            printf("%s %s",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s",tens(rem2*10));
            }
    }
        else if(num1>=100 && num1<1000)
    {
        rem1=num1%10;
        if(num1%100>10 && num1%100<20)
        {
        rem2=(num1%100);
        num1=num1/10;
        }
        else{
            num1=num1/10;
            rem2=(num1%10);
        }
        num1=num1/10;
        rem3=(num1%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s",hundreds(rem3),ones(rem1));
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s",hundreds(rem3),tens(rem2*10),ones(rem1));
        }
        
    }
        
        
    }
     
     
     
     
     else if(num>=100000 && num<10000000){   // for 100000   to 99lakh 99 thousand 999
         long t=num/100000;
         if(t<10)
        printf("%s lakh ",ones(t));
        else if(t>10 && t<20 )
        printf("%s lakh ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s lakh ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s lakh ",tens(rem2*10));
            }
        }//done
         t=num%100000;
         t=t/1000;
         
         if(t<10 && t!=0)
        printf("%s thousand ",ones(t));
        else if(t>10 && t<20 )
        printf("%s thousand ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s thousand ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s thousand ",tens(rem2*10));
            }
        }
        long num1=num%1000;
        if(num1==0)
            {main();}
         if(num1>10 && num1<20)
    {
        printf("%s ",elevenes(num1));
    }
    else if(num1<10)
    {
        printf("%s ",ones(num1));
    }
    else if(num1>=20 && num1<100 || num1==10)
    { 
            rem1=num1%10;
            
            num1=num1/10;
            rem2=num1%10;
            if(rem1!=0)
            {
            printf("%s %s",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s",tens(rem2*10));
            }
    }
        else if(num1>=100 && num1<1000)
    {
        rem1=num1%10;
        if(num1%100>10 && num1%100<20)
        {
        rem2=(num1%100);
        num1=num1/10;
        }
        else{
            num1=num1/10;
            rem2=(num1%10);
        }
        num1=num1/10;
        rem3=(num1%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s",hundreds(rem3),ones(rem1));
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s",hundreds(rem3),tens(rem2*10),ones(rem1));
        }   
    } 
         
     }
     else if(num>=10000000 && num<10000000000){
         long t=num/10000000;
         
          if(t>10 && t<20)
             {
        printf("%s crore ",elevenes(t));//for 11 to 20
             }
    
    
    
    else if(t<10 && t!=0)
    {
        printf("%s crore ",ones(t));//for 1 to 9
    }
    
      else if(t>=20 && t<100 || t==10)
    { 
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s crore ",tens(rem2*10),ones(rem1));// for 10 and 20 to 99
            }
            else{
                printf("%s crore ",tens(rem2*10));//for only 10 20 30 40 50 60 70 80 90
            }
    }  
    else if(t>=100 && t<1000)// for 100 and 1000
    {
        rem1=t%10;
        if(t%100>10 && t%100<20)
        {
        rem2=(t%100);
        t=t/10;
        }
        else{
            t=t/10;
            rem2=(t%10);
        }
        t=t/10;
        rem3=(t%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s crore ",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s crore ",hundreds(rem3),ones(rem1));//for 100
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s crore ",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s crore ",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s crore ",hundreds(rem3),tens(rem2*10),ones(rem1));
        }
        
    }
     t=num%10000000;
     t=t/100000;
         if(t<10 && t!=0)
        printf("%s lakh ",ones(t));
        else if(t>10 && t<20 )
        printf("%s lakh ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s lakh ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s lakh ",tens(rem2*10));
            }
        }//done
        t=num%100000;
         t=t/1000;
         
         if(t<10 && t!=0)
        printf("%s thousand ",ones(t));
        else if(t>10 && t<20 )
        printf("%s thousand ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s thousand ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s thousand ",tens(rem2*10));
            }
        }
        long num1=num%1000;
        if(num1==0)
            {main();}
         if(num1>10 && num1<20)
    {
        printf("%s ",elevenes(num1));
    }
    else if(num1<10)
    {
        printf("%s ",ones(num1));
    }
    else if(num1>=20 && num1<100 || num1==10)
    { 
            rem1=num1%10;
            
            num1=num1/10;
            rem2=num1%10;
            if(rem1!=0)
            {
            printf("%s %s",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s",tens(rem2*10));
            }
    }
        else if(num1>=100 && num1<1000)
    {
        rem1=num1%10;
        if(num1%100>10 && num1%100<20)
        {
        rem2=(num1%100);
        num1=num1/10;
        }
        else{
            num1=num1/10;
            rem2=(num1%10);
        }
        num1=num1/10;
        rem3=(num1%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s",hundreds(rem3),ones(rem1));
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s",hundreds(rem3),tens(rem2*10),ones(rem1));
        }   
    } 
         
    
     }
     else if(num>=10000000000 && num<10000000000000){
         long long  t=num/10000000000;
          if(t>10 && t<20)
    {
        printf("%s  thousand  ",elevenes(t));//for 11 to 20
    }
    
    
    
    else if(t<10 && t!=0)
    {
        printf("%s  thousand  ",ones(t));//for 1 to 9
    }
    
    
    
    
    else if(t>=20 && t<100 || t==10)
    { 
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s thousand ",tens(rem2*10),ones(rem1));// for 10 and 20 to 99
            }
            else{
                printf("%s thousand  ",tens(rem2*10));//for only 10 20 30 40 50 60 70 80 90
            }
    }
    
    
    
    
    
    else if(t>=100 && t<1000)// for 100 and 1000
    {
        rem1=t%10;
        if(t%100>10 && t%100<20)
        {
        rem2=(t%100);
        t=t/10;
        }
        else{
            t=t/10;
            rem2=(t%10);
        }
        t=t/10;
        rem3=(t%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s thousand  ",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s thousand  ",hundreds(rem3),ones(rem1));//for 100
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s thousand  ",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s thousand  ",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s thousand  ",hundreds(rem3),tens(rem2*10),ones(rem1));
        }
        
    }
    t=num%10000000000;
    t/=10000000;
    if(t==0)printf("crore ");
    else if(t>10 && t<20)
             {
        printf("%s crore ",elevenes(t));//for 11 to 20
             }
    
    
    
    else if(t<10 && t!=0)
    {
        printf("%s crore ",ones(t));//for 1 to 9
    }
    
      else if(t>=20 && t<100 || t==10)
    { 
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s crore ",tens(rem2*10),ones(rem1));// for 10 and 20 to 99
            }
            else{
                printf("%s crore ",tens(rem2*10));//for only 10 20 30 40 50 60 70 80 90
            }
    }  
    else if(t>=100 && t<1000)// for 100 and 1000
    {
        rem1=t%10;
        if(t%100>10 && t%100<20)
        {
        rem2=(t%100);
        t=t/10;
        }
        else{
            t=t/10;
            rem2=(t%10);
        }
        t=t/10;
        rem3=(t%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s crore ",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s crore ",hundreds(rem3),ones(rem1));//for 100
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s crore ",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s crore ",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s crore ",hundreds(rem3),tens(rem2*10),ones(rem1));
        }
        
    }
    
    
       t=num%10000000;
     t=t/100000;
         if(t<10 && t!=0)
        printf("%s lakh ",ones(t));
        else if(t>10 && t<20 )
        printf("%s lakh ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s lakh ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s lakh ",tens(rem2*10));
            }
        }//done
        t=num%100000;
         t=t/1000;
         
         if(t<10 && t!=0)
        printf("%s thousand ",ones(t));
        else if(t>10 && t<20 )
        printf("%s thousand ",elevenes(t));
        else if(t>=20 && t<100 || t==10){
            rem1=t%10;
            
            t=t/10;
            rem2=t%10;
            if(rem1!=0)
            {
            printf("%s %s thousand ",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s thousand ",tens(rem2*10));
            }
        }
        long num1=num%1000;
        if(num1==0)
            {main();}
         if(num1>10 && num1<20)
    {
        printf("%s ",elevenes(num1));
    }
    else if(num1<10)
    {
        printf("%s ",ones(num1));
    }
    else if(num1>=20 && num1<100 || num1==10)
    { 
            rem1=num1%10;
            
            num1=num1/10;
            rem2=num1%10;
            if(rem1!=0)
            {
            printf("%s %s",tens(rem2*10),ones(rem1));
            }
            else{
                printf("%s",tens(rem2*10));
            }
    }
        else if(num1>=100 && num1<1000)
    {
        rem1=num1%10;
        if(num1%100>10 && num1%100<20)
        {
        rem2=(num1%100);
        num1=num1/10;
        }
        else{
            num1=num1/10;
            rem2=(num1%10);
        }
        num1=num1/10;
        rem3=(num1%10)*100;
        
        if(rem1==0 && rem2==0)
        {
            printf("%s",hundreds(rem3));
        }
        else if(rem1>=1 && rem1<=9 && rem2==0){
            printf("%s %s",hundreds(rem3),ones(rem1));
        }
        else if( rem2>10 && rem2<20 )
        {
            printf("%s %s",hundreds(rem3),elevenes(rem2));
        }
        else if(rem1==0)
        {
            printf("%s %s",hundreds(rem3),tens(rem2*10));
        }
        else if(rem1!=0)
        {
            printf("%s %s %s",hundreds(rem3),tens(rem2*10),ones(rem1));
        }   
    }   
     }
    
    main();
     return 0;
}
