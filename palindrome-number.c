bool isPalindrome(int x) {
    if(x < 0) return 0;
    unsigned long long origin = x;
    unsigned long long reverse = 0;
    while(x > 0) {
        reverse = x % 10 + reverse * 10;
        x /= 10;
    }
    return origin == reverse;
}
