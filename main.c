#include<stdio.h>

int temperature;
int pressure;
int type;
//function prototypes
int monitor_temperature();
int monitor_pulserate();

int main()
{
	/Asking user inputs
	printf("Type 1 to monitor temperature and Type 2 for monitoring pressure");
	scanf("%d",&type);
	if(type==1)
	{
		do{
			int value=monitor_temperature();

		if(value<=37)
		{
			printf("The body temperature is normal\n");
			printf("temperature is %d\n",value);

		}
		else if(value>37)
	    {
		printf("The body temperature is not normal consult doctor\n");
		printf("temperature is %d\n",value);

	    }
		else if (value==notok);
			printf("The measurement is not success,repeating the process.")
		}while(value==notok);
	}
	if(type==2)
		{
			do{
				int value=monitor_pulserate();

			if(value>65&& value<=85 )
			{
				printf("The pulse rate is normal\n");
				printf("pulse rate is %d\n",value);

			}
			else if(value<65||value>85)
		    {
			printf("The pulse rate is not normal consult doctor\n");
			printf("pulse rate is %d\n",value);

		    }
			else if (value==notok);
				printf("The measurement is not success,repeating the process.")
			}while(value==notok);
		}

}

int monitor_temperature(){
	//function to get real time temperature of human body
	//sucessfull measurement
	return temp_value;
	//unsucessfull measurement-> error message
	return notok;
}
int monitor_pulserate(){
	//function to get real time temperature of human body
	//sucessfull measurement
	return pulse_value;
	//unsucessfull measurement-> error message
	return notok;
}
