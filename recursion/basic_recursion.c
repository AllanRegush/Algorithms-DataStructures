void basic_recursion(const int max, const int current) {
    if (current > max) {
        return;
    }
    printf("%d\n", current);
    basic_recursion(max, current + 1);
}
