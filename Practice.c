#include<stdio.h>

int main()

{
    int arr[100][100];
    int i,j,n,len;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        scanf("%s",arr[i]);

    }




       for(i=0;i<n;i++)
    {
         len=0;
           for(j=0;arr[i][len]!='\0';j++)
            {

               len++;

            }

          printf("%d",len);

        if(len>10)
        {

            printf("%c%d%c\n",arr[i][0],len-2,arr[i][len-1]);

        }
        else
        {
            printf("%s\n",arr[i]);
        }

    }

}

