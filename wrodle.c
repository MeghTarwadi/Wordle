#include <stdio.h>
#include <stdlib.h>

// #include "include/func_for_returns_funcs.h"
// #include "include/funcs_for_str_manipulation.h"
// #include "include/func_for_linked_list.h"
// #include "include/funcs_for_files.h"
// #include "include/play.h"

#include "funcs/func_for_returns_funcs.c"
#include "funcs/func_for_linked_list.c"
#include "funcs/funcs_for_str_manipulation.c"
#include "funcs/funcs_for_files.c"
#include "funcs/play.c"

void main()
{
    char playmode[50];
    printf("\n\n\n\n\n");
    printf("                        KISUKE URAHARA                                               SOSUKE AIZEN\n");
    printf("⠀⠀⠈⠒⠛⠛⢁⠀⠙⠛⠋⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢋⣩⠟⣡⡆⠀⠀⢀⣤⢸⣿⣶⡄⢀⠀⠙⠧⢈⣿⠘⣿⡌⣿⡆⢲⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣴⠟⠁⣾⣿⡇⢀⣴⣿⣿⢸⣿⣿⣿⠘⣿⣷⠘⣿⣿⡇⢻⣇⢹⣿⡘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣡⡾⠋⠀⢸⣿⢋⣴⢸⣿⣿⣿⠈⣿⣿⣿⡆⢻⣿⡇⢻⣿⣷⠸⣿⡈⣿⣇⠁⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣡⡾⠋⠀⠀⠀⢘⣡⣿⣿⠸⣿⣿⣿⡄⣿⣿⣿⣧⠸⣿⣿⡈⣿⣿⠄⠻⣇⡈⠿⣷⣤⣑⠢⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠟⣋⣅⡒⠀⠀⠀⠀⠸⣿⣿⣿⠀⣿⣿⣿⡇⢻⣿⡿⠿⠄⠛⣻⣧⣄⠲⣶⣦⣌⠻⢷⣬⡛⠿⣷⣦⣍⡒⠤⣀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠁⢀⣴⣾⡿⠋⠀⢀⣠⠞⣠⣾⣶⣶⠎⣠⣤⠀⢠⣤⣄⠲⣾⣿⣿⣷⣌⡙⢿⣷⣬⡙⠿⣿⣦⣌⠛⠷⣤⣙⠻⢿⣶⣦⡍⡁⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣾⣿⣶⣾⣿⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⡡⠀⢀⣴⣿⣿⠟⠁⢀⣴⠟⣡⣾⣿⣿⡿⢁⣼⣿⠋⣼⣦⠹⣿⣷⣌⠻⢿⣿⣿⣿⣶⣌⠛⢿⣷⣌⡙⠿⣿⣦⣌⡛⠻⠦⠈⠫⠒⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣷⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⠟⣋⡴⠋⣠⣾⣿⣿⠛⠁⣠⣾⡿⣡⣾⣿⣿⣿⠋⣴⣿⣿⢃⣾⣿⣿⣷⣌⠻⣿⣷⣦⡙⠿⣿⣿⣿⣿⣦⣈⠛⠿⠶⠈⠛⡫⠭⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⡿⢛⣥⠞⠁⣀⠾⠿⣿⠟⣀⣴⣿⡿⢋⣾⣿⣿⣿⡿⢡⣾⣿⣿⢃⣾⣿⣿⣿⣿⣿⠷⠈⠉⢁⡀⠀⠘⠛⢒⡒⢒⣚⣁⣀⢠⣤⢰⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡾⢁⣾⠀⠀⠀⠀⠀⠀⠀⠠⠏⠛⠛⠛⠿⠿⣿⣿⣿⡇⠀⠀⠀⠈⣦⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⠟⣫⣶⠟⠁⠀⠀⠉⠙⠓⠀⠈⠙⠛⠋⠴⣿⣿⣿⣿⠏⣰⣿⣿⡿⢁⣾⣿⣿⠿⠛⠉⠀⠈⠀⠸⠧⣤⡤⠜⠂⢸⡇⣿⣿⢈⣿⢸⣿⢸⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⣾⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠂⠀⠀⠤⠀⠀⡉⠛⠀⢰⡀⠀⠀⠀⠠⠤⠀⠄⠀⠀⠀⠀⠀⠀\n");
    printf("⣿⣿⣿⣾⠟⠁⠀⠀⠀⢀⠠⠔⢡⣿⣿⢰⡶⣤⣭⡐⠲⠮⠅⠈⠉⠉⠉⠁⣯⠍⠁⠀⣠⣴⣾⠻⡀⣄⡀⠀⠀⠀⠀⠀⠀⠁⣿⣿⠀⡇⢸⡟⣠⢩⠻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠐⣶⣿⣶⣤⣤⣤⣤⣴⣿⠀⠀⠀⠁⢀⠀⠰⣦⣤⣤⣥⣤⢰⣾⠀⠀⠀\n");
    printf("⣿⣿⠛⠁⠀⠀⠀⠀⠀⠀⣠⣶⣿⡿⣿⢸⣧⢻⡟⣇⢿⣶⣦⣤⣀⣀⣀⣀⠀⡔⢀⡆⣌⠻⣿⡀⢀⠘⣿⣷⣶⣶⣶⣿⠇⢀⠛⣿⠀⣿⠘⡇⣿⣆⠂⠈⠂⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣠⠀⠀⠀⠀⠀⠀⠰⣼⣿⣿⣿⣿⣿⣿⣿⠟⠀⢣⣿⣇⠘⢷⣄⡻⣿⣿⣿⣿⣿⡟⠀⠀⠀\n");
    printf("⠋⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⡿⢡⡗⣦⠻⣾⡇⠈⠜⣿⣿⣿⣿⣮⣉⠻⢯⣴⣿⠃⣿⣷⡌⢷⠀⣷⣬⣿⣿⣿⣿⣿⣾⢸⢁⠇⣤⡙⠠⡀⢹⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⠀⣸⠀⠀⠀⣰⣶⣤⣤⣍⣉⣉⣉⣉⣁⣤⣾⣿⣿⣿⣦⣄⣉⣉⣉⣉⣉⣉⣡⣴⠂⠄⠀\n");
    printf("⠀⣤⣶⣶⣶⣶⡄⠀⢰⠿⠛⠉⣠⣿⣷⣿⠳⡀⠹⡆⠄⡘⢿⣿⣿⣿⣿⣷⣦⣌⡻⠄⣿⢹⣿⣆⠃⣿⣿⣿⣿⣿⣿⣿⣿⠘⠈⣴⣿⣷⡄⢻⣦⣿⣿⣿⡿⠖⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣸⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀\n");
    printf("⠀⣿⣿⣿⣿⣿⡇⠀⠈⢀⣠⣾⣿⣿⡿⠃⢸⡿⢰⣙⠂⠘⠦⣹⣿⣿⣿⣿⣿⣿⣿⡄⢿⡸⢿⣿⣼⣿⣿⣿⣿⣿⣿⣿⠃⢠⣾⣿⣿⠿⠿⣬⣯⣭⡉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⢠⡀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⢠⡄\n");
    printf("⠀⣿⣿⣿⣿⣿⡇⠀⣦⣴⣤⣦⣴⣶⡆⢠⡿⠁⢹⣿⢳⡄⠰⣶⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣿⣿⣿⣿⡿⠟⢋⣿⡿⠃⢠⣾⡙⠻⠿⡿⠿⠖⠈⠉⠛⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣌⣷⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⠿⠃⢛⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⣿⣿\n");
    printf("⠀⣿⣿⣿⣿⣿⢧⠀⣿⣿⣿⣿⡿⠋⠠⠋⠀⠀⣿⠃⣼⠂⢰⣦⡙⣿⣷⣮⡭⢭⣭⣶⣶⡶⠶⠶⠶⠖⣲⣿⣿⠟⣱⡆⠡⡙⠿⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⣿⣿\n");
    printf("⣤⣤⣭⣉⡻⠿⡾⠀⢿⣽⣿⣿⣦⣴⣶⡇⠀⠘⣁⡄⠇⢀⠀⠿⣿⣮⡛⣿⣿⣷⣶⣦⣔⠲⣿⣿⣿⣿⣿⠟⣡⣾⣿⢰⠁⢳⢰⣶⡄⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⢣⠘⢿⣿⣍⣛⡻⠛⠛⠉⠽⠉⠿⠿⠿⠿⢟⣛⣿⠃⠀⡆⠀⢀⢹⣿\n");
    printf("⣿⣿⣿⣿⣿⣷⣶⣄⡉⠛⠛⠻⠋⠉⠛⡇⠀⣸⡿⠇⠀⠘⠆⠠⢹⣿⣿⣮⠻⣿⣿⣿⣿⣷⣌⢻⣿⡿⢁⣾⣿⣿⡇⠌⣸⠀⣸⣿⡅⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣱⡆⠀⠸⣧⠈⢻⣿⣿⣯⡛⠶⣶⣶⣶⣶⠶⠶⣋⣿⡿⠁⠀⣼⠇⠀⢸⣷⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣷⡶⠀⢀⣤⣾⡿⠂⠀⠀⢉⣠⠀⡐⠀⢠⠀⠄⢿⣿⣿⣷⣌⠻⣿⣿⣿⡿⠈⠋⣴⣿⣿⣿⣿⠁⢰⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⡄⣿⣇⠀⠙⢿⣿⣿⣿⣶⣶⣶⣾⣿⣿⣿⠏⠀⠀⣸⣿⠀⡄⠈⣿⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⢁⣴⣿⣿⡿⠁⠀⢀⣾⣿⡿⠀⣇⠀⢈⣠⢸⡌⣿⣿⣿⣿⣷⣬⣭⣭⣤⣴⣿⣿⣿⣿⣿⡏⠀⠘⢿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⡃⢸⣿⣇⠀⠌⠻⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⠀⣰⣿⣿⡀⡇⠀⠘⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⢸⣿⣿⣷⡀⣿⡀⠸⣿⡇⣷⡘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢡⠨⡄⠀⠙⣿⣿⡇⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠋⠀⠀⢠⠉⠸⣿⣿⣦⡀⠀⠈⠛⠛⠛⠛⠛⠋⠀⠀⢀⣼⣿⣿⣿⡇⡇⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⣸⣿⣿⣿⡇⢹⣇⠀⢿⡇⣿⣷⡘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠘⢰⣧⠀⠀⠈⠛⠇⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠀⠀⠀⠀⠀⠀⢸⡇⣶⣿⣿⣿⣷⣄⡀⠘⠀⠀⢠⠀⠀⠀⣴⣿⣿⣿⣿⣿⢱⡇⠀⠀⠀\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣁⠀⠀⠀⠀⣿⣿⣿⣿⣧⢸⣿⡄⠘⣿⣿⣿⣷⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠃⢸⣿⡇⠀⠀⢱⠈⢶⣄⡀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⣿⣿⣿⣿⣿⣿⣟⢷⣶⣾⡗⠀⠀⣼⣿⣿⣿⡟⢹⡿⣸⡇⠀⠀⠀\n");
    printf("⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⣿⣿⣿⣿⣿⠀⣿⣷⠀⠹⣿⣿⣿⣷⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⣸⣿⡇⠀⠀⠀⠃⠸⣿⣿⣷⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⣿⣿⣿⣿⣿⣿⣿⣧⡉⠉⠀⢠⣾⣿⣿⣿⣿⠃⣿⡇⣿⠁⠀⠀⠀\n");

    printf("\n\n\n\n\n");
    printf("\n\n");
    printf("Aizen  : Hey! Kisuke Urahara I challange you to a game called worldle.\n");
    printf("Kisuke : I gladly accept your challange\n");
    while (playmode[0] != 'n' || playmode[0] != 'N')
    {
        printf("Aizen  : Who would be the one to guess the words?\n");
        printf("Kisuke : The one who should guess would be ");
        scanf("%s", &playmode);
        if (playmode[0] == 'm' || playmode[0] == 'M' || playmode[0] == 'K' || playmode[0] == 'k')
        {
            int length;
            printf("Aizen  : How many characters are in the word?\n");
            printf("Kisuke : The word will be the length of ");
            scanf("%d", &length);
            while (validate(length) <= 0)
            {
                printf("Aizen  : Are you kidding me? There is no word with the length of %d characters \n", length);
                printf("Kisuke : Oh my... Arent you the one who won spell bee. The lenght will be ");
                scanf("%d", &length);
            }
            // char guess_word[length];
            // printf("\nKisuke in his mind... There are total %d words with the length of %d characters \n", validate(length), length);
            // printf("Kisuke : Now think kisuke a word that Aizen wont be able to guess...\n");
            // printf("Kisuke : Can word a be ");
            // scanf("%s", guess_word);
        }
        else if (playmode[0] == 'y' || playmode[0] == 'Y' || playmode[0] == 'A' || playmode[0] == 'a')
        {
            int length;
            printf("\nAizen  : How many characters are in the word?\n");
            printf("Kisuke : Comeon I cant tell you that... Arent you the one who was able to outsmart Yuhawaha?\n");
            printf("Aizen  : Its a rule of wordle... And \n");
            printf("Kisuke : The word will be the length of ");
            scanf("%d", &length);
            while (validate(length) <= 0)
            {
                printf("Aizen  : Are you kidding me? There is no word with the length of %d characters \n", length);
                printf("Kisuke : Oh my... Arent you the one who won spell bee. The lenght will be ");
                scanf("%d", &length);
            }
            // Validate whether guess word is in the list or not?
            char guess_word[length];
            char *words_path = (char *)malloc(14 * sizeof(char));
            path_of_file(length, words_path);
            FILE *word_file;
            word_file = fopen(words_path, "r");
            printf("\nKisuke in his mind... There are total %d words with the length of %d characters \n", validate(length), length);
            printf("Kisuke : Now think Urahara think... A word that Aizen wont be able to guess...\n");
            printf("Kisuke : The word which is hard to guess is... ");
            scanf("%s", guess_word);
            while (is_it_a_word(guess_word, word_file, length) != 1)
            {
                printf("Kisuke : My brain is not braining is \"%s\" is a real word with the length %d? No it is not!\n", guess_word, length);
                printf("Kisuke : I have to guess a new word ");
                scanf("%s", guess_word);
            }
            printf("Kisuke : Go ahead Aizen I have guessed the word\n");
            printf("Aizen : The fun begins now\n");

            ask(word_file, validate(length), length + 1);
            fclose(word_file);
        }
        else
        {
            printf("Aizen  : Arent you a little fellow who dont even know how english works?\n");
            FILE *file = fopen("data/words_original.txt", "r");
            create_wordle_files(file);
            printf("Kisuke : You see... I was splitting words according to its length.\n");
            printf("\n\n");
        }
    }
}
