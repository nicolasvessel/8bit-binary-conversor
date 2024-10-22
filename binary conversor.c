    #include <stdio.h>
    int main()

{
    int resultado;
    int B1, B2, B3, B4, B5, B6, B7, B8;
    int RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8;

    //interface do usuario

    printf ("numero binario:");
    scanf ("%i", &B1);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B2);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B3);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B4);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B5);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B6);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B7);
    printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B8);
    printf ("\n");


    //conversor para decimal
    RD1 = B1*128;
    RD2 = B2*64;
    RD3 = B3*32;
    RD4 = B4*16;
    RD5 = B5*8;
    RD6 = B6*4;
    RD7 = B7*2;
    RD8 = B8*1;

    resultado = RD1+RD2+RD3+RD4+RD5+RD6+RD7+RD8;

    //anti erro

    if ((B1 == 0 || B1 == 1) && (B2 == 0 || B2 == 1) && (B3 == 0 || B3 == 1) && (B4 == 0 || B4 == 1) && (B5 == 0 || B5 == 1) && (B6 == 0 || B6 == 1) && (B7 == 0 || B7 == 1) && (B8 == 0 || B8 == 1))
    {
        printf("decimal: %i\n", resultado);
    }

        else
    {
        printf("ISSO NAO EH UM NUMERO BINARIO\n");
        printf("TENTE NOVAMENTE\n\n");

        printf ("numero binario:");
        scanf ("%i", &B1);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B2);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B3);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B4);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B5);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B6);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B7);
        printf ("\n");

        printf ("numero binario:");
        scanf ("%i", &B8);
        printf ("\n");

        RD1 = B1*128;
        RD2 = B2*64;
        RD3 = B3*32;
        RD4 = B4*16;
        RD5 = B5*8;
        RD6 = B6*4;
        RD7 = B7*2;
        RD8 = B8*1;

        resultado = RD1+RD2+RD3+RD4+RD5+RD6+RD7+RD8;

        //recalculador

        if ((B1 == 0 || B1 == 1) && (B2 == 0 || B2 == 1) && (B3 == 0 || B3 == 1) && (B4 == 0 || B4 == 1) && (B5 == 0 || B5 == 1) && (B6 == 0 || B6 == 1) && (B7 == 0 || B7 == 1) && (B8 == 0 || B8 == 1))
        {
        printf("decimal: %i\n", resultado);
        }

        else
        {
            printf("ISSO NAO EH UM NUMERO BINARIO\n");
        }

    }
     //conversor e impressor octal
        if ((B1 == 0 || B1 == 1) && (B2 == 0 || B2 == 1) && (B3 == 0 || B3 == 1) && (B4 == 0 || B4 == 1) && (B5 == 0 || B5 == 1) && (B6 == 0 || B6 == 1) && (B7 == 0 || B7 == 1) && (B8 == 0 || B8 == 1))
        {
            printf("octal: %o\n", resultado);
        }

    //conversor e impressor hexadecimal
        if ((B1 == 0 || B1 == 1) && (B2 == 0 || B2 == 1) && (B3 == 0 || B3 == 1) && (B4 == 0 || B4 == 1) && (B5 == 0 || B5 == 1) && (B6 == 0 || B6 == 1) && (B7 == 0 || B7 == 1) && (B8 == 0 || B8 == 1))
        {
            printf("hexadecimal: %X", resultado);
        }

    return 0;
}
