/*********************************/
/* ioccc       by         maxt86 */
/* for    recreational  purposes */
/*********************************/

#include <stdio.h>
#include <stdlib.h>


int  i(int**);
void o(int[], int);


/** (c) max tuchin ***/
int ___(int* E, int* C)
{
    /* 'C is my weapon of choice when I fight', ytcracker */
    
    int    R   ,_;    /*v*/
    
	                  _^=_
    
    /*0*/      ;_;    for (R=_ ;E<= C; R+= *E++) /*A=_ ;T<= I; O+= *N++*/ ;_; /*!*/
    
	           ;_,
    
		       _;_
    
	          /*x*/
    
    ;;;;;;;;  return  R  ;
}


int main(void)
{
    int* arr = NULL;
	int  _0_ , _l_ ;
    
    puts("enter array len & elems:");
	_l_ = i(&arr);
	puts("");
    
	puts("array goes like this:");
	o(arr, _l_);
	puts("");
    
    printf("sum: %d\n", ___(arr, arr+_l_-1));
}


int i(int** a)
{
    int l = 0;
    
    do {
        scanf("%d", &l);
    } while (l <= 0);
    
    if (!(*a = malloc(l * sizeof(int))))
        return 0;
    
    for (int i = 0; i < l; ++i)
        scanf("%5d", (*a)+i);
    
    return l;
}

void o(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
        printf("%5d", 1+i);
    puts("");
    
    for (int i = 0; i < len; ++i)
        printf("%5d", arr[i]);
    puts("");
}
