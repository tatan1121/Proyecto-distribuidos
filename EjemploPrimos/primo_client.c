/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "primo.h"
#include "rpc/rpc.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "errno.h"

int main (int argc, char **argv)
{
	CLIENT *cl;
	primo_in in;
	primo_out *outp;
	if (argc != 3)
	{
		printf("\n\nerror: insufficient arguments!!!\n");
		exit(-1);
	}

	cl=clnt_create(argv[1],PRIMO_PROG,PRIMO_VERS,"tcp");
	in.primo=atol(argv[2]);

	if (cl==NULL)
	{
		printf("\n\nerror: %s\n",strerror(errno));
		exit(-1);
	}

	if ((outp=primoproc_1(&in,cl))==NULL)
	{
		printf("\nerror: %s\n",clnt_sperror(cl,argv[1]));
		exit(-1);
	}
	if (outp->res == 0)
	{
		printf("\n\n Numero no es primo %i \n",outp->res);
		exit(0);
	}else
	{
		printf("\n\n Numero es primo %i \n",outp->res);
	}
	
	
}