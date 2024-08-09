bool prime[n + 1];
void siv()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= N; p++) 
    {
	     if (prime[p] == true) 
	     {
		      for (int i = p * p; i <= N; i += p)
		          prime[i] = false;
	     }
    }
}
