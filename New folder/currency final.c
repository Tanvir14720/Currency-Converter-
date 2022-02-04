#include<stdio.h>
#include<stdlib.h>
float currency_from,currency_to;
int choice;
int br_point;
char country_from,country_to;
FILE *currency_List,*currency_sort;

int i;
char ch;

#define numberOfCountry 6
char countryList[numberOfCountry][8] = {"BDT", "USD", "Rupee", "AUD","SGD","BND"};
int sortTempData[numberOfCountry];

struct common{
  int index;
  int sortTempDataValue;

}commonStruct[numberOfCountry];


void bdtToUsd()
{
    system("cls");
    system("color 4E");

    converterIntro("BDT to USD");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t**\tEnter BDT value\t ");
    scanf("%f",&currency_from );
    currency_to = currency_from/85.61;
    printf("\t\t\t**                                **\n");
    printf("\t\t\t**   USD dollar = %f  \t  **\n",currency_to);
    printf("\t\t\t**                                **\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void usdToBdt()
{
    system("cls");
    system("color e4");
    converterIntro("USD to BDT");

    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t**\tEnter USD value\t ");

    scanf("%f",&currency_from);
    currency_to = currency_from*85.61;
    printf("\t\t\t**                                **\n");
    printf("\t\t\t**   BDT Taka = %f  \t  **\n",currency_to);
    printf("\t\t\t**                                **\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}

void usdToInd()
{
    system("cls");
    system("color 4e");
    converterIntro("USD to Indian");

    printf("\t\t\t**************************************\n");
    printf("\t\t\t**************************************\n");
    printf("\t\t\t**\tEnter USD value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*74.19;
    printf("\t\t\t**                                  **\n");
    printf("\t\t\t**\tIndian Rupee = %f  **\n",currency_to);
    printf("\t\t\t**                                  **\n");
    printf("\t\t\t**************************************\n");
    printf("\t\t\t**************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void IndTousd()
{
    system("cls");
    system("color e4");
    converterIntro("Indian to USD");

    printf("\t\t\t***************************************\n");
    printf("\t\t\t***************************************\n");
    printf("\t\t\t**\tEnter Indian value   ");
    scanf("%f",&currency_from);
    currency_to = currency_from/74.19;
    printf("\t\t\t**                                   **\n");
    printf("\t\t\t**\tUSD dollar = %f        **\n",currency_to);
    printf("\t\t\t**                                   **\n");
    printf("\t\t\t***************************************\n");
    printf("\t\t\t***************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void BdtToAud()
{
    system("cls");
    system("color 4e");
    converterIntro("BDT to AUD");

    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t**\tEnter BDT value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from/62.01;
    printf("\t\t\t**                                **\n");
    printf("\t\t\t**\tAUD dollar = %f     **\n",currency_to);
    printf("\t\t\t**                                **\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void AudToBdt()
{
    system("cls");
    system("color 4e");
    converterIntro("AUD to BDT");

    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t**\tEnter AUD value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from*62.01;
    printf("\t\t\t**                                **\n");
    printf("\t\t\t**\tBDT Taka = %f    **\n",currency_to);
    printf("\t\t\t**                                **\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void BdtToInd()
{
    system("cls");
    system("color c0");
    converterIntro("BDT to Indian");

    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t**\tEnter BDT value\t ");
    scanf("%f",&currency_from);
    currency_to = currency_from/1.15;
    printf("\t\t\t**                                **\n");
    printf("\t\t\t**\tIndian Rupee = %f **\n",currency_to);
    printf("\t\t\t**                                **\n");
    printf("\t\t\t************************************\n");
    printf("\t\t\t************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void IndToBdt()
{
    system("cls");
    system("color 0c");
    converterIntro("Indian to BDT");

    printf("\t\t\t**************************************\n");
    printf("\t\t\t**************************************\n");
      printf("\t\t\t**\tEnter Indian value    ");
    scanf("%f",&currency_from);
    currency_to = currency_from*1.15;
    printf("\t\t\t**                                  **\n");
    printf("\t\t\t**\tBDT Taka = %f       **\n",currency_to);
    printf("\t\t\t**                                  **\n");
    printf("\t\t\t**************************************\n");
    printf("\t\t\t**************************************\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}

void converterIntro(char *message)
{
    system("cls");
    printf("\n");
    projectName();
    printf("\t\t\t\t\t%s",message);
    printf("\n\t\t\t-----------------------------------------------\n");
}
void projectName()
{
    system("cls");
    printf("\n");
    printf("\n\t\t\t***********************************************");
    printf("\n\t\t\t***********************************************");
    printf("\n\t\t\t**           Currency Converter              **");
    printf("\n\t\t\t**                                           **");
    printf("\n\t\t\t***********************************************");
    printf("\n\t\t\t***********************************************\n");
}

void submittedBy()
{
    system("cls");
    projectName();
    system("color e4");
    printf("\n\n\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =          Name                        ID             =");
    printf("\n\t\t\t        =*****************************************************=");
    printf("\n\t\t\t        =    1. Apurbo Sarker              ID: 212-15-14719   =");
    printf("\n\t\t\t        =    2. Md. Rakib hossain          ID: 212-15-14723   =");
    printf("\n\t\t\t        =    3. Bilas Saha Bisal           ID: 212-15-14694   =");
    printf("\n\t\t\t        =    4. Md. Mashrur Tanvir Nasif   ID: 212-15-14720   =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void submittedTo()
{
    projectName();
    system("color 4e");
    system("cls");
    printf("\n\n\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =  Dr. Sheak Rashed Haider Noori    =");
    printf("\n\t\t\t        =***********************************=");
    printf("\n\t\t\t        =      Associate Professor          =");
    printf("\n\t\t\t        =                &                  =");
    printf("\n\t\t\t        =         Associate Head            =");
    printf("\n\t\t\t        =         Dept. of CSE              =");
    printf("\n\t\t\t        = Daffodil International University =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void menu()
{
    system("cls");
    system("color 4e");
    while(1)
    {
        projectName();
       // printf("\t\t\t**********************************************\n");
        //printf("\t\t\t**********************************************\n");
        printf("\t\t\t**      .....Select your option.....         **\n");
        printf("\t\t\t**                                           **\n");
        printf("\t\t\t**              1. BDT to USD                **\n");
        printf("\t\t\t**              2. USD to BDT                **\n");
        printf("\t\t\t**              3. USD to Rupee              **\n");
        printf("\t\t\t**              4. Rupee to USD              **\n");
        printf("\t\t\t**              5. BDT to AUD                **\n");
        printf("\t\t\t**              6. AUD to BDT                **\n");
        printf("\t\t\t**              7. BDT to Rupee              **\n");
        printf("\t\t\t**              8. Rupee to BDT              **\n");
        printf("\t\t\t**              9. Currency List from FILE   **\n");
        printf("\t\t\t**              10. Sort Currency            **\n");
        printf("\t\t\t**              0. Back                      **\n");
        printf("\t\t\t**                                           **\n");
        printf("\t\t\t***********************************************\n");
        printf("\t\t\t***********************************************\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            bdtToUsd();
        }
        else if(choice==2)
        {
            usdToBdt();
        }
        else if(choice==3)
        {
            usdToInd();
        }
        else if(choice==4)
        {
            IndTousd();
        }
        else if(choice==5)
        {
            BdtToAud();
        }
        else if(choice==6)
        {
            AudToBdt();
        }
        else if(choice==7)
        {
            BdtToInd();
        }
        else if(choice==8)
        {
            IndToBdt();
        }
        else if(choice==0)
        {
            homePage();
        }
        else if(choice==9)
        {
            currencyList();
        }
        else if(choice==10)
        {
            sortCurrency();
        }
        exitContinueCheck();

        scanf("%d",&br_point);
        if(br_point==0)
        {
            break;
        }
        system("cls");
    }
}
void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int findCostValueOfCountry(int cost_search_key)
{
    system("color e4");
    int i;
    for(i=0;i<numberOfCountry;i++)
    {
        if(commonStruct[i].sortTempDataValue == cost_search_key){
            return commonStruct[i].index;
        }
    }
}
void printSortedCountryList2(int array[], int size) {
  system("color e4");
  for (int i = 0; i < size; i++) {
        int country_currency_value_index = findCostValueOfCountry(array[i]);
        printf("%d.  %s\n",i+1, countryList[country_currency_value_index]);
  }
  printf("\n");

}
void addSortedCountryToFile(char countryList[])
{
   // system("color 62");
    currency_sort = fopen("currencySort.txt", "a"); // read mode
    if(currency_sort != NULL)
    {
        fprintf(currency_sort,"%s",countryList);
        fprintf(currency_sort,",");
        fclose(currency_sort);
    }
    else
    {
        printf("Error!");
    }

}
void printSortedCountryList(int array[], int size)
{
    system("color 4e");
    for (int i = 0; i < size; i++)
    {
        int country_currency_value_index = findCostValueOfCountry(array[i]);
        printf("%d.  %s\n",i+1, countryList[country_currency_value_index]);
        addSortedCountryToFile(countryList[country_currency_value_index]);
    }
    printf("\n");



}
void sortCurrency()
{
    system("color 4e");
    int r,c;
    projectName();

    printf("\n\t..Enter the ranking value of each currency...\n\tRanking value is as much as less ranking is as much as higher...\n");

    for (r = 0; r <numberOfCountry; r++){
         printf("%s ", countryList[r]);///country print hochche
         scanf("%d",&sortTempData[r]);///country wise cost set hosse
         commonStruct[r].index=r;///country er index gulo structure er index var e save rakhtechi
         commonStruct[r].sortTempDataValue=sortTempData[r];///country er cost gulo structure er sortTempDataValue var e save rakhtechi
    }

    printf("\n\n\n\t\t\t Enter any key to continue.....\n");
    getch();

    int size = sizeof(sortTempData) / sizeof(sortTempData[0]);
    insertionSort(sortTempData, size);
    printf("Sorted country list in ascending order:\n");
    printSortedCountryList(sortTempData, size);

    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}
void currencyList()
{
    system("color 4e");
    projectName();
    currency_List = fopen("currencyList.txt", "r"); // read mode
    i=1;
    printf("\n\t..Currency List from File..\n ");
    printf("\n%d. ",i);
    while((ch = fgetc(currency_List)) != EOF)
    {
        if(ch!=',')
            printf("%c", ch);
        else
        {
            printf("\n%d. ",++i);
        }
    }


    fclose(currency_List);
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();

}
void homePage()
{
        system("cls");
        system("color 4e");
        projectName();

        printf("\t\t\t**       .....Select your option.....        **\n");
        printf("\t\t\t**                                           **\n");
        printf("\t\t\t**              1. Submitted By              **\n");
        printf("\t\t\t**              2. Submitted To              **\n");
        printf("\t\t\t**              3. Main Project              **\n");
        printf("\t\t\t**                                           **\n");
        printf("\t\t\t**                                           **\n");
        printf("\t\t\t***********************************************\n");
        printf("\t\t\t***********************************************\n");
        scanf("%d",&choice);
        if(choice==2)
        {
            submittedTo();
        }
        else if(choice==1)
        {
            submittedBy();
        }
        else if(choice==3)
        {
            menu();
        }
}
void exitContinueCheck()
{
        system("cls");
        projectName();
        printf(".............................\n");
        printf(".............................\n");
        printf("..      1. continue        ..\n");
        printf("..      0. exit            ..\n");
        printf(".............................\n");
        printf(".............................\n");
}
void main()
{
    system("color 4e");
    while(1)
    {
        homePage();

        exitContinueCheck();
        scanf("%d",&br_point);
        if(br_point==0)
        {
            break;
        }
        system("cls");
    }
}
