
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
main()
{
      char x[30][30],str[30];
      int m,n=0,i,j,a,c;
    printf("\nEnter the word:");
      scanf("%s",str);
      a=strlen(str);
      m=a;
      if(a%2==0)
      {
                printf("\nPattern cannot be printed");
      }
      else
      {
      
      a=ceil(a/2);
      c=a;
      
      for(i=0;i<m;i++)
      {
                      if(i==a)
                      {
                              for(j=0;str[j]!='\0';j++)
                              {
                                                       x[i][j]=str[j];
                                                       
      
                                                                                                       
                              }
                              if(i==c)
                                       {
                                           if(i==a)
                                               n++;
                                       }
                      }
                      else
                      {
                          
                              for(j=0;j<m;j++)
                              {
                                              if(j==a)
                                              {
                                                      x[i][j]=str[n];
                                                      n++;

                                              }
                                              else
                                              {
                                                  
                                                      x[i][j]=' ';
                                              }
                              }
                      }
      }
      for(i=0;i<m;i++)
      {
                      for(j=0;j<m;j++)
                      {
                                      printf("%c",x[i][j]);
                      }
                      printf("\n");
      }
      }
      getch();
}               
