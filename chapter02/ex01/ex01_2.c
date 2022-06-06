//printing appropriate values by direct computation.

#include<stdio.h>

int	main(void)
{
	printf("singed char min  = %d\n", ((char) ~0)); 		//-1 11111111
	printf("singed char min  = %d\n", (~0 >> 1)); 			//-1 11111111
	printf("singed char min  = %d\n", ((char)0 >> 1));  // 0 00000000
	printf("singed char min  = %d\n", (~(char)0 >> 1)); //-1 11111111
	printf("singed char min  = %d\n", ((char) ~0 >> 1)); //-1 11111111
	printf("singed char min  = %d\n", ((char) ~0 >> 5)); //-1 11111111
	printf("singed char min  = %d\n", ~((char)0 >> 1)); //-1 11111111
	printf("singed char min  = %d\n", ~(~(char)0 >> 1)); //0 00000000
	printf("singed char min  = %d\n", ((unsigned char) ~0)); //255 111111111
	printf("singed char min  = %d\n", ((unsigned char) ~0 >> 1)); //127 011111111
	printf("singed char min  = %d\n", (char)((unsigned char) ~0 >> 1)); //127 01111111

	printf("singed char ?  = %d\n", (int) ~0 >> 3); //-1
	printf("singed char ?  = %ld\n", (long) ~0 >> 3); //-1
	printf("singed char ?  = %lld\n", (long long) ~0 >> 5); //-1

	printf("singed char min  = %d\n", ~(char)((unsigned char) ~0 >> 1));
	printf("singed char max  = %d\n", (char)((unsigned char) ~0 >> 1));
	printf("singed short min = %d\n", ~(short)((unsigned short) ~0 >> 1));
	printf("singed short max = %d\n", (short)((unsigned short) ~0 >> 1));
	printf("singed int min   = %d\n", ~(int)((unsigned int) ~0 >> 1));
	printf("singed int max   = %d\n", (int)((unsigned int) ~0 >> 1));
	printf("singed long min  = %ld\n", ~(long)((unsigned long) ~0 >> 1));
	printf("singed long max  = %ld\n", (long)((unsigned long) ~0 >> 1));

	printf("unsinged char max  = %u\n", (unsigned char) -1);
	printf("unsinged short max = %u\n", (unsigned short) -1);
	printf("unsinged int max   = %u\n", (unsigned int) -1);
	printf("unsinged long max  = %lu\n", (unsigned long) -1);

/*option
	printf("unsinged char max  = %u\n", (unsigned char) ~0);
	printf("unsinged short max = %u\n", (unsigned short) ~0);
	printf("unsinged int max   = %u\n", (unsigned int) ~0);
	printf("unsinged long max  = %lu\n", (unsigned long) ~0);
*/
	return (0);
}

