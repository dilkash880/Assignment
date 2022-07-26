#include<sig.h>

int main()
{
	sighandler_t rgs = signal(SIGUSR1,func1);
	signal(SIGHUP,func1);

	if(rgs == SIG_ERR)
	{
		perror("signal() error");
		exit(EXIT_FAILURE);
	}

	if(raise(SIGUSR1) != 0)
	{
		perror("raise() error");
		exit(EXIT_FAILURE);
	}
	char *str1, str2[20];
	cin>>str2;
	char *str3 = NULL;
	str1 = new char[strlen(str2)+1];
	mystrcat(str1, str3);

	cout<<"Str1: "<<str1<<endl;
	cout<<"Str2: "<<str2<<endl;

	return EXIT_SUCCESS;

}