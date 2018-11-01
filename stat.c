#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
//file size
//mode (permissions)
//time of last access (displayed in the following format: Fri Oct 28 09:03:01 2016
int main(){
  struct stat info;
  stat( "file.txt", &info);
  printf( "file size: %lld\n", info.st_size);
  printf( "permissions: %o\n", info.st_mode);
  printf( "time of last access: %s\n", ctime(&info.st_atime));
}
