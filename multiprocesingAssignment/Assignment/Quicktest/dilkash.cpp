#include<iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main(int argc,char *argv[])
{
int i,N, status;
  pid_t pid;

    pid = fork();
    if (pid == 0)
    {
 for(i=1;i<N;i++)
  if(i%2 == 0)
  cout<<"even %d\n"<<i<<endl;
    }
    else
 {
  if (pid > 0)
     pid = waitpid(pid, &status, 0);
  for(i=1;i<N;i++)
  if(i%2 != 0)
	  cout<<"odd \t%d\n"<<i<<endl;
  }
 return 0;
}
