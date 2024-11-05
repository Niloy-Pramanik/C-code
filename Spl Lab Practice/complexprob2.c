// // #include<stdio.h>
// // int main()
// // {
// // int n;
// // char ch;
// // printf("Enter value: ");
// // scanf("%d %c",&n,&ch);
// // for(int i=1;i<=n;i++){
// //     printf("Input %d: %d",i,n);
// //     if(ch=='a'&& ch=='z'){
// //         printf("Input %d: %c",ch);
// //     }
    
        
    
// // }


// // return 0;
// // }

// #include <stdio.h>

// int main() {
//     char input;    // input1:X;input2:1
//     int count = 0;
    
//     printf("Enter inputs (type 'A' to stop):\n");
    
//     do {
//         count++;
//         printf("Input %d: ", count);
//         scanf(" %c", &input);
//         printf("%c\n", input);
//     } while (input != 'A');
    
//     return 0;
// }

#include <stdio.h>

int main() {  //using for loops
    char ch;
    int n;
    
    printf("Enter inputs (type 'A' to stop):\n");
    
    for (n = 1; ch != 'A'; n++) {
        printf("Input %d: ", n);
        scanf(" %c", &ch);
        printf("%c\n", ch);
    }
    
    return 0;
}

