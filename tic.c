#include<stdio.h> 

int arr[100];
int n;

void create(int a) 
{
    int i;
    printf("Enter the array elements\n"); for(i=0;i<a;i++)
    
    {
        scanf("%d",&arr[i]); 
    }
    
    printf("List was created successfully\n\n"); 
    
}


void in() 
{
    int i,j,b,a;
    printf("Enter the Element to insert:"); scanf("%d",&b);
    printf("\n");
    printf("Enter the position to insert:"); scanf("%d",&a);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(i==a) break;
    } 
    for(j=n;j>i;j--)
    {
        arr[j]=arr[j-1]; 
    }
    arr[a]=b;
    n=n+1; 
}
void del() 
{
    int i,a,j;
    printf("Enter the element to delete:"); scanf("%d",&a);
    
    for(i=0;i<n;i++)
    {
    if(arr[i]==a)
    break; 
    }
    for(j=i;j<n;j++) 
    {
    arr[j]=arr[j+1]; 
    }
    n=n-1; 
    }
 
void disp() 
{
    int i;
    printf("Elements present in the list are:"); for(i=0;i<n;i++)
    {
        printf("%d",arr[i]); 
    }
        printf("\n"); 
}
    
void find(int a) 
{
    int i,t=0; for(i=0;i<n;i++) 

    {
        if(arr[i]==a) 
        {
            t=i;
            break; 
        }

    }

    if(t!=0)
    printf("Element is at %d\n",t); else
    printf("Element is not present\n");
}

int main() 
{
    int ch,val; 
    do
    {
        printf("1.Create\n2.Insert\n3.Delete\n4.Display\n5.Find\n6.Exit\n");
        printf("Enter your option:\n"); scanf("%d",&ch);
        
        switch(ch)
        {
        case 1:
            printf("Enter the array size\n"); scanf("%d",&n);
            create(n);
            break;
        case 2:
            in();
            break;
        case 3:
            del(); 
            break; 
        case 4:
            if(n!=0)
            disp();
            else
            printf("List is empty"); break;
        case 5:
            printf("Which element is to find:"); scanf("%d",&val);
            find(val);
            break;
        case 6:
            printf("Exit");
            ch+=1;
            break;
        } 
    }
    while(ch<7);
}
