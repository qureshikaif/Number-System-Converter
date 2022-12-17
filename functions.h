#include <string.h>
#include <cmath>
#include <iostream>
using namespace std;

int convert_bin_to_dec()
{
    long long z;
    int dec = 0, i = 0, rem;
    cout << "Enter the binary number you want to convert:\n";
    cin >> z;
    while (z!= 0)
    {
        rem = z % 10;
        z /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    cout << "Decimal of the given number is: " << dec << endl;
    return 0;
}
long convert_dec_to_oct() {
    long long n;
    cout << "Enter the Decimal number you want to convert:\n";
    cin >> n;
    int remainder; 
    long octal = 0, i = 1;
   
    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    cout << "Octal of the given number is: " << octal << endl;
    return 0;
}

void convert_dec_to_bin()
{
    long long n;
    cout << "Enter the Decimal number you want to convert:\n";
    cin >> n;
    int a[10], i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary of the given number: ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}
int convert_oct_to_dec()
{
    long long z;
    cout << "Enter an octal number: ";
    cin >> z;
    int decimalNumber = 0, i = 0, rem;
    while (z != 0)
    {
        rem = z % 10;
        z /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    cout << "Decimal of the given number is: " << decimalNumber << endl;
    return 0;
}
int convert_bin_to_hex()
{
    long long n;
    cout << "Enter the binary number you want to convert:\n";
    cin >> n; 
    int hex[1000];
    int i = 1, j = 0, rem, dec = 0;
    while (n > 0)
    {
        rem = n % 2;
        dec = dec + rem * i;
        i = i * 2;
        n = n / 10;
    }
    i = 0;
    while (dec != 0)
    {
        hex[i] = dec % 16;
        dec = dec / 16;
        i++;
    }

    cout << "Hexadecimal of the given number: ";
    for (j = i - 1; j >= 0; j--)
    {
        if (hex[j] > 9)
            cout << (char)(hex[j] + 55);
        else
            cout << hex[j];
    }
    return 0;
}

int convert_bin_to_oct()
{
    long long n;
    cout << "Enter the binary number you want to convert:\n";
    cin >> n; 
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while(n!= 0)
    {
        decimalNumber += (n%10) * pow(2,i);
        ++i;
        n/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    cout << "Octal of the given number is: " << octalNumber << endl;
    return 0;
}

int convert_dec_to_hex() {
    int decimalNum, rem, i=0;
    char hexaDecimalNum[50];
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        rem = decimalNum%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecimalNum[i] = rem;
        i++;
        decimalNum = decimalNum/16;
    }
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecimalNum[i];
    cout<<endl;
    return 0;
}

int convert_hex_to_bin () {
    int i=0;
    char hex[10];
    cout << "Enter a hexadecimal number : ";
    cin>>hex;
    cout<<"The value in the binary form is = ";
    while(hex[i])
    {
        switch(hex[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<< hex[i] <<")--";
        }
        i++;
    }
  return 0;
}
int convert_hex_to_dec () {
    char num[20];
    int i, r, len, hex = 0;
    cout << "Enter a hexadecimal number : ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout << "\nDecimal equivalent of " << num << " is : " << hex;
    return 0;
}
int convert_hex_to_oct () {
    int decimalNum=0, octalNum[30], rem, i=0, len=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<"\nEquivalent Octal Value: ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
    return 0;
}
long long convert_oct_to_bin()
{
    long long z;
    cout << "Enter an octal number: ";
    cin >> z;
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(z!= 0)
    {
        decimalNumber += (z%10) * pow(8,i);
        ++i;
        z/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    cout << "Binary of the given number is: " << binaryNumber << endl;
    return 0;
}

int convert_oct_to_hex () {
    int octalNum, rev=0, rem, chk=0, hex=0, mul=1, i=0, k=0;
    char binaryNum[40] = "", hexnum[40];
    cout<<"Enter any Octal Number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    if(chk==0)
    {
        octalNum = rev;
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binaryNum, "000");
                    break;
                case 1: strcat(binaryNum, "001");
                    break;
                case 2: strcat(binaryNum, "010");
                    break;
                case 3: strcat(binaryNum, "011");
                    break;
                case 4: strcat(binaryNum, "100");
                    break;
                case 5: strcat(binaryNum, "101");
                    break;
                case 6: strcat(binaryNum, "110");
                    break;
                case 7: strcat(binaryNum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        while(binaryNum[k]!='\0')
            k++;
        chk=1;
        k--;
        while(k>=0)
        {
            if(binaryNum[k]=='0')
                rem = 0;
            else
                rem = 1;
            hex = hex + (rem*mul);
            if(chk%4==0)
            {
                if(hex<10)
                    hexnum[i] = hex+48;
                else
                    hexnum[i] = hex+55;
                mul = 1;
                hex = 0;
                chk = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                chk++;
            }
            k--;
        }
        if(chk!=1)
            hexnum[i] = hex+48;
        if(chk==1)
            i--;
        cout<<"\nEquivalent Hexadecimal Value = ";
        chk = 0;
        for(i=i; i>=0; i--)
        {
            if(hexnum[i]=='0' && chk==0)
            {
                chk++;
                continue;
            }
            else
                cout<<hexnum[i];
        }
    }
    else
        cout<<"\nInvalid Octal Digit "<<rem;
    cout<<endl;
    return 0;
}