 #include <stdio.h>

int main() {
    unsigned char num;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    unsigned char mask_4th_bit = 1 << 3; 
    unsigned char mask_7th_bit = 1 << 6; 

    if ((num & mask_4th_bit) && (num & mask_7th_bit)) {
        printf("Both 4th and 7th bits are ON.\n");
        num &= ~mask_4th_bit; 
        num &= ~mask_7th_bit; 
        printf("Bits turned OFF. New number: %hhu\n", num);
    } else {
        printf("Either 4th or 7th bit (or both) are OFF.\n");
    }

    return 0;
}
	

}
