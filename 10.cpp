#include<iostream> 
int main()
{
	int number;
    int i; 
	printf("��]�Ƥ���-�п�J�@�ӥ���ơG");
    scanf("%d",& number); 
    printf ("��]��%d���Ѫ���]�Ƭ��G",number);
      for ( i = 2 ; i <= number ; i ++) {
        while ( number != i ) {    
            if ( number % i == 0 ) {  
                printf ( "%d*" , i ); 
                number = number / i ; 
            } else
                break ;
        }
    }
    printf ( "%d \n " , number );
    return 0;
}
