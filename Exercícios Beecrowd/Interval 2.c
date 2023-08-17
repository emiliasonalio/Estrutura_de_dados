##include <stdio.h>

int main() {
    int N, X, i, number=0, number2=0;
    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &X);
            if(X>=10 && X<=20){
                number++;
            }
            else{
                number2++;
            }
    }

    printf("%d in\n%d out\n", number, number2);

    return 0;
}
