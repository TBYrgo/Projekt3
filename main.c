
#include "setup.h"


/********************************************************************************
* main: Ett program där ljusstyrkan på fem lysdioder kan styras via en pwm signal.
		Du kan också stänga av och sätta på lysdioderna inviduellt.
********************************************************************************/
int main(void)
{  
	
	setup();
	
	while (1)
	{
		pwm_run(&a1);
		
	}

	return 0;
}

