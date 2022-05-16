#include<stdio.h> 
#include<stdlib.h>

/*

 8-place ASCII character generator, (C) 2000 by Jonathan Katz, jon@jonworld.com
 Please only use this for good, and not evil. I cannot be held responsible 
 for improper use.

 You are free to redistribute and modify the code as long as you make sure
 that I receive credit (ala the BSD license.)

 This is a LOT of ugly for loop code. If you can write something more efficient
 and better, be my guest! I just had too much time on my hands tonight while
 waiting on stuff in the dryer. Gotta get the bachelor pad in order for the
 weekend!

 I was able to crack my own passwords with this =(

*/

int i, j, k, l, m, n, o, p;

/* char ch[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F
"
        "G H I J K L M N O P Q R S T U V W X Y Z [ ] ^ _ ` 0 1 2 3 4 5 6 7 8 9 
        ": ; < = > ? \ @ { | } ~ ! " # $ % & , ' ( ) * + - . / ";
*/

char ch [] = "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70"
         "\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x41\x42\x43\x44\x45\x46\x47"
         "\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58"
         "\x59\x5a\x5b\x5d\x5e\x5f\x60\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39"
         "\x3a\x3b\x3c\x3d\x3e\x3f\x5c\x40\x7b\x7c\x7d\x7e\x21\x22\x23\x24\x25"
         "\x26\x2c\x27\x28\x29\x2a\x2b\x2d\x2e\x2f";

int main(){

int size = sizeof(ch);
size--;

/*
 I'm hoping that most people in today's world don't have passwords that
 are less than six characters. I have the loops in here for passwords all 
 the way down to one character, but that's kind of silly. So, I have the
 program starting at the sixth loop.
*/

/*
 Please God, tell me that people aren't using one-char passwds!
*/
for (i=0; i<size; i++){
        printf("%c\n",ch[i]);
        }

/*
 Please God, tell me that people aren't using two-char passwds!
*/
for (i=0; i<size; i++){
        for (j=0; j<size; j++){
        printf("%c%c\n",ch[i],ch[j]);
        } }

/*
 Please God, tell me that people aren't using three-char passwds!
*/

for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
        printf("%c%c%c\n",ch[i],ch[j],ch[k]);
        }}}

for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
                        for (l=0; l<size; l++){
        printf("%c%c%c%c\n",ch[i],ch[j],ch[k],ch[l]);
        }}}}

for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
                        for (l=0; l<size; l++){
                                for (m=0; m<size; m++){
        printf("%c%c%c%c%c\n",ch[i],ch[j],ch[k],ch[l],ch[m]);
        }}}}}

for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
                        for (l=0; l<size; l++){
                                for (m=0; m<size; m++){
                                        for (n=0; n<size; n++){
        printf("%c%c%c%c%c%c\n",ch[i],ch[j],ch[k],ch[l],ch[m],ch[n]);
        }}}}}}
       
for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
                        for (l=0; l<size; l++){
                                        for (m=0; m<size; m++){
                                          for (n=0; n<size; n++){
                                            for (o=0; o<size; o++){
        printf("%c%c%c%c%c%c%c\n",ch[i],ch[j],ch[k],ch[l],ch[m],ch[n],ch[o]);
        }}}}}}}

for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                for (k=0; k<size; k++){
                        for (l=0; l<size; l++){
                                for (m=0; m<size; m++){
                                        for (n=0; n<size; n++){
                                          for (o=0; o<size; o++){
                                            for (p=0; p<size; p++){
  printf("%c%c%c%c%c%c%c%c\n",ch[i],ch[j],ch[k],ch[l],ch[m],ch[n],ch[o],ch[p]);
        }}}}}}}}

}

