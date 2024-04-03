# include<stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter the natural number : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("Sum of first %d ", n);
    printf("natural number is %d\n", sum);
    printf("The natural number in reverse form\n");
    for(int i = n; i>=1; i--){
        
        printf("%d\n", i);
    }
    printf("--------------\n");
    return 0;
}