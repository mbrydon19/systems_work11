#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main(){
  struct stat info;
  stat( "file.txt", &info);
  printf( "file size: %lld\n", info.st_size);
  printf( "permissions: %hu\n", info.st_mode);
}
