#include <stdio.h>
#include <stdlib.h>

//Summe der in dieser Woche gefahrenen Kilometer.
int weeklyDistance = 0;
//Summe der in dieser Woche gefahrenen Zeit.
int weeklyDuration = 0;

const char* daysOfWeek[7] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};

int main(){
    int myBikeTripsPerWeek[7][2] = {}; //Array, das die gefahrenen Kilometer und die gefahrene Zeit pro Tag speichert.

    //Nachfrage und Eingabe der gefahrenen Kilometer pro Tag.
    for(int i = 0; i < 7; i++){
        printf("Gib ein, wie weit du am %s gefahren bist und wie lange du dafuer hattest.", daysOfWeek[i]);
        for (int j = 0; j < 2; j++){
        scanf("%d, %d", &myBikeTripsPerWeek[i][j]);
        }
    }

    //Summierung der gefahrenen Kilometer.
    for(int i = 0; i < 7; i++){
        weeklyDistance += myBikeTripsPerWeek[i][0];
    }
    //Durchschnittlich gefahrene Kilometer pro Tag.
    int averageDistancePerDay = weeklyDistance / 7;

    //Ausgabe des Wochentotals und des Tagesdurchschnitts.
    if (weeklyDistance == 0){
        printf("Schade, dass du es diese Woche nicht aufs Velo geschafft hast. Naechste Woche wird besser. Ride On!\n");
    }
    else {
    printf("\nDiese Woche bist du total %dkm gefahren. \nPro Tag sind das durchschnittlich %dkm.\n", weeklyDistance, averageDistancePerDay);
    }

    //Summierung der gefahrenen Zeit.
    for(int i = 0; i < 7; i++){
        weeklyDuration += myBikeTripsPerWeek[i][1];
    }

    //Ausgabe der in dieser Woche gefahrenen Zeit.
    printf("Insgesamt bist du %d Stunden gefahren.\n", weeklyDuration);

    //Berechnung der durchschnittlichen Geschwindigkeit pro Tag.
    int averageSpeedPerDay[7] = {};

    for(int i = 0; i < 7; i++){
        averageSpeedPerDay[i] = myBikeTripsPerWeek[i][0] / myBikeTripsPerWeek[i][1];
    }

    //Ausgabe der Durchschnittsgeschwindigkeit pro Tag.
    printf("\nPro Tag gibt das eine Durchschnittsgeschwindigkeit von:\n");
    for(int i = 0; i < 7; i++){
        printf("%s: %dkm/h\n", daysOfWeek[i], averageSpeedPerDay[i]);
    }

    printf("\nRide On.\n");

    return 0;
}
