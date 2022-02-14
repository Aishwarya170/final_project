#include<stdio.h>
#include<string.h>
void main()
{
      int n,i,j,count=0,flag=0;
      printf("Enter number of element in string\n");
      scanf("%d", &n);
      char temp = 1;
      char s[n];
      char q[n];
      printf("Enter the string\n");
      scanf("%s", s);
      printf("Original String\n");
      for(i=0;i<n;i++)
      {
            printf("%c",s[i]);
            s[i]=s[i];
      }
      for(i=0;i<n;i++)
      {
             flag = 0;
             for(j=0;j<n;j++);
             {
                     if(s[i]==s[j])
                      {
                          flag = flag+1;
                      }
             }
             for(j=0;j<n;j++)
             {
                      if((flag % 2) !=0)
                      {
                             if(s[i]==q[j] && i!=j && temp!=s[i])
                             {
                                  s[j]=0;
                             }
                      }
                      else
                      {     
                             if(s[i]==s[j])
                             {
                                  q[j]=0;
                             }
                      }
             }
             temp = s[i];
    
       } 
       printf("\nFinal String\n");
       for(j=0;j<n;j++)
       {
             if(q[j]!=0)
             {
                      printf("%c", q[j]);
                      count++;
             }
       }
       if(count==0)
       {
             printf("Empty String\n");
       }
}
