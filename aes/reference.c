
void gmix_column(unsigned char *r) {
        unsigned char a[4];
        unsigned char b[4];
        unsigned char c;
        unsigned char h;
        /* The array 'a' is simply a copy of the input array 'r'
         * The array 'b' is each element of the array 'a' multiplied by 2
         * in Rijndael's Galois field
         * a[n] ^ b[n] is element n multiplied by 3 in Rijndael's Galois field */ 
        for(c=0;c<4;c++) {
                a[c] = r[c];
                h = r[c] & 0x80; /* hi bit */
                b[c] = r[c] << 1;
                if(h == 0x80) 
                        b[c] ^= 0x1B; /* Rijndael's Galois field */
        }
        r[0] = b[0] ^ a[3] ^ a[2] ^ b[1] ^ a[1]; /* 2 * a0 + a3 + a2 + 3 * a1 */
        r[1] = b[1] ^ a[0] ^ a[3] ^ b[2] ^ a[2]; /* 2 * a1 + a0 + a3 + 3 * a2 */
        r[2] = b[2] ^ a[1] ^ a[0] ^ b[3] ^ a[3]; /* 2 * a2 + a1 + a0 + 3 * a3 */
        r[3] = b[3] ^ a[2] ^ a[1] ^ b[0] ^ a[0]; /* 2 * a3 + a2 + a1 + 3 * a0 */
}

void gmix_column_wrapper(unsigned char *buf, int column)
{
	unsigned char tmp[4];
	tmp[0] = buf[column+ 0];
	tmp[1] = buf[column+ 4];
	tmp[2] = buf[column+ 8];
	tmp[3] = buf[column+12];

	gmix_column(tmp);

	buf[column+ 0] = tmp[0];
	buf[column+ 4] = tmp[1];
	buf[column+ 8] = tmp[2];
	buf[column+12] = tmp[3];
}

