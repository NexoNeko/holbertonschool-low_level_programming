/**
 * findPrime - calculates whether the number is prime or not
 *
 * @y: counter
 * @x: checker
 *
 * Description: This works in a simple way, y is just a counter: 2..x
 * if x == y, it means x is a prime number, because if x%y is not >1
 * that means x is divisible by something else than itself, meaning
 * x is a composite number.
 * Return: Sqrt of c, or -1 if invalid
 */
int findPrime(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (findPrime(x, y + 1));
}
/**
 * is_prime_number - Calls for the function findPrime.
 *
 * @n: Number to check if prime
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (findPrime(n, 2));
}
