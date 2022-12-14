����# i n c l u d e   < s t d i o . h > 
 
 # i n c l u d e   < s t d l i b . h > 
 
 # i n c l u d e   < l o c a l e . h > 
 
 
 
 s t r u c t   P u n t o P l a n o { 
 
 	 f l o a t   a b s c i s a , o r d e n a d a ; 
 
 } ; 
 
 
 
 s t r u c t   P u n t o P l a n o   L e c t u r a P u n t o ( ) { 
 
 	 s t r u c t   P u n t o P l a n o   P u n t o ; 
 
 	 p r i n t f ( " \ n L e c t u r a   d e   p u n t o s   " ) ; 
 
 	 p r i n t f ( " \ n \ n C o o r d e n a d a   e n   x :   " ) ; 
 
 	 s c a n f ( " % f " ,   & P u n t o . a b s c i s a ) ;   
 
 	 p r i n t f ( " C o o r d e n a d a   e n   y :   " ) ; 
 
 	 s c a n f ( " % f " ,   & P u n t o . o r d e n a d a ) ;   
 
 	 
 
 	 r e t u r n   P u n t o ; 
 
 } 
 
 
 
 s t r u c t   E c u a c i o n R e c t a { 
 
 	 f l o a t   m ,   b ; 
 
 } ; 
 
 
 
 v o i d   E s c r i b e E c u a c i o n ( s t r u c t   E c u a c i o n R e c t a   R e s u l t a d o 2 ) { 
 
 	 
 
 	 i f   ( R e s u l t a d o 2 . b < 0 ) 
 
 	 	 p r i n t f ( " \ n L a   e c u a c i ��n   d e   l a   r e c t a   e s :   y   =   % g x   % g \ n   " , R e s u l t a d o 2 . m ,   R e s u l t a d o 2 . b ) ; 
 
 	 e l s e 
 
 	 	 p r i n t f ( " \ n L a   e c u a c i ��n   d e   l a   r e c t a   e s :   y   =   % g x   +   % g \ n   " , R e s u l t a d o 2 . m ,   R e s u l t a d o 2 . b ) ; 
 
 } 
 
 
 
 v o i d   E c u a c i o n   ( s t r u c t   P u n t o P l a n o   A ,   s t r u c t   P u n t o P l a n o   B ) { 
 
 	 s t r u c t   E c u a c i o n R e c t a   R e s u l t a d o 2 ; 
 
 	 
 
 	 R e s u l t a d o 2 . m = ( B . o r d e n a d a - A . o r d e n a d a ) / ( B . a b s c i s a - A . a b s c i s a ) ; 
 
 	 R e s u l t a d o 2 . b = A . o r d e n a d a - ( R e s u l t a d o 2 . m * A . a b s c i s a ) ; 
 
 	 E s c r i b e E c u a c i o n ( R e s u l t a d o 2 ) ; 
 
 	 p r i n t f ( " \ n " ) ; 
 
 } 
 
 
 
 v o i d   C o n t e n c i o n T e r c e r P u n t o   ( s t r u c t   P u n t o P l a n o   C ) { 
 
 	 s t r u c t   E c u a c i o n R e c t a   R e s u l t a d o 2 ; 
 
 
 
 	 i f ( ( ( R e s u l t a d o 2 . m ) * ( C . a b s c i s a ) + R e s u l t a d o 2 . b ) = = ( C . o r d e n a d a ) ) { 
 
 	 	 p r i n t f ( " Y   e l   p u n t o   p e r t e n e c e   a   l a   r e c t a \ n \ n " ) ; 
 
 	 } 
 
 	 e l s e   { 
 
 	 	 p r i n t f ( " Y   e l   p u n t o   n o   p e r t e n e c e   a   l a   r e c t a \ n \ n " ) ; 
 
 	 } 
 
 } 
 
 
 
 
 
 i n t   m e n u ( ) { 
 
 	 i n t   o p c i o n ; 
 
 	 	 p r i n t f ( " M E N ��  D E   O P C I O N E S \ n \ n " ) ; 
 
 	 	 p r i n t f ( " 1   -   L e c t u r a   d e   l o s   d o s   p u n t o s \ n " ) ; 
 
 	 	 p r i n t f ( " 2   -   E c u a c i ��n   d e   l a   r e c t a \ n " ) ; 
 
 	 	 p r i n t f ( " 3   -   L e c t u r a   d e l   t e r c e r   p u n t o \ n " ) ; 
 
 	 	 p r i n t f ( " 4   -   S a l i r \ n " ) ; 
 
 	 	 p r i n t f ( " \ n ��Q u ��  o p c i ��n   e l i j e s ?   " ) ; 
 
 	 	 s c a n f ( " % d " ,   & o p c i o n ) ; 
 
 	 	 r e t u r n   o p c i o n ; 
 
 	 	 } 
 
 
 
 i n t   c a r a t u l a ( ) { 
 
 	 p r i n t f ( " E l   s i g u i e n t e   p r o g r a m a   l e e   d o s   p u n t o s   e n   e l   p l a n o   y   d e t e r m i n a   l a   e c u a c i ��n   d e   l a     r e c t a   q u e   p a s a   p o r   e s t o s   p u n t o s ;   a d e m ��s   d e t e r m i n a   s i   u n   t e c e r   p u n t o   d a d o                 p e r t e n e c e   a   l a   r e c t a \ n \ n " ) ; 
 
 	 p r i n t f ( " E l a b o r ��: \ n \ n " ) ; 
 
 	 	 p r i n t f ( " F l o r e s   M u n g u ��a   C a r l o s \ n \ n " ) ; 	 	 
 
 	 	 s y s t e m ( " p a u s e " ) ; 
 
 	 } 
 
 
 
 
 
 	 i n t   m a i n ( ) { 
 
 	 	 s e t l o c a l e ( L C _ C T Y P E ,   " S p a n i s h " ) ; 
 
 	         c a r a t u l a ( ) ; 
 
 	         s y s t e m ( " c l s " ) ; 
 
 	         s t r u c t   P u n t o P l a n o   P u n t o 1 ,   P u n t o 2 ,   P u n t o 3 ; 
 
 	         s t r u c t   E c u a c i o n R e c t a   R e s u l t a d o 2 ; 
 
 	         i n t   r e s p u e s t a ,   i ,   o p c i o n ; 
 
                 
 
 	 	 i n t   m e n u ( ) ; 
 
 	 	 
 
 	 	 d o { 
 
                 	 s y s t e m ( " c l s " ) ; 
 
                 
 
 	 	 o p c i o n = m e n u ( ) ; 	 	 
 
 	 
 
 	 	 	 s w i t c h   ( o p c i o n ) { 
 
 	 	 	 
 
 	 	 	 c a s e   1 :   s y s t e m ( " c l s " ) ; 
 
 	 	 	 	       	 P u n t o 1 =   L e c t u r a P u n t o ( ) ; 
 
 	 	 	 	       	 P u n t o 2 =   L e c t u r a P u n t o ( ) ; 
 
 	 	 	 	 	   s y s t e m ( " p a u s e " ) ; 
 
 	 	 	 	 b r e a k ; 	 
 
 	 	 
 
 	 	 	 c a s e   2 :   s y s t e m ( " c l s " ) ; 
 
 	 	 	 	 	 E c u a c i o n ( P u n t o 1 ,   P u n t o 2 ) ; 
 
 	 	 	 	 	 s y s t e m ( " p a u s e " ) ; 
 
 	 	 	 	 b r e a k ; 
 
 	 	 	 
 
 	 	 	 c a s e   3 :   s y s t e m ( " c l s " ) ; 
 
 	 	 	 	 	 P u n t o 3 = L e c t u r a P u n t o ( ) ; 
 
 	 	 	 	 	 E c u a c i o n ( P u n t o 1 ,   P u n t o 2 ) ; 
 
 	 	 	 	 	 C o n t e n c i o n T e r c e r P u n t o ( P u n t o 3 ) ; 
 
 	 	 	 	 	 s y s t e m ( " p a u s e " ) ; 
 
 	 	 	 b r e a k ; 
 
 	 	 	 
 
 	 	 	 c a s e   4 :   
 
 	 	 	 	 	 p r i n t f ( " \ n \ n N O S   V E M O S \ n \ n " ) ; 
 
 	 	 	 	 b r e a k ; 
 
 	 	 	 } 
 
 	 	 } w h i l e ( o p c i o n ! = 4 ) ;   
 
 	 r e t u r n   0 ; 
 
 } 
 
 
 
 
 
 
 
 