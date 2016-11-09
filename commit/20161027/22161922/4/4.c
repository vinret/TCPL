#include <stdio.h>
int main()
{  
    int check[23], sand[23];
    int num, flag = 1, residue = 0;  
    char ch;  
    scanf("%d %c", &num, &ch);  
  
    int i, j, k, m, n, temp;  
    for (i = 1; i <= 23; i++)  
    {  
        check[i] = ((i * i) << 1) - 1;  
        sand[i] = (i << 1) - 1;  
    }  
  
    for (temp = num; temp >= 1;temp--)  
    {  
        for (i = 23; i >= 1; i--)  
        {  
            if (temp == check[i])  
            {  
                flag = 0;  
                residue = num - temp;  
                break;  
            }  
        }  
        if (!flag)  
        {  
            break;  
        }  
    }  
    for (j = i, m = 0; j >= 1; j--, m += 1)  
    {  
        for (n = 0; n < m; n++)  
        {  
            printf(" ");  
        }  
        for (k = 1; k <= sand[j]; k++)  
        {  
            printf("%c", ch);  
        }  
        printf("\n");  
          
    }  
    for (j = 2, m--; j <= i; j++, m--)  
    {  
        for (n = m - 1; n > 0; n--)  
        {  
            printf(" ");  
        }  
        for (k = 1; k <= sand[j]; k++)  
        {  
            printf("%c", ch);  
        }  
        printf("\n");  
    }  
    printf("%d\n", residue);  
    getchar();  
    getchar();  
    return 0;  
}
