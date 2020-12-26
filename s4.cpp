#include<iostream>
using namespace std;

/// Intersection of two sorted arrays

/// Naive Solution
//
//void intersection(int a[],int b[],int m,int n)
//{
//    for(int i=0;i<m;i++)
//    {
//        if(i>0&&a[i-1]==a[i])
//            continue;
//        for(int j=0;j<n;j++)
//            if(a[i]==b[j])
//            cout<<a[i]<<" ";
//    }
//}
//int main()
//{
//    int a[]={2,5,8,13,15};
//    int b[]={1,3,8,15,18,20,25};
//    int m=sizeof(a)/sizeof(a[0]);
//    int n=sizeof(b)/sizeof(b[0]);
//    intersection(a,b,m,n);
//
//}
/// Method 2

void intersection(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(i>0&&a[i-1]==a[i])
        {
            i++;
            continue;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";//<<a[j]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int a[]={3,5,10,10,15,15,20};//{2,5,8,13,15};
    int b[]={5,10,10,15,30};//{1,3,8,15,18,20,25};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    intersection(a,b,m,n);

}
