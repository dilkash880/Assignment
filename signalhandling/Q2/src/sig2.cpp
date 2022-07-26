#include<sig.h>


int main()
{
	sighandler_t rgs = signal(SIGUSR1,func1);
	

	if(rgs == SIG_ERR)
	{
		perror("signal() error");
		exit(EXIT_FAILURE);
	}
	int pid = fork();
	int status;
	if(pid == 0)
	{
		cout<<"Child's Process=> PID: "<<getpid()<<endl;
		cout<<"Child's Parent ID: "<<getppid()<<endl;
		for(;;);
	}
	else
	{
		signal(SIGCHLD,func1);

		waitpid(pid, &status, 0);

		cout<<"Parent PID: "<<getpid()<<endl;
		cout<<"Parent's Parent ID: "<<getppid()<<endl;
		cout<<"Status: "<<status<<endl;
	}

	return (EXIT_SUCCESS);
}
