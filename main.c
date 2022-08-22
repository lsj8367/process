#include <stdio.h>
#include <unistd.h>

int main() {
//    int pid;
//    pid = fork(); //프로세스를 하나 똑같은걸 하나 만듦
//
//    //자식 프로세스는 fork를 한 다음부터 로직이 실행된다.
//    if (pid == 0) {
//        printf("\n Hello, I am child!\n");
//    } else if (pid > 0) {
//        printf("\n Hello, I am parent!\n");
//    }

    int pid;
    pid = fork();
    if (pid == 0) {
        printf("hello iam child not i'll run date");
        // execlp 를 만나게 되면 아예 새로운 프로세스 작업이 실행되게 된다.
        execlp("/bin/date", "bin/date", (char *) 0);
    } else if (pid > 0) {
        printf("parent\n");
    }
}

