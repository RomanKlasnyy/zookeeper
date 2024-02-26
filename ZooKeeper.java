import java.util.Scanner;

public class ZooKeeper {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String camel = """
            Switching on camera from habitat with camels...
                 ___.-''''-.
                /___  @    |
                ',,,,.     |         _.'''''''._
                     '     |        /           \\
                     |     \\    _.-'             \\
                     |      '.-'                  '-.
                     |                               ',
                     |                                '',
                      ',,-,                           ':;
                           ',,| ;,,                 ,' ;;
                              ! ; !'',,,',',,,,'!  ;   ;:
                             : ;  ! !       ! ! ;  ;   :;
                             ; ;   ! !      ! !  ; ;   ;,
                            ; ;    ! !     ! !   ; ;    \s
                            ; ;    ! !    ! !     ; ;
                           ;,,      !,!   !,!     ;,;
                           /_I      L_I   L_I     /_I
            Yey, our little camel is sunbathing!""";

        String lion = """
            Switching on camera from habitat with lions...
                                                               ,w.
                                                             ,YWMMw  ,M  ,
                                        _.---.._   __..---._.'MMMMMw,wMWmW,
                                   _.-""        '''           YP"WMMMMMMMMMb,
                                .-' __.'                   .'     MMMMW^WMMMM;
                    _,        .'.-'"; `,       /`     .--""      :MMM[==MWMW^;
                 ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\\
                ,MM:.    .'.-'   .'     ;     `\\    ;     `,     MMMMMMMW `"=./`-,
                WMMm__,-'.'     /      _.\\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / `=_}
                "^MP__.-'    ,-' _.--""   `-,   ;       \\  ; ;MMMMMMMMMMW^``; __|
                           /   .'            ; ;         )  )`{  \\ `"^W^`,   \\  :
                          /  .'             /  (       .'  /     Ww._     `.  `"
                         /  Y,              `,  `-,=,_{   ;      MMMP`""-,  `-._.-,
                        (--, )                `,_ / `) \\/"")      ^"      `-, -;"\\:
            The lion is croaking!""";

        String deer = """
            Switching on camera from habitat with deer...
                   /|       |\\
                `__\\\\       //__'
                   ||      ||
                 \\__`\\     |'__/
                   `_\\\\   //_'
                   _.,:---;,._
                   \\_:     :_/
                     |@. .@|
                     |     |
                     ,\\.-./ \\
                     ;;`-'   `---__________-----.-.
                     ;;;                         \\_\\
                     ';;;                         |
                      ;    |                      ;
                       \\   \\     \\        |      /
                        \\_, \\    /        \\     |\\
                          |';|  |,,,,,,,,/ \\    \\ \\_
                          |  |  |           \\   /   |
                          \\  \\  |           |  / \\  |
                           | || |           | |   | |
                           | || |           | |   | |
                           | || |           | |   | |
                           |_||_|           |_|   |_|
                          /_//_/           /_/   /_/
            Our 'Bambi' looks hungry. Let's go to feed it!""";

        String goose = """
            Switching on camera from habitat with lovely geese...

                                                   _
                                               ,-"" "".
                                             ,'  ____  `.
                                           ,'  ,'    `.  `._
                  (`.         _..--.._   ,'  ,'        \\    \\
                 (`-.\\    .-""        ""'   /          (  d _b
                (`._  `-"" ,._             (            `-(   \\
                <_  `     (  <`<            \\              `-._\\
                 <`-       (__< <           :
                  (__        (_<_<          ;
                   `------------------------------------------
                This bird stares intently at you... (Maybe it's time to change the channel?)""";

        String bat = """
            Switching on camera from habitat with bats...
                _________________               _________________
                 ~-.              \\  |\\___/|  /              .-~
                     ~-.           \\ / o o \\ /           .-~
                        >           \\\\  W  //           <
                       /             /~---~\\             \\
                      /_            |       |            _\\
                         ~-.        |       |        .-~
                            ;        \\     /        i
                           /___      /\\   /\\      ___\\
                                ~-. /  \\_/  \\ .-~
                                   V         V
            It looks like this bat is fine.""";

        String rabbit = """
            Switching on camera from habitat with rabbits...
                         ,
                        /|      __
                       / |   ,-~ /
                      Y :|  //  /
                      | jj /( .^
                      >-"~"-v"
                     /       Y
                    jo  o    |
                   ( ~T~     j
                    >._-' _./
                   /   "~"  |
                  Y     _,  |
                 /| ;-"~ _  l
                / l/ ,-"~    \\
                \\//\\/      .- \\
                 Y        /    Y\s
                 l       I     !
                 ]\\      _\\    /"\\
                (" ~----( ~   Y.  )
                It seems there will be more rabbits soon!""";

        while (true) {
            System.out.print("Which habitat # do you need?");
            String habitat = scanner.nextLine();

            switch (habitat) {
                case "0" -> System.out.println(camel);
                case "1" -> System.out.println(lion);
                case "2" -> System.out.println(deer);
                case "3" -> System.out.println(goose);
                case "4" -> System.out.println(bat);
                case "5" -> System.out.println(rabbit);
                case "list" -> System.out.println("0 - camel; 1 - lion; 2 - deer; 3 - goose; 4 - bat; 5 - rabbit");
                case "exit" -> {
                    System.out.println("See you!");
                    scanner.close();
                    return;
                }
                default -> System.out.println("Unexpected command. Commands: 0 to 5, list, exit");
            }
        }
    }
}
