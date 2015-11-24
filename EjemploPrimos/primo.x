struct primo_in
{
	/*input arg*/
	long primo;	
};

struct primo_out
{
	/*op result*/
	int res;
};

program PRIMO_PROG
{
	version PRIMO_VERS
	{
		primo_out PRIMOPROC(primo_in)=1; /*proc
no=1*/
	}=1;
}=0x31230000;