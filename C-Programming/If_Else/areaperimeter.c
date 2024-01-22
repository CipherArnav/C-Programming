#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    
    printf("Enter the length of rectangle:\n");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:\n");
    scanf("%d",&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area is %d\n",area);
    printf("Perimeter is %d\n",perimeter);

    if(area>perimeter){
        printf("Area is greater than perimeter\n");
    }
    if(area<perimeter){
        printf("Area is less than perimeter\n");
    }if(area==perimeter)
    {
        printf("Area is equal to perimeter");
    }
    

    return 0;

    

}