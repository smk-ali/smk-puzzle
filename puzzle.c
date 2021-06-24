#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#define C(c) #c
typedef unsigned char uc;

uc x[] = C ( A B C D E F G H I J K L M N O P Q R S T U V W X Y Z a b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4 5 6 7 8 9 + / ) ;

void r ( uc * s ) {
	const uc * d = s ;
    do while ( * d == ' ') ++ d ; while (* s ++ = * d ++ ) ;
}

uc * a ( const uc * b , size_t c ) {
	uc d [ 256 ] , * f , * g , h [ 4 ] , k ;
    size_t i , l , m ;
    int n = 0 ;

	memset ( d , 0x80 , 256 );
	for ( i = 0 ; i < 64 ; i ++ )
		d [ x [ i ] ] = ( uc ) i;
	d [ '=' ] = 0 ;

	l = 0;
	for ( i = 0 ; i < c ; i ++ ) {
		if (d [ b [ i ] ] != 0x80 )
			l ++ ;
	}

	if ( l == 0 || l % 4 )
		return NULL ;

	m = l / 4 * 3;
	g = f = malloc ( m ) ;
	if ( f == NULL )
		return NULL ;

	l = 0 ;
	for ( i = 0 ; i < c ; i ++ ) {
		k = d [ b [i ] ] ;
		if ( k == 0x80 )
			continue ;

		if ( b [ i ] == '=' )
			n ++ ;
		h [ l]  = k;
		l ++ ;
		if ( l == 4 ) {
			* g ++ = ( h [ 0 ] << 2 ) | ( h [ 1 ] >> 4 ) ;
			* g ++ = ( h [ 1 ] << 4 ) | ( h [ 2 ] >> 2 );
			* g ++ = ( h [ 2 ] << 6 ) | h [ 3 ] ;
			l = 0;
			if ( n ) {
				if ( n == 1 )
					g -- ;
				else if ( n == 2 )
					g = g - 2 ;
				else {
					free ( f ) ;
					return NULL ;
				}
				break ;
			}
		}
	}

	return f ;
}

int main() {
	r(x);
	size_t b = 68 ;
    size_t d = 51 ;
    uc e [ b ] ;
    printf ( "in: " ) ; scanf ( "%s" , e ) ;
    uc f[] = C ( F B 4 U H h Q T E h E b H B I c H R M d H h Q e F B 4 U H h Q T E h E Q D x k P D h g Z D x k a E A 8 Z G h s c E h E b H B 0 e F B 4 f F R Q T E h w d E x 0 e H y A h I i M k G h k Y I h g X F i A h I i M k J R s l J h w b J R s a G S M Z G B c W I C E X F i A h F x Y V H y A W I B Y V F B 4 f F R 8 V F B M S H B I c H R 4 U E x I R G x w d E x I c E h w S H B 0 e F B 4 U H h Q T H R M d E x 0 e H y A W F R 8 g I S I Y I i M Z G B c W I C E X F h U U H h 8 g F h U U E x I R G x E Q G h s R E A 8 O G A 4 N F w 0 X G A 4 Y D h g Z G h A a E A 8 O G A 4 Y D h g O D R c N F w 0 M F g w W D A s V C w o J E x Q V F h c Y G Q 8 O G B k a E A 8 Z G h A a G x w S E R s c H R 4 U H h Q e H x U f I C E X I R c W F R Q T H R M S E R A P D h g Z D x k a G x w S E R A a G x w d E x I c H R M d H h Q T H R 4 U H h 8 V F B 4 f I C E X I R c W F R 8 V F B 4 f I C E i I y Q a J B o k G h k Y F x Y V F B 4 U H h Q e F B M S E R s R E A 8 O G A 4 N D A s V C w o J E x Q K F A o J E w k I E g g S C B I T F A o U C g k I B x E H E Q c G E B E S C A c R E g g S C A c R B x E S E x Q K C R M U g g C d a L 8 0 1 r M k 8 n f p y q a h J d B Q l D 7 p T W 7 k s B T a 0 / V e d C T b 5 3 t m T i S O + W a j y V c h Q c H 1 l k 8 l ) ;
	r ( f ) ;
	uc * s = a ( e , b );
    uc * pr = a( f , 612 );
    int y = - 1 ;
    size_t ss = 0;
    for ( size_t i = 0 ; i < 408 ; i ++ ) {
        bool el = ( s [ i >> 3 ] >> ( 7 - i % 8 ) ) % 2 ;
        ss = ss + ( y * el ) * pr [ i ] ;
        if ( el ) y *= - 1 ;
    }
	if ( ss == 1117 ) {
        for ( size_t i = 0 ; i < d ; i ++ ) {
            printf ( "%c" , s [ i ] ^ pr [ 408 + i ] ) ;
        }
    }
}
