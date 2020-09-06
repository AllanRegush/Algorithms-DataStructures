int  recursionfib(int n) {
    if (n < 2) {
        return n;
    }
    return recursionfib(n - 2) + recursionfib(n - 1);
}