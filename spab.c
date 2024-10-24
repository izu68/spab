#include <stdio.h>
#include <stdlib.h>

#define SPACES 4

void spab ( const int spa_to_replace, FILE *in, FILE *out ) 
{
	int space_n = 0;
	char chr;

	while ( ( chr = fgetc ( in ) ) != EOF ) 
	{
		if ( chr == ' ' ) 
		{
			space_n += 1;
			if ( space_n == spa_to_replace ) 
		{
				fputc ( '\t', out );
				space_n = 0;
			}
		} 
		else 
		{
			/* if there are < 4 spaces, do not replace and simply represent with space */
			for ( int i = 0; i < space_n; i++ ) 
			{
				fputc ( ' ', out );
			}
			space_n = 0;
			fputc ( chr, out );
		}
	}
}

int main(int argc, char *argv[]) 
{
	printf ( "spab [iXu] 0.01\n" );
	if ( argc != 3 ) 
	{
		printf ( "how to use: %s [input file] [output file]\n", argv[0]);
		return 1;
	}

	FILE *in = fopen ( argv[1], "r" );
	if ( in == NULL ) 
	{
		perror ( "cannot open input file" );
		return 1;
	}
	FILE *out = fopen ( argv[2], "w" );
	if ( out == NULL ) 
	{
		perror ( "cannot open output file" );
		fclose ( in );
		return 1;
	}


	spab ( SPACES, in, out );

	fclose ( in );
	fclose ( out );

	printf ( "spaces replaced with tabs successfully\n" );
	return 0;
}
