#include "little_alchemy.h"

int main(void) {
    char frist[] = "acqua";
    char second[] = "fuoco";
    char result[] = "vapore";
    char frist1[] = "terra";
    char second1[] = "pioggia";
    char result1[] = "pianta";
    
    struct element elems[] = {
    
    { frist, second,result },
    { frist1, second1, result1}
    
    };
	
   combine(frist, second, elems, 2);
   combine(frist1, second1, elems, 2);

    return 0;
}