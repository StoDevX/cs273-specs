#include <unistd.h>

int main(int argc, char **argv, char **envp) {

  int ret;

  if ((ret = execve("/bin/ls", argv, envp)) < 0) {
    perror("execve");
    return -1;
  }

  return 0;
}
