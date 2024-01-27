unsigned int somma_cifre(unsigned int x) {
    
    unsigned int somma = 0;



    while (x != 0) {
        somma += x % 10;
        x /= 10;
    }

    return somma;
}



