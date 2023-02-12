#include <stdio.h>
#include <conio.h>
void rectangle(){
int rows,col;
printf("Enter the number of rows and columns:");
scanf("%d %d",&rows,&col);
for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=col;j++){
        printf("* ");
    }
    printf("\n");
}
}
void hollow_rectangle(){
  int rows,col;
printf("Enter the number of rows and columns:");
scanf("%d %d",&rows,&col);
for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=col;j++){
        if(i==1 || i==rows|| j==1 || j==col)
        {
        printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}  
}
void inverted_half_pyramid(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
}
void after(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=n-i){
        printf("  ");
    }
    else{
        printf("* ");
    }
    }
    printf("\n");
}
}
void using_numbers(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",i);
        }
    printf("\n");
}
}
void floyd(){
    int n;
int count=1;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",count);
        count++;
        }
    printf("\n");
}
}
void butterfly(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int j;
    for (j=1;j<=i;j++){
        printf("* ");
        }
    for (j=1;j<=2*n-2*i;j++){
        printf("  ");
        }
    for (j=1;j<=i;j++){
        printf("* ");
        }

    printf("\n");
}
for(int i=n;i>=1;i--){
    int j;
    for (j=1;j<=i;j++){
        printf("* ");
        }
    for (j=1;j<=2*n-2*i;j++){
        printf("  ");
        }
    for (j=1;j<=i;j++){
        printf("* ");
        }

    printf("\n");
}
}
void rhombus(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++){
        printf("  ");
        }
    for (int j=1;j<=n;j++){
        printf("* ");
    }
    printf("\n");
}
}
void pattern(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        if((i+j)%2==0){
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
    printf("\n");
}
}
void Palindromic(){
    int n;
printf("Enter the value of n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int j;
    for ( j=1;j<=n-i;j++){
            printf("  ");
    }
    int k=i;
    for(;j<=n;j++){
        printf("%d ",k);
        k--;
    }
    k=2;
    for(;j<=n+i-1;j++){
        printf("%d ",k);k++;
    }
    
    printf("\n");
}
}

int main()
{
int choice;
printf("\t\t************Let's learn some awesome patterns!************");
while(choice!=11){
printf("\n\n\t1.Rectangular pattern \n\t2.Hollow rectangle \n\t3.Inverted half pyramid \n\t4.Half pyramid after 180 degree rotation \n\t5.Half pyramid using numbers \n\t6.Floyd's triangle \n\t7.Butterfly pattern \n\t8.Rhombus pattern \n\t9.0-1 pattern \n\t10.Palindromic pattern \n\t11.Exit");
printf("\nPress the corresponding number to display the patterns: ");
scanf("%d",&choice);

    switch(choice){
        case 1: rectangle();
        break;
        case 2: hollow_rectangle();
        break;
        case 3: inverted_half_pyramid();
        break;
        case 4: after();
        break;
        case 5:using_numbers();
        break;
        case 6: floyd();
        break;
        case 7: butterfly();
        break;
        case 8: rhombus();
        break;
        case 9: pattern();
        break;
        case 10:Palindromic();
        break;
    
}

}
    return 0;
}

