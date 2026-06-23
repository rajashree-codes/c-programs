{
   printf("===== PSYCHIATRIC WARD MANAGEMENT SYSTEM =====\n");

    int patientId, age, wardNumber;
    int discharge;

    char patientName[30];
    char therapist[30];
    char patientHistory[100];

    char dischargeDate[20];
    char dischargeDay[20];
    char dischargeTime[20];

    printf("Enter Patient Name : ");
    scanf("%s", &patientName);
    
    printf("Enter Patient ID : ");
    scanf("%d", &patientId);

    printf("Enter Assigned Therapist : ");
    scanf("%s", &therapist);
    
    printf("Enter Age : ");
    scanf("%d", &age);

    printf("Enter Ward Number : ");
    scanf("%d", &wardNumber);

    printf("Enter Patient History : ");
    scanf("%s", &patientHistory);

    printf("\nIs Patient Discharged?\n");

    printf("Enter 1 for Yes or 0 for No : ");

    scanf("%d", &discharge);
        if(discharge == 1)
    {
        printf("\nEnter Discharge Date : ");

        scanf("%s", dischargeDate);

        printf("Enter Discharge Day : ");

        scanf("%s", dischargeDay);

        printf("Enter Discharge Time : ");

        scanf("%s", dischargeTime);

        printf("\nPatient Status : Discharged\n");

        printf("Discharge Date : %s\n", dischargeDate);

        printf("Discharge Day : %s\n", dischargeDay);

        printf("Discharge Time : %s\n", dischargeTime);
    }

    else
    {
        printf("\nPatient Status : Under Observation\n");
    }


    printf("\n========== PATIENT RECORD ==========\n");

    printf("Patient ID : %d\n", patientId);

    printf("Patient Name : %s\n", patientName);

    printf("Age : %d\n", age);

    printf("Ward Number : %d\n", wardNumber);
    
    printf("Assigned Therapist : %s\n", therapist);

    printf("Patient History : %s\n", patientHistory);

    printf("\n-------------------------------------\n");
    printf("\nRecord Saved Successfully.\n");

    return 0;
}
