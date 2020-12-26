#include<iostream>
using namespace std;

/// Union of two sorted array
/// Naive Solution
void sort(int c[],int n1);
void printunion(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[m+i]=b[i];
    }
    sort(c,m+n);
    for(int i=0;i<m+n;i++)
        if(i==0||c[i]!=c[i-1])
        cout<<c[i]<<" ";
}
void sort(int c[],int n1)
{
    for(int i=1;i<n1;i++)
    {
        int key=c[i];
        int j=i-1;
        while(j>=0&c[j]>key)
        {
            c[j+1]=c[j];
            j--;
        }
        c[j+1]=key;
    }
}
int main()
{
    int a[]={3,8,10};
    int b[]={2,8,9,10,15};
        int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    printunion(a,b,m,n);
}

///Method 2 -More efficient Solution
/// Linear Solution
