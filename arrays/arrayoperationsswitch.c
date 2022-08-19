#define N 50
#include<stdio.h>
int main(){
             int arr[N],arr2[N],merge[N],i,n,x,ind,item,mid=0,temp,n2,k;        
   printf("enter the size of the array \n");
   scanf("%d",&n);
   printf("enter the elements of array\n");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   printf("enter your choice from these options\n");
   printf("\n 1.Traverse \n 2.Insertion \n3.Deletion \n4.Merge \n5.Reverse"); 
   scanf("%d",&x);
switch(x){
                // traverse  
        case 1:
        printf("hi\n"); 
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
            
        }
        break;
                // insertion
        case 2: printf("\nat what index you want to insert");
                scanf("%d",&ind);
                printf("\nenter the item you want to insert\n");
                scanf("%d",&item);
                for(i=n-1;i>=ind;i--){
                    arr[i+1]=arr[i];
                }
                arr[ind]=item;
                n++;
                for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;
                // deletion
        case 3: printf("\nFrom what index you want to delete the element\n");
                scanf("%d",&ind);
                for(i=ind;i<=n;i++){
                    arr[i]=arr[i+1];
                }       
                n--;
                for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;
                // reverse
        case 4: mid=(0+n-1)/2;
                for(i=0;i<=mid;i++){
                    temp=arr[i];
                    arr[i]=arr[n-1-i];
                    arr[n-1-i]=temp;
                }
                    for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                break;
                // merge
        case 5: printf("enter the size of ssecond array\n");
                scanf("%d",&n2); 
                printf("enter the elements of the array\n");
                for(i=0;i<n2;i++){
                    scanf("%d",&arr2[i]);
                }       
                for(i=0;i<n;i++){
                    merge[i]=arr[i];
                }
                k=i;
                for(i=0;i<n2;i++){
                   merge[k]=arr2[i];
                   k++;
                }
                for(i=0;i<k;i++){
                    printf("%d ",merge[i]);
                }
                break;
        default: printf("enter right choice");                   
}
}



