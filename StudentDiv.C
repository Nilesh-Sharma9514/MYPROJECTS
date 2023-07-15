//Writing a code to calculate student division
#include<stdio.h>
int main()
{
    int marks[5],i,sum=0,per;
    printf("Enter Marks of 5 Subjects");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    printf("\nTotal Score: %d",sum);
    per=(sum*100)/500;
    printf("\nPercentage: %d",per);
    if(per>=90)
       printf("\n1st Rank");
    else if((per>=80)&&(per<90))
       printf("\n2nd Rank");
    else if((per>=70)&&(per<80))
       printf("\n3rd Rank");
    else if((per>=60)&&(per<70))
       printf("\n4th Div");
    else
       printf("\nFail");
    return 0;
}