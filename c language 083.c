int main()
{
    int number;
    int even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;

    printf("Enter numbers (0 to stop):\n");
    while (1) {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        if (number % 2 == 0) {
            even_count++;
            even_sum += number;
        } else {
            odd_count++;
            odd_sum += number;
        }
    }

    printf("Even numbers count: %d\n", even_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Odd numbers count: %d\n", odd_count);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
