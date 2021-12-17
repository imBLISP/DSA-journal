long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    //! alternate
    // long long int res=1;
    // for(int i=0;i<b;i++)
    // {
    //     res=res*(a-i)/(i+1);
    // }

    return ans;
}