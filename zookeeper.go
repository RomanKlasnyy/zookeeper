package main

import "fmt"

func main() {
	camel := `
Switching on camera from habitat with camels...
 ___.-''''-.
/___  @    |
',,,,.     |         _.'''''''._
     '     |        /           \
     |     \    _.-'             \
     |      '.-'                  '-.
     |                               ',
     |                                '',
      ',,-,                           ':;
           ',,| ;,,                 ,' ;;
              ! ; !'',,,',',,,,'!  ;   ;:
             : ;  ! !       ! ! ;  ;   :;
             ; ;   ! !      ! !  ; ;   ;,
            ; ;    ! !     ! !   ; ;
            ; ;    ! !    ! !     ; ;
           ;,,      !,!   !,!     ;,;
           /_I      L_I   L_I     /_I
Yey, our little camel is sunbathing!`

	lion := `
Switching on camera from habitat with lions...
                                               ,w.
                                             ,YWMMw  ,M  ,
                        _.---.._   __..---._.'MMMMMw,wMWmW,
                   _.-""        '''           YP"WMMMMMMMMMb,
                .-' __.'                   .'     MMMMW^WMMMM;
    _,        .'.-'"; \,       /\     .--""      :MMM[==MWMW^;
 ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\
,MM:.    .'.-'   .'     ;     \\    ;     \,     MMMMMMMW \"=./\-,
WMMm__,-'.'     /      _.\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / \=_}
"^MP__.-'    ,-' _.--""   \-,   ;       \  ; ;MMMMMMMMMMW^\\; __|
           /   .'            ; ;         )  )\{  \ \"^W^\,   \  :
          /  .'             /  (       .'  /     Ww._     \.  \"
         /  Y,              \,  \-,=,_{   ;      MMMP\""-,  \-._.-,
        (--, )               \,_ / \)  \/"")      ^"      \-, -;"\:
The lion is croaking!`

	deer := `
Switching on camera from habitat with deers...
   /|       |\
\__\\       //__'
   ||      ||
 \__\\     |'__/
   \_\\   //_'
   _.,:---;,._
   \_:     :_/
     |@. .@|
     |     |
     ,\.-./ \
     ;;\-'   \---__________-----.-.
     ;;;                         \_\
     ';;;                         |
      ;    |                      ;
       \   \     \        |      /
        \_, \    /        \     |\
          |';|  |,,,,,,,,/ \    \ \_
          |  |  |           \   /   |
          \  \  |           |  / \  |
           | || |           | |   | |
           | || |           | |   | |
           | || |           | |   | |
           |_||_|           |_|   |_|
          /_//_/           /_/   /_/
Our 'Bambi' looks hungry. Let's go to feed it!`

	goose := `
Switching on camera from habitat with lovely goose...

                                    _
                                ,-"" "".
                              ,'  ____  \.
                            ,'  ,'    \.  \.
   (\.         _..--.._   ,'  ,'        \    \
  (\-.\    .-""        ""'   /          (  d _b
 (\._  \-"" ,._             (            \-(   \
 <_  \     (  <\<            \              \-._\
  <\-       (__< <           :
   (__        (_<_<          ;
    \------------------------------------------
This bird stares intently at you... (Maybe it's time to change the channel?)`

	bat := `
Switching on camera from habitat with bats...
_________________               _________________
 ~-.              \  |\___/|  /              .-~
     ~-.           \ / o o \ /           .-~
        >           \\  W  //           <
       /             /~---~\             \
      /_            |       |            _\
         ~-.        |       |        .-~
            ;        \     /        i
           /___      /\   /\      ___\
                ~-. /  \_/  \ .-~
                   V         V
It looks like this bat is fine.`

	rabbit := `
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
/ l/ ,-"~    \
\//\/      .- \
 Y        /    Y 
 l       I     !
 ]\      _\    /"\
(" ~----( ~   Y.  )
It seems there will be more rabbits soon!`

	for {
		var habitat string
		fmt.Print("Which habitat # do you need?")
		fmt.Scanln(&habitat)

		switch habitat {
		case "0":
			fmt.Println(camel)
		case "1":
			fmt.Println(lion)
		case "2":
			fmt.Println(deer)
		case "3":
			fmt.Println(goose)
		case "4":
			fmt.Println(bat)
		case "5":
			fmt.Println(rabbit)
		case "list":
			fmt.Println("0 - camel; 1 - lion; 2 - deer; 3 - goose; 4 - bat; 5 - rabbit")
		case "exit":
			fmt.Println("See you!")
			return
		default:
			fmt.Println("Unexpected command. Commands: 0 to 5, list, exit")
		}
	}
}
