#include <stdio.h>

int main() {
    const char *camel = "Switching on camera from habitat with camels...\n"
    " ___.-''''-.\n"
    "/___  @    |\n"
    "',,,,.     |         _.'''''''._\n"
    "     '     |        /           \\\n"
    "     |     \\    _.-'             \\\n"
    "     |      '.-'                  '-.\n"
    "     |                               ',\n"
    "     |                                '',\n"
    "      ',,-,                           ':;\n"
    "           ',,| ;,,                 ,' ;;\n"
    "              ! ; !'',,,',',,,,'!  ;   ;:\n"
    "             : ;  ! !       ! ! ;  ;   :;\n"
    "             ; ;   ! !      ! !  ; ;   ;,\n"
    "            ; ;    ! !     ! !   ; ;\n"
    "            ; ;    ! !    ! !     ; ;\n"
    "           ;,,      !,!   !,!     ;,;\n"
    "           /_I      L_I   L_I     /_I\n"
    "Yey, our little camel is sunbathing!";

    const char *lion = "Switching on camera from habitat with lions...\n"
    "                                               ,w.\n"
    "                                             ,YWMMw  ,M  ,\n"
    "                        _.---.._   __..---._.'MMMMMw,wMWmW,\n"
    "                   _.-\"\"        '''           YP\"WMMMMMMMMMb,\n"
    "                .-' __.'                   .'     MMMMW^WMMMM;\n"
    "    _,        .'.-'\"; \\,       /\\     .--\"\"      :MMM[==MWMW^;\n"
    " ,mM^\"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW\"  @\\\n"
    ",MM:.    .'.-'   .'     ;     \\\\    ;     \\,     MMMMMMMW \\\"./\\-,"
    "\nWMMm__,-'.'     /      _\\.      F'''-+,,   ;_,_.dMMMMMMMM[,_ / \\=_}\n"
    "\"^MP__.-'    ,-' _.--\"\"   \\-,   ;       \\  ; ;MMMMMMMMMMW^\\\\; __|\n"
    "           /   .'            ; ;         )  )\\{  \\ \\\"^W^\\,   \\  :\n"
    "          /  .'             /  (       .'  /     Ww._     \\.  \\\"\n"
    "         /  Y,              \\,  \\-,=,_{   ;      MMMP\\\"\"-,  \\-._.-,\n"
    "        (--, )               \\,_ / \\)  \\\"\"/)\      ^\"      \\-, -;\"\\:\n"
    "The lion is croaking!";

    const char *deer = "Switching on camera from habitat with deers...\n"
    "   /|       |\\\n"
    "\\__\\\\       //__'\n"
    "   ||      ||\n"
    " \\__\\\\     |'__/\n"
    "   \\_\\\\   //_'\n"
    "   _.,:---;,._\n"
    "   \\_:     :_/\n"
    "     |@. .@|\n"
    "     |     |\n"
    "     ,\\.-./ \\\n"
    "     ;;\\-'   \\---__________-----.-.\n"
    "     ;;;                         \\_\\\n"
    "     ';;;                         |\n"
    "      ;    |                      ;\n"
    "       \\   \\     \\        |      /\n"
    "        \\_, \\    /        \\     |\\\n"
    "          |';|  |,,,,,,,,/ \\    \\ \\_\n"
    "          |  |  |           \\   /   |\n"
    "          \\  \\  |           |  / \\  |\n"
    "           | || |           | |   | |\n"
    "           | || |           | |   | |\n"
    "           | || |           | |   | |\n"
    "           |_||_|           |_|   |_|\n"
    "          /_//_/           /_/   /_/\n"
    "Our 'Bambi' looks hungry. Let's go to feed it!";

    const char *goose = "Switching on camera from habitat with lovely goose...\n"
    "\n"
    "                                    _\n"
    "                                ,-\"\" \"\".\n"
    "                              ,'  ____  \\.\n"
    "                            ,'  ,'    \\.  \\\n"
    "   (\\.         _..--.._   ,'  ,'        \\    \\\n"
    "  (\\-.\\    .-\"\"        \"\"'   /          (  d _b\n"
    " (\\._  \\-\"\" ,._             (            \\-(   \\\n"
    " <_  \\     (  <<\\<            \\             \\-._\\\n"
    "  <-\\       (__<< <           :\n"
    "   (__        (_<_<          ;\n"
    "    \\------------------------------------------\n"
    "This bird stares intently at you... (Maybe it's time to change the channel?)";

    const char *bat = "Switching on camera from habitat with bats...\n"
    "_________________               _________________\n"
    " ~-.              \\  |\\___/|  /              .-~\n"
    "     ~-.           \\ / o o \\ /           .-~\n"
    "        >           \\\\  W  //           <\n"
    "       /             /~---~\\             \\\n"
    "      /_            |       |            _\\\n"
    "         ~-.        |       |        .-~\n"
    "            ;        \\     /        i\n"
    "           /___      /\\   /\\      ___\\\n"
    "                ~-. /  \\_/  \\ .-~\n"
    "                   V         V\n"
    "It looks like this bat is fine.";

    const char *rabbit = "Switching on camera from habitat with rabbits...\n"
    "         ,\n"
    "        /|      __\n"
    "       / |   ,-~ /\n"
    "      / :|  //  /\n"
    "      | jj /( .^\n"
    "      >-\"~\"-v\"\n"
    "     /       Y\n"
    "    jo  o    |\n"
    "   ( ~T~     j\n"
    "    >._-' _./\n"
    "   /   \"~\"  |\n"
    "  Y     _,  |\n"
    " /| ;-\"~ _  l\n"
    "/ l/ ,-\"~    \\\n"
    "\\/\\//      .- \\\n"
    " Y        /    Y \n"
    " l       I     !\n"
    " ]\\      _\\    /\"\\\n"
    "(\" ~----( ~   Y.  )\n"
    "It seems there will be more rabbits soon!";

    char habitat[10];
    while (1) {
        printf("Which habitat # do you need?");
        scanf("%s", habitat);

        if (strcmp(habitat, "0") == 0) {
            printf("%s\n", camel);
        } else if (strcmp(habitat, "1") == 0) {
            printf("%s\n", lion);
        } else if (strcmp(habitat, "2") == 0) {
            printf("%s\n", deer);
        } else if (strcmp(habitat, "3") == 0) {
            printf("%s\n", goose);
        } else if (strcmp(habitat, "4") == 0) {
            printf("%s\n", bat);
        } else if (strcmp(habitat, "5") == 0) {
            printf("%s\n", rabbit);
        } else if (strcmp(habitat, "list") == 0) {
            printf("0 - camel; 1 - lion; 2 - deer; 3 - goose; 4 - bat; 5 - rabbit\n");
        } else if (strcmp(habitat, "exit") == 0) {
            printf("See you!\n");
            return 0;
        } else {
            printf("Unexpected command. Commands: 0 to 5, list, exit\n");
        }
    }
    return 0;
}
