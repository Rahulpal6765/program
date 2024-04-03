# include<stdio.h>
int main() {
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        int table = n * i;
        printf("%d\n", table);
    }
    printf("-------------\n");
    // reverse table
    for(int i = 10; i >= 1; i--){
        printf("%d\n", n*i);
    }
    return 0;
}