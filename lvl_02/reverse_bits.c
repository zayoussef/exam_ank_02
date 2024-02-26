unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char rs;
    while (i > 0)
    {
        rs = rs * 2 + (octet % 2);
        octet /= 2;
        i--;
    }
    return rs;
}