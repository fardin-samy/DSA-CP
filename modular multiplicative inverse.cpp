//A^-1=(A^(M-2)%M) when M is prime.
//after that same as bigmod



int big_mod(int a,int b,int m){
    if(b==0) return 1%m;
    int x=big_mod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1) x=(x*a)%m;
    return x;
}
