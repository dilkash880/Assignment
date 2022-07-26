#include <iostream>
#include <signal.h>
#include <cstring>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fstream>
#include <string>
#include <time.h>

#define MAXBUFF 1024

using namespace std;


static void func1(int signum)
{
	
	{
		case SIGSEGV:
			cout<<"Sig Number: "<<signum<<endl;
			cout<<"Seg fault error occured"<<endl;
			exit(EXIT_FAILURE);
			break;

		case SIGUSR1:
			cout<<"Welcome User!"<<endl;
			break;

		case SIGHUP:
			cout<<"SIGNAL HANG UP occured! : "<<signum<<endl;
			break;

		case SIGCHLD:
			cout<<"SIGNAL CHILD occured! : "<<signum<<endl;
			break;

		default:
			cout<<"\nUnhandled signal : "<<signum<<endl;

	}
	
}