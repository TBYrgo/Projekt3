
#include "setup.h"


/********************************************************************************
* main: Ett program d�r ljusstyrkan p� fem lysdioder kan styras via en pwm signal.
		Du kan ocks� st�nga av och s�tta p� lysdioderna inviduellt.
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

