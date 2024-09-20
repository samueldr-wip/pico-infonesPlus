//
// kakipee: InfoNES Advance V0用ROM書き込みツール
//
//     使い方: ./kakipee [ROMファイル名]
//

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE *fp1, *fp2;
  char buf[1024];
  int i;

  if ( ( fp1 = fopen("InfoNES.mb.gba", "r+b" ) ) == NULL )
  {
    printf( "Can't open InfoNES.mb.gba.\n" );
    return -1;
  }

  if ( argc != 2 || ( fp2 = fopen(argv[1], "rb" ) ) == NULL )
  {
    printf( "Can't open ROM file.\n" );
    return -1;
  }

  fseek( fp1, 0x124b1, SEEK_SET );

  i = fread( buf, sizeof buf, 1, fp2 );

  printf ("Now writing ", i);
  while ( i > 0 )
  {
    fwrite( buf, 1024, i, fp1 );
    i = fread( buf, sizeof buf, 1, fp2 );
    printf(".");
  }
  printf(" done.\n");

  fflush( fp1 );
  fclose( fp1 );
  fclose( fp2 );

	return 0;
}
