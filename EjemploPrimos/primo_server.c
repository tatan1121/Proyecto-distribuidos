/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include "primo.h"

primo_out *
primoproc_1_svc(primo_in *argp, struct svc_req *rqstp)
{
	static primo_out  result;
	int prim =1;
	printf("antes del primer if \n");
	if(argp->primo % 2 == 0)
	{	
		prim =0;
		printf("por primer if entro...\n");
		result.res=prim;
		return &result;
	}else
	{
		int i=3;
		printf("antes del for..\n");
		for( i ; i<argp->primo; i=i+2)
		{
			if(argp->primo % i == 0)
			{
				prim = 0;
				printf("por segundo if entro..\n");
				result.res=prim;
				break;
			}
		}
	}
	result.res=prim;
	return &result;
}
