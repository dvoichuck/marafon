double mx_pow_rec(double n, unsigned int pow) {

    if (n < pow)
        return n;
    for (; pow != 2; pow--) {
        n *= n;
    }
    return n;
}
