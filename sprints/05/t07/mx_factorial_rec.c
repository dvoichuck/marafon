int mx_factorial_iter(int n) {
    if (n < 0)
        return n;
    if (n != 0)
        return mx_factorial_iter(n-1) * n;  
    else 
        return 1;
    
}
