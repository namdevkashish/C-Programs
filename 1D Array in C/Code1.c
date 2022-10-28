#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum=0;
    int arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }    
    printf("%d",sum);
    return 0;
}

/*
#TEST CASE 1:
Compiler Message
Success
Input (stdin)
7
1 13 15 20 12 13 2 
Expected Output
76

#TEST CASE 2:
Compiler Message
Success
Input (stdin)
58
44 75 98 25 78 76 10 51 70 18 69 4 93 30 3 1 82 45 54 61 58 66 35 43 72 92 62 87 62 1 66 42 21 95 90 49 67 75 85 86 76 88 6 22 85 20 84 71 23 59 99 99 97 5 12 39 50 88 
Expected Output
3264


#TEST CASE 3:
Compiler Message
Success
Input (stdin)
183
593 482 67 113 839 68 61 417 285 159 359 144 618 94 777 282 932 47 34 877 235 226 84 907 828 264 595 637 683 676 462 576 263 221 620 259 945 482 856 607 68 900 326 989 838 591 451 187 125 992 111 615 707 231 166 89 90 999 274 181 368 961 946 414 292 44 303 716 726 639 545 118 26 684 461 504 21 767 889 398 166 917 46 479 342 741 565 906 768 449 714 507 609 902 380 487 48 783 282 651 527 397 791 648 639 17 54 938 279 856 269 404 662 462 110 564 756 19 865 269 893 152 419 16 717 66 978 105 428 838 766 976 210 763 945 924 916 203 479 57 405 609 15 779 197 235 959 648 237 393 43 650 464 532 998 218 4 911 598 253 862 825 548 251 497 561 809 610 727 352 10 7 757 450 421 244 403 252 57 474 657 671 665 
Expected Output
87803

*/
