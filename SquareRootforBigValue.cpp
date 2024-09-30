int sqroot(int x) {
	int y = sqrt(x) + 2;
	while(y * y > x) y--;
	return y;
}
