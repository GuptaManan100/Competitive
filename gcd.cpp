int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
