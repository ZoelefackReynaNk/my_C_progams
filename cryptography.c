#include <stdio.h>
#include <string.h>

int main()
{
    int k, y, I, d, l = 97, u = 65, i, j, x, g, c, index;
    char opt, txt, text, ctext, plane_text, uc[26], lc[26], t_l[1000], cipher_text[1000], list1[1000], dtext[1000], charac[14] = ["!", "@", "#", "$", "%", "^", "&", "*", "(", ")", ",", ".", ";", ":"];
    int gcd(int k, int y);
    printf("Operation [Encipher/Decipher]?: ");
    scanf("%c", &opt);
    if (opt == "Encipher"){
         //different inputs necessary for encryption.
        printf("enter the key: ");
        scanf("%d", &k);
        printf("enter lambda: ");
        scanf("%d", &y);
        printf("enter the text to be encrypted: ");
        scanf("%c", &txt);
        plane_text = tolower(txt);
        
        //loop to decompose plane text into a list of letters and alphabet
        for (i = 0; i < 26; i++) {
            lc[i] = putchar(l);
            l++;
        }
        //loop to create a list of capital letters for encryption
        for (j = 0; j < 26; j++) {
            uc[j] = putchar(u);
            u++;
        }
        //loop to remove all punctuations
        d = strlen(plane_text);
        for (i = 0; i <= d; i++) {
            if (plane_text[i] == " " || plane_text[i] == "," || plane_text[i] == "." || plane_text[i] == "!" || plane_text[i] == "?" || plane_text[i] == "(" || plane_text[i] == ")"){
                //t_l[i] = NULL;
                 for (j = i - 1; j < strlen(plane_text) -1; i++){
                     plane_text[j] = plane_text[j+1]; // assign arr[i+1] to arr[i]  
                }  
            }
            else {
                t_l[i] = plane_text[i];
            }
        }
        //loop to bring out the encrypted text using affine cipher
        f = strlen(t_l);
        for (i = 0; i < f; i++){
            for (j = 0; j < strlen(lc); j++){
                if (t_l[i] == lc[j]) {
                index = i;
                }
            }
            x = ((y*index) + k) % 26;
            cipher_text[i] = uc[x];
        }
        //loop to print out cipher text to screen.
        printf("Cipher Text: ", cipher_text[i]);
        printf("\n");
    }
    else if (opt == "Decipher") {
        //different input necesary for dicrypting
        printf("Cipher text: ");
        scanf("%c", text);
        ctext = toupper(text);
        g= strlen(ctext);
        printf("enter the key: ");
        scanf("%d", &k);
        printf("enter lambda: ");
        scanf("%d", &y);
        printf("inverse of lambda: ");
        scanf("%d", I);
        for (i = 0; i <= g; i++){
            list1[i]= ctext[i]
        }
        c = 0;
        for (i = 0; i < strlen(charac); i++){
            for (j = 0; j <= strlen(list1); j++){
                if (charac[i] == list1[j]){
                    c++;
                }
            }
        }
        if (c == 0){
            //loop to crete list of lower case letters for decription
            for (i = 0; i < 26; i++) {
                lc[i] = putchar(l);
                l++;
            }
            //loop to create a list of upper case letters for decryption
            for (j = 0; j < 26; j++) {
                uc[j] = putchar(u);
                u++;
            }
            int gcd(int n1, int n2){
                int i, t;
                for (i = 1; i <= n1 && i <=n2; ++i){
                    //checks if i is a factor of both intergers
                    if  (n1%i == 0 && n2%i ==0){
                        t = i;
                    }
                }
                return t;
            }
            if ( (gcd(y, k) == 1) && (I * y % 26 == 1) ){
                for (i = 0; i < strlen(list1); i++){
                    for (j = 0; j < strlen(uc); j++){
                        if (list1[i] == uc[j]) {
                            index = i;
                        }
                    }
                    x = ((I * inndex) + y) % 26;
                    dtext[i] = lc[x];
                printf("\n deciphered text is: ")
                }
                    
                for (i = 0; i < strlen(dtext); i++){
                    printf(dtext[i], end=" ")
                print("\n")
                }
            }
            else{
                print("lambda is not coprime to the key");
            }
        }
        else{
            printf("re-enter text.");
        }
            
    }
    else{
        print("error re-enter operation");
    }
    return 0;
}
    