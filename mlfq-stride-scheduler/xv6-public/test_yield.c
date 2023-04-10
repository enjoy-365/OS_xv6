#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
	int rc = fork();
	while(1){
		if(rc < 0)
		{
			printf(1, "fork failed\n");
			return -1;
		}else if(rc == 0)
		{
			printf(1, "Child\n");
		}else
		{
			printf(1, "Parent\n");
		}
		yield();
	}

	exit();

	return 0;
}
