#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
int sum(int n);
int subrec(int a,int b);
void cetak(int n);
int sumArray(int data[],int indeks);
int sumAray(int data[],int curr,int ukuran);
void printArr(int data[],int cur,int ukuran);
void barisAngka(int awal,int akhir);
int product(int n);
int main()
{
    printf("%d",product(11));
/*    int data[]={5,7,10,3,NULL};
    int data2[]={5,7,10,3};
    printArr(data,0,4);
    printf("\n%d\n",sumAray(data,0,4));
    printf("%d\n",sumArray(data,NULL));
    printf("%d\n",NULL);
    printf("%d\n",sum(3));
    printf("%d\n",subrec(5,-2));
    cetak(10);
*/
    return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}
int subrec(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else if(b<0)
    {
        return subrec(a,b+1)+1;
    }
    else
    {
        return subrec(a,b-1)-1;

    }
}
void cetak(int n)
{
    if(n>=0)
    {
        printf(" %d ",n);
        cetak(n-1);
    }
}
int sumArray(int data[],int curr)
{
    if(data[curr]==NULL)
    {
        return 0;
    }
    else
    {
        return data[curr]+sumArray(data,curr+1);
    }
}
int sumAray(int data[],int curr,int ukuran)
{
    if(curr==ukuran-1)
    {
        return data[curr];
    }
    else
    {
        return data[curr]+sumAray(data,curr+1,ukuran);
    }
}
void printArr(int data[],int cur,int ukuran)
{
    if(cur<ukuran)
    {
        printf(" %d , ",data[cur]);
        printArr(data,cur+1,ukuran);
    }
}
int product(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(n%2==0)
        {
            return product(n-1)*n;
        }
        else
        {
            return product(n-1)
        }
    }
}

int kaligenap(int n)
