bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int largestPrime = 0;
    // Iterate from 999 downwards to find the largest prime
    for (int i = 999; i >= 100; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break;
        }
    }
    printf("The largest 3-digit prime number is: %d\n", largestPrime);
    return 0;
}
