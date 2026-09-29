#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>


int mylen(char * s){
    int len = 0;
    for ( ;*s!='\0';s++){
        len ++;
    }
    return len;
}

void reverse_str(char* s){
    int len = mylen(s);
    for (int i = 0; i<len/2;i++){
        char tmp = s[i];
        s[i]= s[len-i-1];
        s[len-i-1] = tmp;
    }
}

char* concatenation(char* s1, char* s2){
    int len1 = mylen(s1);
    int len2 = mylen(s2);
    int len_tot = len1 + len2;
    char* concat = new char[len_tot + 1];
    int i = 0;
    while (i<len1){
        concat[i]=s1[i];
        i++;
    }
    while (i<len_tot){
        concat[i]=s2[i-len1];
        i++;
    }
    concat[len_tot]= '\0';
    return concat;
}

void print_str(char*s ){
    int len = mylen(s);
    for (int i = 0;i<len;i++){
        std::cout <<s[i] ;
    }
    std::cout << "\n";
}

bool dichotomic_search(int* array, int len, int n){
    
    int i = 0;
    int j = len;

    while( i<=j){

        int mid = (i+j)/2;

        if (array[mid]==n){
            return true;
        }

        else {
            if (array[mid]>n){
                j = mid - 1;
            }

            else {
                i = mid + 1;
            }
        }
    }

    return false;
}

int main(int argc, char* argv[]){

    char * chat = new char [5] {'c','h','a','t','\0'};
    char* perche = new char [7] {'p','e','r','c','h','e','\0'};
    int* tab = new int [7] {1,3,3,4,6,9,11};
    int* tab2 = new int [8] {0,2,3,4,5,7,11,12};

    if (argc < 2) {
        std::cerr << "Erreur : aucun paramètre\n";
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char* str = argv[i];
        reverse_str(str);
        print_str(str);
    }
    std::cout << mylen(chat) << std::endl;
    std::cout <<  mylen(perche) << std::endl;
    print_str(concatenation(chat,perche));
    reverse_str(chat);
    print_str(chat);
    delete[] chat;
    delete[] perche;
    std::cout <<  dichotomic_search(tab,7,1) << std::endl;
    std::cout <<  dichotomic_search(tab,7,13) << std::endl;
    std::cout <<  dichotomic_search(tab2,7,-1) << std::endl;

    delete [] tab;
    delete [] tab2;

    return 0;

    
}