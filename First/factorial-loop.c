int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial using recursion: %d\n", factorial_recursive(num));
    printf("Factorial using iteration: %d\n", factorial_iterative(num));

    return 0;
}