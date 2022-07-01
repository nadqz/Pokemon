#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

// Define ASCII Arrow Key
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC 27
#define TAB 9
#define ENTER 13
#define SPACE 32

// Define function Color Set
void setcolor(unsigned short color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

//cover
void hogwarts()
{
	setcolor(6);
	cout<<"                    ::::^^^^^^~~~~~~!~^^~^^^~~^^~~^^^^^^^::::                    "<<endl;
    cout<<"             :::^^^^~!!!^..~55J?Y~!B? 5#^ ^BY.JPP?..~5PYYJ~^~~^^:::              "<<endl;
    cout<<"         :^^^^!?~.:5G!~Y#?:##:.~Y?.YG?GYG!P5.J&J5&7..PB75#!!55PYY!^~~^:          "<<endl;
    cout<<"      :~~^!5Y ^#P.!@Y  .B&^Y&J:~&J ^#P:.?&P^5&JJ?P#^.GP5@?.:.Y@7!!PPJ5?^^:       "<<endl;
    cout<<"     ^!:..:5&YJY#P^5#J!7B5:.755YJ:..!:...~:~J?:. !57!B? J#?.~#P.^~GB77J.:!:      "<<endl;
    cout<<"     :!~:...Y@7.7#5^^7?7~::^:^^^^^^^^^^^^^^^^^^^^^:^^^^:.!G!!J7^GP7P@? :~!:      "<<endl;
    cout<<"   :~~^^~^..~P?^:^^^^^^^^^:::::                  :::::^^^^~~^::::!JJ!:^~:^~^:    "<<endl;
    cout<<"  ~~:    ^~^~^^^7^::                                        ::^7^^^^^~^    :~~   "<<endl;
    cout<<" !~^^^^:   ^~^^^7^                                              ^7^^^~^   :^^^^~ "<<endl;
    cout<<"^^::::!:   ::^^^:  ^77!!!!~^:                      :^~!!!!77:  :^^^::   ^!::::^^^"<<endl;  
    cout<<"     :! :^~^^:   :77^    :^~!7~^                ^!7!~^:    ^77:   :^^~^:.!       "<<endl; 
    cout<<"     :7^~^     :7?^   :^^    :^!7!^:::    :::^!7!^::::       ^?!:     ^~^7       "<<endl; 
    cout<<"      ~:     :!7^    !B#BP^   ::^^!!!!?^~?!!!7~^75B##BY:       ~?!:    :~        "<<endl; 
    cout<<"             7J!^:   7@#^P?.?G###G7   :??:  Y###P?!~G@@?      :^!J7              "<<endl; 
    cout<<"               ^~77~  J#5#~!@&&&&@@P^  ~~ :5#PY!   ^B@&!    ~77~^                "<<endl;
    cout<<"                  :!?: ^G5 ?@&&&&#GJ:::!~:7~   ^!JP&@B7   ^?!:                   "<<endl; 
    cout<<"                    ^J:^B~ P&&&&&G!!PGPP~!: ~5B&&#GY!:   :Y^                     "<<endl; 
    cout<<"                     7!?B :B&&&&&@#55^ !~: ?&@B7~:.      7!                      "<<endl; 
    cout<<"                     77:P5P&&&@&#PPJ7!:!! ~#BG?^   ^JPGGGG~                      "<<endl; 
    cout<<"                     J~ :B@&&#Y5~:~!7J!~~77!~~ ~YY5#@@&&@&?                      "<<endl; 
    cout<<"                    ^Y :^5@@&#^~~^Y#&Y:  J##B! !&@@&&&&&P~Y:                     "<<endl; 
    cout<<"                    J~ 5BY?Y@Y :?  P@?^~~~B@Y..?^7##&&&&Y !?                     "<<endl; 
    cout<<"                   ?J^^PG5!^PB!^?: Y@BPPPP#@7 ^?::~!5#Y!~^:J!                    "<<endl; 
    cout<<"                  77:::^^^^: :::?: ?@?    P&^ :J7J5GG?:::^JP#7                   "<<endl; 
    cout<<"                ^?!  ?PB##GP5Y!~!  J@Y:  :G&~  ?7?&&&&!  5@&&&J:                 "<<endl; 
    cout<<"              ^7??: :#@&&&&BGY~7~ ^777^ :7?7!  ~5Y&&&&G??B&&&&@Y!^               "<<endl; 
    cout<<"           :!7!: 5#!.B&&&&#?^   !!^^^~~~~~^7?!7#@@&&&&&@@&&&&&@J:!7~:            "<<endl;
    cout<<"         :77~:   :B&G#&&&&&&#B57^:::   ~^  G@&&&&&&&&&&&&&&&&&&P  :~77:          "<<endl;
    cout<<"         ^J!      ^YP#&&&&&&&&@&#P7:   ~^ ^#&&&&&&&&&&&&@&&&&&&#^   !J:          "<<endl;
    cout<<"           !?~      ^#@#GGB&&&&&&&@5   ~^ :#&&&&&&&&&&&B5&&&@&&&^ ~?~            "<<endl;
    cout<<"            :7?^  ^5#GJ^  ^#&@&&&&&B:  ~^  G&&&&&&&&@&&? ^^?PB@B^?7:             "<<endl;
    cout<<"              ^?7.~?^  ?PPP&#5B&&&&#^  ~^  Y@&&B7#&BPBY       ?P7^               "<<endl;
    cout<<"                ~?~.~?77~~^~7?B@B~~7~  ~^  !&&@Y PP  ?#5?7?~:!?^                 "<<endl;
    cout<<"                  !?~..^!!~!PY?7^      ~^  ^##J  P&57JP?~.:!?!                   "<<endl;
    cout<<"                         :^~!!!^:      ~^   ~^ ^~5PJ!^:                          "<<endl;
    cout<<"                              :~!7!^   ~^   ^!7!^:                               "<<endl;
    cout<<"                                  ^?7  ~^ :77^                                   "<<endl;
    cout<<"                                    ~?^~^^?~                                     "<<endl;
    cout<<"                                     ^7??7                                       "<<endl;
	getch(); 
}

void story()
{
	setcolor(14);
	cout<<"                                   !.                                            "<<endl;
    cout<<"                                  ^&7                                            "<<endl;
    cout<<"                                  5BB.                                           "<<endl;
    cout<<"                               ^ !B.GY                                           "<<endl;
    cout<<"                              ^&JB! !&^                                          "<<endl;
    cout<<"                              ?&P?   GP                                          "<<endl;
    cout<<"                              7B~    ~&~                                         "<<endl;
    cout<<"                               BY     PG                                         "<<endl;
    cout<<"                              !#:     ^&7    !.        :7                        "<<endl;    
    cout<<"                             .BJ       5#.   J.        ~B.                       "<<endl;
    cout<<"                             J#.       :&?  .P:        J@~   :^   ^.             "<<endl;
    cout<<"                     ^~     :&7         ?#: .B^        G@?   7?   J.             "<<endl;
    cout<<"                     ?Y     !@7..:.:....!@! :&~    :: :&@P   YP  .G^             "<<endl;
    cout<<"                     PB     .&YJ~Y~5~Y~JJ#:.~@?..^:JJ ?B!#: :##. :#~             "<<endl;
    cout<<"                .7. .#&:  !J.BP^.^.^.^::!P555GP55&!GG.B? B~ PB&7 ^&7             "<<endl;
    cout<<"                7@~ ^&@^ .B&.Y@~   .. .    .  ..:#?&&7&^ PJ?#.YG !@J             "<<endl;    
    cout<<"                Y@! !@@~ .BB 5@~G5.#J~#^7#^YG:GY.#7#B55. 7@#~ :#7?@Y             "<<endl;
    cout<<"                Y@BGB&&BPG@&J5@^P5.B?~&^7&^5B:#5.B#B:    ^Y^:5^!GY@P             "<<endl;    
    cout<<"               :#J:::::^^^5@GP@^ . .. .... .: :. ^7:        :Y:!GG@P             "<<endl;    
    cout<<"             .P#P         :&&#&:                               JGGBY             "<<endl;
    cout<<"             ^@B.          7@@#:                                                 "<<endl;    
    cout<<"             ^@!  !JJ^ !BB! ~##.                            .^    .^             "<<endl;    
    cout<<"             ~@7  Y@@! ^@@~  .^     !?!?~  .         :?Y!  .GBJP^7BP^            "<<endl;    
    cout<<"            :B&^  J@@! ^@@~ .~7J7..J&~~&&: 5B^ .. YP:YP~GB: PB!G75@P~  .^:       "<<endl;    
    cout<<"           .G#^ ~.J@@! ^@@YJB&^!@5^@#. G&: P@^:#~ G#.:!.P@^ PG   J@? .???BJ      "<<endl;    
    cout<<"           :&J  7!P@@J!5@@~.B@:^@B^@B .G&: G&.^@~ B#:G#.5&: PG   J@7 :PB~77.     "<<endl;    
    cout<<"           ^@P   .P@@?.!@@~.B@:^@#:PB7!B#. G&!5#??G! J@?G&^.5P.  Y@! .^!B5:      "<<endl;    
    cout<<"         .Y#B!    P@@^ ~@@^ ^5!7G7  :^ B#. .J5~.J?.  .7~7^  ..   5@~ ~#7!#?      "<<endl;    
    cout<<"        .G&!      P@&! 7@@^   ..  .~^  BG                        !P~  ^J~.       "<<endl;    
    cout<<"        Y@7       :^^. ?PP!                                                      "<<endl;       
    setcolor(14);
	cout<<"     .!G#7	";setcolor(7);cout<<"                      ===================                           "<<endl;
	setcolor(14);                                     
    cout<<"   ~5GP7.	";setcolor(7);cout<<"                      =     PROLOGUE    =                           "<<endl;
	setcolor(14);        
    cout<<".?BG7:		";setcolor(7);cout<<"                      ===================                           "<<endl;
	setcolor(14);         
    cout<<"J@#.         ";setcolor(7);cout<<"Harry Potter adalah anak yatim piatu sekaligus keturunan penyihir.  "<<endl; 
	setcolor(14);     
    cout<<"7BP.         ";setcolor(7);cout<<"Setelah orang tuanya meninggal, Harry diasuh oleh satu-satunya kerabat"<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"yang ia miliki. Kehidupan Harry jauh dari kata menyenangkan, namun  "<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"menjelang ulang tahunnya yang ke-11, hal ajaib terjadi. Seorang     "<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"penyihir bernama Hagrid datang pada Harry dan memberitahukan bahwa  "<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"ia adalah seorang penyihir. Tak hanya itu, Hagrid juga memberitahu  "<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"arry tentang Lord Voldemort, penyihir kegelapan yang telah membunuh"<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"kedua orang tuanya. Pada akhirnya harry memutuskan untuk membunuh   "<<endl;
    setcolor(14);
    cout<<"7BP.         ";setcolor(7);cout<<"Raja penyihir kegelapan itu dengan harapan tidak ada korban lagi.   "<<endl;
    setcolor(7);
    getch();
}

void mainMenu()
{
	char select;
	do
	{
		system("cls");
		setcolor(12);
		cout<<"                                       .^^^                                     "<<endl;
    	cout<<"            :^~:             .         7@&&P?Y~                                 "<<endl;
	    cout<<"     .YPG7 ^&@B: ..  :?P?~.^YBJ?:      ^&&@?.P@Y         ~J   ^                 "<<endl;
	  	cout<<"      5@@? :&@7^B##J.~&@G@G?@#P@G:     .#&@7 5@@!     .?G@#!:PP         ^.:.    "<<endl;
 	   	cout<<"      5@@! :&@?:7:?@Y G@JPJ7@#?Y?~ !P7  5@@?.5@&^:!?5?^!#@5Y&@G7^75YY^~G&P&G.   "<<endl;
    	cout<<"   ^? 5@@7.?&@GYP~!@B P@Y  !@#~B@?:#P^ !&&&Y5&&B5&&JB@G G@Y Y@P.P@5^&&?@#!#G^   "<<endl;
 	  	cout<<"   ^Y7G@&GGG&@?B@7?@B.G@P  Y@# ~&&&J   :#&@~^~: ?@P 7@&:B@7 J@5.#@J!J?!@#^:     "<<endl;
	    cout<<"     :G@#~.:&@??@BG&5~5GY ~YY? .#@J    .G&Y:    J@G !@#^#@7 J@P:&@7 ~ ~@&^      "<<endl;
	    cout<<"      P@#. .#@J !~^^    .GP!^:!B#!      B@^     ^G#~J@P:#@! P@P 7BP!G.?@@^      "<<endl;
 	 	cout<<"     ~G#&~ 7@@?         .~7?JY5?.       5Y.       ^!!^  5&7 J@G:^7!!.^5G#Y^:    "<<endl;
 		cout<<"     ...:.^5PP5:                        !!               :^  ~JY5Y.     .::.    "<<endl;
 	   	setcolor(11);
    	cout<<"                       ===================================                      "<<endl;
    	cout<<"                       =                                 =                      "<<endl;
   		cout<<"                       =            MAIN MENU            =                      "<<endl;
    	cout<<"                       =                                 =                      "<<endl;
    	cout<<"                       ===================================                      "<<endl; 
    	cout<<"                       =       Click SPACI to Play       =                      "<<endl;
    	cout<<"                       -----------------------------------                      "<<endl;
    	cout<<"                       =         Controls (ENTER)        =                      "<<endl;
    	cout<<"                       -----------------------------------                      "<<endl;
    	cout<<"                       =            bout (TAB)           =                      "<<endl;
    	cout<<"                       -----------------------------------                      "<<endl;
    	cout<<"                       =        Click ESC to Exit        =                      "<<endl; 
    	cout<<"                       ===================================                      "<<endl;
    	select = getch();
    	switch(select)
    	{
			case SPACE:
				break;            
    		case TAB:
    			system("cls");
    			setcolor(14);
	            cout<<"                    ....:::^:^~~~!^!~:^~::^!~:^~^:^^^^^:...                     "<<endl;
                cout<<"               .:::^:^777!. !GY??J.5B J@~ !&~^G5P. ^PGJ5J:~~^^:..               "<<endl;
                cout<<"          .::^^:~5~ !#?:~#G.#&  7P^.#5P7BY#!~#BJ@P  PBJB5.JY#P57^7!^..          "<<endl;
                cout<<"        .^^.:5#:^#B.?@!  Y@^!&P!Y#. YP. ^B!!&P^~7@7.#JY&!  ~@!.~&P!G7:^.        "<<endl;
                cout<<"        ^^   :B#J~B#~JGYJP?. :!?7^..::::.::^~^..:~~~Y~ 7#7:GB.?7J#P!. ^^        "<<endl;
                cout<<"       .^~^:  ^&Y.^J!.:^^::::::...:...........::::::::::~J::::7PYGG:.^~^.       "<<endl;
                cout<<"     :^:.  ^^.:!^^~:::....                            ....:::~::^:.^^  .:^:     "<<endl;
                cout<<"    ^~....  .^~^^^7.                                        .7^^^~^.  ....~^    "<<endl;
                cout<<"   :~::::!    .:^^:  :!!~~^^.                      .^^~~!!:  :^^:.    !::::~^   "<<endl;
                cout<<"        :^ .:^::.  :!7: ..:^~!~^.              .^~!~^:.. :7!:  .::^:. ^:        "<<endl;
                cout<<"        ^~^^.    .!7:   :^.   :^!!^....  ....^!!^:::.      :7!.    .^^~^        "<<endl;
                cout<<"        .^.    .!7:   .P&#G~  .::^^~~~7~~7~~~!^!YB#&#J.      :7!.    .^.        "<<endl;
                cout<<"               ~?~^:   G@7YY Y#&&&P^   77  ~B@&G7^:P@@~     :^~?~               "<<endl;
                cout<<"                 .^~7~ :PG#^~@@@@@@@7  ^~ ~PP?~   !#@#:   ~7~^.                 "<<endl;
                cout<<"                    .~?. YP J@@@@@P7:~!?^^~  :!JP#@#Y:  .?~.                    "<<endl;
                cout<<"                      ~?.#~ P@@@@@GYBGJY~~ ^P@@BP?~.    ?~                      "<<endl;
                cout<<"                      .J:B!~&@@@@@@P7: ^~ ^&@&~    .~!!!Y                       "<<endl;
                cout<<"                      .J ^#@@@@#B7~!7?!!!^7J7~^~^^Y&@@@@#.                      "<<endl;
                cout<<"                      !7  ?@@@#^7 7PGP~ .5GP5^ G@@@@@@@PY!                      "<<endl;
                cout<<"                     .J ~G5PG@J ~^ ?@5 ..^@@! ^J?&@@@@@7 J.                     "<<endl;
                cout<<"                     J!.?&5!:BG:^7 ~@#PPPG@&: 7:.~!P&57^.~J                     "<<endl;
                cout<<"                   .?~..:^~^..::^7 :@G ...#B  77?YGG?...!YBY                    "<<endl;
                cout<<"!    .            ^7^ ^5B##BP5Y^!: ^@G.  :#B: :?!&@@@~ .#@@@P^            .    !"<<endl; 
                cout<<"7~. .7:        .^!7?. ?@@@@@G5?:7. ~!!^.:!7!: .55&@@@BJ5@@@@@P!^.        :7. .~7"<<endl;
                cout<<"!:~^^:~      :!7^. G#~7@@@@&Y~.  ~^^^^^~~:^JY?B@@@@@@@@@@@@@@P ^7!:      ~:^:~:!"<<endl;
                cout<<"~:.: .~     ?7:    :#@&@@@@@@@&BY~.    ^^ :@@@@@@@@@@@@@@@@@@&:  :7?     ~:.^.:~"<<endl;
                cout<<".~    ~:    ^7~     .~5@@@@@@@@@@@#?   ^^ ~@@@@@@@@@@@@@@@@@@@~  ~7^    :!!?7!~."<<endl;
                cout<<" ^^    ^^.    ~7^    !B@P77?&@@@@@@@~  ^^ ^@@@@@@@@@@@Y!PP@@@@^:7~    .^!J77?~^ "<<endl;
                cout<<"  ^^.  :7!^:.  .!7. ?G?::7!7@@&@@@@@!  ^^ .#@@@B#@@@@P.   ^~5#?!.  .:^^?J7?^~:  "<<endl;
                cout<<"   .^:7?~5?!:^:. :7!. ^!!?JJYJ!&@BJP?  ^^  5@@@^?&~:YP!~!^  ~?: .:^^^^?7?!7^.   "<<endl;
                cout<<"     .^^!JY!~7.^^. ^77~.~!~::5PP5:     ^^  7@&7 7@7^J&5~.~77^ .:^^^ 7Y!7~^.     "<<endl;   
                cout<<"       .^^7~YJ~:!^^::.    :^!7~^.      ^^  .?: .J#P?^.    ..:~!77:!7!7~^.       "<<endl;   
                cout<<"          :^~7!7!~J.:^^.      .^~!!^   ^^   :!!~:.      .:^!?77~?J7!^.          "<<endl;   
                cout<<"            .:^!~^.   .^^         .~7: ^^ :7~.         ^^!?!7!~!^^:.            "<<endl;   
                cout<<"               .^~:.   .~           :?~^^~?:           ~::.!~~!^.               "<<endl;   
                cout<<"              .!~^^~77!~^:.           ~!!~           .:^~!~^~^^~!.              "<<endl;   
                cout<<"               :^:.~J7Y^J7~^^::...            ....:^~^!:7JY!:.:^:               "<<endl;   
                cout<<"                 .:~^~7~55~777.~~^^:::::::::^^:^^!?!!~J?!!::^:.                 "<<endl;   
                cout<<"                    .::^^~~!7J^JY!77!!~^!~7^!7??Y~J7!7~^^^:.                    "<<endl;   
                cout<<"                       ..::::^~!7~!~?7?^?7!7!7!^~~~^^::..                       "<<endl;   
                cout<<"                            ..:::^^:^^::^:::^^^:::..                            "<<endl;   
                cout<<"                                                                                "<<endl;   
                cout<<"                                                                                "<<endl;   
                cout<<"                                                                                "<<endl;
	            setcolor(11);   
                cout<<"                               ==================                               "<<endl;   
                cout<<"                               =   CREATED BY   =                               "<<endl;   
                cout<<"                               ==================                               "<<endl;   
                cout<<"                                                                                "<<endl;    
                cout<<"                              NADA FADHIILAH BALQIS                             "<<endl;   
                cout<<"                                    IG : _nadqz                                 "<<endl;   
                cout<<"                                                                                "<<endl;
                cout<<"                                                                                "<<endl;  
                cout<<"                               ===================                              "<<endl;     
                cout<<"                               =   DESIGNED BY   =                              "<<endl;     
                cout<<"                               ===================                              "<<endl;     
                cout<<"                                                                                "<<endl;   
                cout<<"                              NADA FADHIILAH BALQIS                             "<<endl;    
                cout<<"                                   IG : _nadqz                                  "<<endl;       
                cout<<"                                                                                "<<endl;      
                cout<<"                                                                                "<<endl;       
                cout<<"                                                                                "<<endl;    
                cout<<"                               COPYRIGHT RESERVED                               "<<endl;   
                cout<<"                                                                                "<<endl;    
                cout<<"                         FINAL PROJECT FOR 2ND SEMESTER                         "<<endl;    
                cout<<"                                                                                "<<endl; 
                cout<<"                                                                                "<<endl;   
                cout<<"                                                                                "<<endl;     
                cout<<"                                    GRADE C                                     "<<endl;   
                cout<<"                                                                                "<<endl;    
                cout<<"                              TEKNIK INFORMATIKA                                "<<endl;       
                cout<<"                                                                                "<<endl;  
                cout<<"                            SCHOOL YEAR 2021/2022                               "<<endl; 
                cout<<"                                                                                "<<endl;       
                cout<<"               UNIVERSITY OF ISLAMIC SUNAN GUNUNG DJATI BANDUNG                 "<<endl;        
                cout<<"                                                                                "<<endl;    
                cout<<"                                                                                "<<endl;        
                cout<<"                                                                                "<<endl;        
                cout<<"                       ===============================                          "<<endl;   
                cout<<"                                                                                "<<endl;    
                cout<<"                                                                                "<<endl;       
                cout<<"                                                                                "<<endl; 
	            setcolor(12);  
                cout<<"                                            &Y?!!!!!!!7?P&                      "<<endl;                     
                cout<<"                                            ?:BBBBBBBBBG :!!7?75&               "<<endl;             
                cout<<"                               PJ!!!!!!!!?Y&! B&&&&&&&&#Y5PG##G!:J&             "<<endl;           
                cout<<"             &5?!!!!!!!!7Y#  #:?########5 GP Y&########?~^:7&&&G!:Y&            "<<endl; 
                cout<<"              G^JBBBBBBB#B~!   ~:#&####&G ! &:!&######&B :P^.B&#&&P~^P          "<<endl; 
                cout<<"               ? 5&&####&P Y   ? G&####&5 5  !.B&#####&B.! Y P&###&&5.Y         "<<endl; 
                cout<<"               G Y&#####&P 5   Y P&####&5 5  5 5&#####&B.! G J&#####&!^         "<<endl; 
                cout<<"               G J&#####&P 5   P 5&####&5 5  #.7&#####&B.! #.7&######^^         "<<endl; 
                cout<<"               B ?&#####&P 5   P Y&####&5 5   !:######&B.! &:~&####&B.7         "<<endl; 
                cout<<"               #.7&#####&P 5   G Y&####&P ?   ? P&####&B.7  ^~&####&P 5         "<<endl; 
                cout<<"               &:!&#####&G J   B J&####&G..~7!: J&####&B.^&&:~&####&J B         "<<endl;  
                cout<<"         P?7?YG#.~######&G ?   J J&######GPYYPBPP&####&B~7~: ~&###&&!:&         "<<endl;  
                cout<<"        Y~G57^^P.^######&B.:Y?~^?B&####&B:.^.:#&&#######^7GJ7B&&&#G?:5          "<<endl; 
                cout<<"         G:?GY!:. :########~:!YG&&&#####&G ? 5 Y&#######&! :5GPY?!~!Y#          "<<endl; 
                cout<<"         #7^JPGGYY#########&&BGY!Y&####&G J &:~&#######&7 ?YJJYPB&              "<<endl; 
                cout<<"          #57~~?5########J~~~!~ 7&####&G J  ? B&#####&&Y G                      "<<endl;
                cout<<"               B: B&######^.B  &:~&####&G J  5 Y&#####Y#P P                     "<<endl; 
                cout<<"                7 B&######^^    ^^#####&G J #!:!&#####:!5^#                     "<<endl; 
                cout<<"                7 B&######^^    ^^#####&G J J:BG######^ 5&                      "<<endl; 
                cout<<"                7 B&######^^   &:~&####&G J 5 5&######:^                        "<<endl; 
                cout<<"               &^:#######&~^   &.7&####&G J &:!&######:~                        "<<endl; 
                cout<<"              B~:5&&&&&&&&!.B  G J&####&G J  ? G&##&&#:~                        "<<endl; 
                cout<<"              775PPPPPPPGG5^? #~.G&####&#:^  B ?&#&J5&:!                        "<<endl; 
                cout<<"              &PJ??????777?Y#G:!G&&&&&&&&P.!  ^^##&! J!B                        "<<endl; 
                cout<<"                             B??77!!777??JJ!# Y P&#^.G                          "<<endl;  
                cout<<"                               &###BBBGGGGB&  #.7&B.7                           "<<endl; 
                cout<<"                                               7.#G J                           "<<endl; 
                cout<<"                                               G 55 G                           "<<endl; 
                cout<<"                                                J7??                            "<<endl; 
                cout<<"                                                 &&                             "<<endl;
				getch();        
    			break;
    			
    		case ENTER:
    			system("cls");
    			setcolor(12);
	            cout<<"                                           PYJJJJYYB#B&                         "<<endl;                                                                                 
                cout<<"                                 &G5YYY5P#^G#####J7YPJ?B                        "<<endl;                                                                                 
                cout<<"                      BJJJJJJYP G~BBBBB~P7J&###&J~^5&G??#                       "<<endl;                                                                                 
                cout<<"                      B^G&#&&?7 &:B&&&G: P~&###&!Y5!&&&G!P                      "<<endl;                                                                             
                cout<<"                       ~5&##&7Y  ^P&#&P^ &:B&##&!5B^###&Y!                      "<<endl;                                                                                 
                cout<<"                       !Y&##&7J  ^P&#&P^  !Y&##&!5#^###&?J                      "<<endl;                                                                                 
                cout<<"                       7J&##&?J  ~5&#&G:YP^!&##&!Y&:B&#&~P                      "<<endl;                                                                                 
                cout<<"                  &5YJG7?&##&J7 G:P&###J77PP###&?7~^#&&B^#                      "<<endl;                                                                             
                cout<<"                  B!57^:7&##&5^?YG###&B:P^5&###&J:YPPYJJG                       "<<endl;                                                                                 
                cout<<"                   BJJJJP&####P5Y~5&#&G^ 5!&###&Y^GPGB&                         "<<endl;                                                                                 
                cout<<"                     &B!7&##&P:G&7J&#&G^ B.B&##PP~                              "<<endl;                                                                                 
                cout<<"                       5~&##&5~  J?&#&B^&?7G&##^7P                              "<<endl;                                                                             
                cout<<"                       5~&##&5~  ??&#&B^&!5&###^G                               "<<endl;                                                                             
                cout<<"                      B~Y&&&&P:& !Y&#&G: P~&#&&^G                               "<<endl;                                                                                 
                cout<<"                      Y?YYYYYY!G5~#&&&#^P ^G&Y5~B                               "<<endl;                                                                                 
                cout<<"                       &######&&?YYYYY5J7 ??&!!#                                "<<endl;                                                                             
                cout<<"                                 &&&####& B^#^G                                 "<<endl;                                                                             
                cout<<"                                           ~Y^&                                 "<<endl;                                                                             
                cout<<"                                           #PG                                  "<<endl;
	            setcolor(15);                                                                             
                cout<<"                            =======================                             "<<endl;                                                                 
                cout<<"                            =   MENU CONTROLLER   =                             "<<endl;                                                                 
                cout<<"                            =======================                             "<<endl;                                                                 
                cout<<"                                 SPACI - Play                                   "<<endl;                                                             
                cout<<"                                  F1   - Controls                               "<<endl;                                                                 
                cout<<"                                  F2   - About                                  "<<endl;                                                             
                cout<<"                                  ESC  - Exit                                   "<<endl;                                                             
                cout<<"                                                                                "<<endl;                             
                cout<<"                                                                                "<<endl;                             
                cout<<"                                                                                "<<endl;                             
                cout<<"                            =======================                             "<<endl;                                                                 
                cout<<"                            =   GAME CONTROLLER   =                             "<<endl;                                                                 
                cout<<"                            =======================                             "<<endl;                                                                 
                cout<<"                     Key Up, Key Down, Key Left, key Right                      "<<endl;                                                                         
                cout<<"                                                                                "<<endl;                             
                cout<<"                                                                                "<<endl;                             
                cout<<"                                                                                "<<endl;                             
                cout<<"                            ========================                            "<<endl;                                                                 
                cout<<"                            =   OTHER CONTROLLER   =                            "<<endl;                                                                 
                cout<<"                            ========================                            "<<endl;                                                                 
                cout<<"                                Q       - Attack                                "<<endl;                                                             
                cout<<"                                1       - Fight                                 "<<endl;                                                             
                cout<<"                                2       - Run                                   "<<endl;                                                             
                cout<<"                               ESC      - Exit                                  "<<endl;                                                             
                cout<<"                             ESC (1)    - Quit                                  "<<endl;                                                             
                cout<<"                             ESC (2)    - Back To Game                          "<<endl;
                getch();
    			break;
    			
    		case ESC:
    			system("cls");
    			char choice;
    			cout << "Are you sure want to exit?" << endl;
    			cout << "1. Yes \n2. No\n";
    			choice = getch();

    			if (choice == '1')
				{
					exit(0);
				} 
				else if (choice == '2') 
				{
					system("cls");
				}
				else
				{
					//nothing to do
				};
		}
		system("cls");
	} while(select != SPACE);
}

// Define function to Move the Player
void playerMovement(int key);

// Define Function of coloring and symbolic
void displayMap();

// Define function Color Set
void setcolor(unsigned short color);

const int panjangPeta = 20;
const int lebarPeta = 20;
int playerX = 7;
int playerY = 7;
int arrowKey = ' ';


// Define Map
int peta[lebarPeta][panjangPeta] = {
		{9 , 9 , 9 , 9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 7 },
		{9 , 9 , 9 , 9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 },
		{9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 7 },
		{9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 7 },
		{1 , 9 , 9 , 9 , 9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
		{1 , 1 , 9 , 9 , 9 , 9 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 9 , 1 , 1 , 1 },
		{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 7 , 7 , 9 , 1 , 1 , 1 },
		{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 7 , 7 , 7 , 9 , 1 , 1 , 1 },
		{1 , 1 , 1 , 8 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 7 , 9 , 8 , 6 , 8 },
		{1 , 1 , 8 , 1 , 9 , 1 , 1 , 1 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 9 , 1 , 1 , 1 },
		{1 , 8 , 1 , 1 , 9 , 1 , 1 , 1 , 1 , 1 , 7 , 7 , 7 , 7 , 7 , 7 , 9 , 1 , 1 , 1 },
		{8 , 1 , 4 , 1 , 1 , 1 , 1 , 1 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 1 , 1 , 1 },
		{1 , 8 , 1 , 1 , 9 , 1 , 1 , 1 , 1 , 1 , 9 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
		{1 , 1 , 8 , 1 , 9 , 1 , 1 , 1 , 1 , 1 , 8 , 1 , 1 , 6 , 1 , 1 , 1 , 2 , 2 , 1 },
		{1 , 1 , 1 , 8 , 1 , 1 , 1 , 1 , 1 , 1 , 8 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 1 },
		{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 1 },
		{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 },
		{1 , 1 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 8 , 1 , 1 , 1 , 1 , 1 , 8 , 8 , 8 , 8 },
		{1 , 1 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 8 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 5 , 1 },
		{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 9 , 1 , 1 , 1 , 1 , 1 , 8 , 1 , 1 , 1 },
};

// Define Player Structure
struct Hero
{
	string name;
	int hp;
	int atk;
	int def;

	void baseAtkPlayer(int *Pokemon_hp, int *Pokemon_def)
	{
		*Pokemon_hp = *Pokemon_hp - (atk - *Pokemon_def);
	}
};

// Define Pokemon Structure
struct Pokemon
{
	string name;
	int hp;
	int atk;
	int def;

	void baseAtkPokemon(int *player_hp, int *player_def)
	{
		*player_hp = *player_hp - (atk - *player_def);
	}
};


//Define function to Move the Player
void playerMovement(int key)
{
  	if (key == KEY_UP
  	&& peta[playerY - 1][playerX] < 7)
	{
	  playerY -= 1;
	  playerY < 0 ? playerY =
	    0 : playerY;
	}
      else if (key == KEY_DOWN
		&& peta[playerY + 1][playerX] < 7)
	{
	  playerY += 1;
	  playerY > 19 ? playerY =
	    19 : playerY;
	}
      else if (key == KEY_LEFT
	       && peta[playerY][playerX - 1] < 7)
	{
	  playerX -= 1;
	  playerX < 0 ? playerX =
	    0 : playerX;
	}
      else if (key == KEY_RIGHT
	       && peta[playerY][playerX + 1] < 7)
	{
	  playerX += 1;
	  playerX > 19 ? playerX =
	    19 : playerX;
	}
	  else if (key == ESC)
    {  
    	system("cls");
    	char	 choice;
    	cout << "Are you sure want to exit?" << endl;
    	cout << "1. Yes \n2. No\n";
    	choice = getch();

    	if (choice == '1') {
			exit(0);
		} else if (choice == '2') {
			system("cls");
		}
    };     
}

// Define Function of coloring and symbolic
void displayMap()
{
	int koordinat = peta[playerY][playerX];
	setcolor(7);
	cout << "      ===========================\n";
	cout << "      =   Welcome to Hogwarts   =\n";
	cout << "      ===========================\n";
	
	for (int i = 0; i < lebarPeta; i++)
	{
	  for (int j = 0; j < panjangPeta; j++)
	    {
	      	if (playerX == j && playerY == i
		  	&& koordinat < 7)
			{
		  		setcolor (13);		//pink
		  		cout << "& ";		//Player
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 1)
			{
		  		setcolor (14);		//Yellow
		  		cout << "_ ";		//Rumput pendek
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 2)
			{
		  		setcolor (9);		//Blue
		  		cout << "@ ";		//Genangan air
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 3)
			{
		  		setcolor (13);		//pink
		  		cout << "& ";		//Harry Potter
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 4)
			{
		  		setcolor (4);		//Maroon
		  		cout << "M ";		//Acromantula
		  		setcolor (7);
			}
	      		else if (peta[i][j] == 5)
			{
		  		setcolor (12);		//Red
		  		cout << "Z ";		//Basilisk
		  		setcolor (7);
			}
		  		else if (peta[i][j] == 6)
			{
		  		setcolor (11);		//cyan
		  		cout << "G ";		//Dementors
		 		 setcolor (7);
			}
		  		else if (peta[i][j] == 7)
			{
		  		setcolor (2);		//Green
		  		cout << "^ ";		//Pohon
		 		setcolor (7);
			}	
	      		else if (peta[i][j] == 8)
			{
		  		setcolor (8);		//Grey
		  		cout << "o ";		//Batu
		  		setcolor (7);
			}
	     		else if (peta[i][j] == 9)
			{
		  		setcolor (10);		//Light Green
		  		cout << "# ";		//Semak
		  		setcolor (7);
			}
	     		else
	     	{
		  // nothing to do
		}
	    }
	  cout << "\n";
	};
}

int main()
{	
    //Function Cover
    system("cls");
	hogwarts();
	
	//Function Main Menu
	system("cls");
	mainMenu();
	getch();
	
	//Function Prologue
	system("cls");
	story();
	
	while(true)
	{
		//Function Move Player
		system("cls");
		playerMovement(arrowKey);
		
		// Tampilan Peta
		displayMap();
		
		// Input Keyboard
		cout << "        CLick Arrow Key to Play\n";
		cout << "        -----------------------\n";
		cout << "            Click ESC to exit  \n";
		
		arrowKey = getch();
		
		//Clear Screen
		system("cls");

		// Hero Object
		Hero player;
		player.name = "Harry Potter";
		player.hp = 500;
		player.atk = 50;
		player.def = 10;

		// find pokemon
		if (peta[playerY][playerX] == 4)
		{
			// Pokemon Object
			Pokemon pokemon1;
			pokemon1.name = "Acromantula";
			pokemon1.hp = 300;
			pokemon1.atk = 25;
			pokemon1.def = 15;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				setcolor(4);
				cout<<"     ..:.  ~?!.  :..                                        "<<endl;     
                cout<<"     !JYG~Y@@@P^GYJ7     ==================================="<<endl;
                cout<<"  .:^JYYYB#@@@#B5YYY~:.  =   Halo Harru! Senang berjumpa   ="<<endl;
                cout<<"  ^7YPYPB&@@@@@&BG5557~  =   denganmu. Sudah kau habisi    ="<<endl;
                cout<<"   ^G!^B@@@@@@@@@&!^G!   =     semua anak buah Tuanku?     ="<<endl;
                cout<<"  !P:.GY?&7Y55!#YJB^.P7  ==================================="<<endl;
                cout<<".75: B? .#:    #~ !#: YJ.                                   "<<endl; 
                cout<<".^  5Y   7~   :J   7G: ^:                                   "<<endl; 
                cout<<"  :PJ               7G~                                     "<<endl;     
                cout<<"  ~~                 ^!                                     "<<endl;
                setcolor(7);
				cout << "You found " << pokemon1.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon1.name << ": " << pokemon1.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon1.hp, &pokemon1.def);
					pokemon1.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon1.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon1.name << endl;
					setcolor(7);
					
					setcolor(12);
					cout << pokemon1.name << " Is Obliterating" << endl;
					setcolor(7);
					
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		if (peta[playerY][playerX] == 5)
		{
			// Pokemon Object
			Pokemon pokemon2;
			pokemon2.name = "Basilisk";
			pokemon2.hp = 200;
			pokemon2.atk = 25;
			pokemon2.def = 10;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				setcolor(2);
				cout<<"                                         ?!         "<<endl;               
				cout<<"                                       ^!BG7~!      "<<endl;           
				cout<<"==================================    ~#@@@@@Y:.    "<<endl;
				cout<<"=Kemarilah Harry.. Sepertinya kau=    ?@@@@@@@&J:   "<<endl;           
				cout<<"=  makanan lezat pemberian dari  =  7@@&&#YB@@@P:   "<<endl;           
				cout<<"=         Tuan Kegelapan         = :YJ:.. ~@@@@Y    "<<endl;
				cout<<"==================================        ^@@@@5.   "<<endl;           
				cout<<"                               .:         :B@@@#~   "<<endl;           
				cout<<"                           .^?Y##^       ?&@@@B~    "<<endl;
				cout<<"                            J&@@@J.    !B@@@@J:     "<<endl;           
				cout<<"                            .Y@5J!.  ^P@@@@&!       "<<endl;           
				cout<<"                            ^&G     ?&@@@&Y.        "<<endl;            
				cout<<"                             P#~. .G@@@@@PYPBBBPY!. "<<endl;           
				cout<<"                              !5P5B@@@@@&BGPPGB@@@#^"<<endl;
				cout<<"                                 :B@@@@@&Y?7?YG@@@@^"<<endl;       
				cout<<"                                  :G&@@@@@@@@@@&BY^ "<<endl;
				cout<<"                                    J5B&&@@&#PYJ7~  "<<endl; 
				setcolor(7);
				cout << "You found " << pokemon2.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon2.name << ": " << pokemon2.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon2.hp, &pokemon2.def);
					pokemon2.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon2.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon2.name << endl;
					setcolor(7);
						
					setcolor(12);
					cout << pokemon2.name << " Is Obliterating" << endl;
					setcolor(7);
					
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		if (peta[playerY][playerX] == 6)
		{
			// Pokemon Object
			Pokemon pokemon3;
			pokemon3.name = "Dementors";
			pokemon3.hp = 100;
			pokemon3.atk = 25;
			pokemon3.def = 5;

			while (true)
			{
				system("cls");

				char input_battle = ' ';
				setcolor(8);
				cout<<"                             ..                      "<<endl;              
                cout<<"                            ~PG?                     "<<endl;         
                cout<<"                          .:?&@#7?~                  "<<endl;        
                cout<<"                         :5#&#&@@@#5^                "<<endl;      
                cout<<"                      .~JG#&@&@@@@@&#P7~^^~77:       "<<endl;      
                cout<<"                  .^7YG######&&&@@@@@&##BB&@@7       "<<endl;       
                cout<<"               .:!5G&&&@&&##B###@@@@GPP#&@@P7?.      "<<endl;      
                cout<<"               .7!^.^5#G5J?5#&###&@@J  ^#&GJYY7.     "<<endl;       
                cout<<"                     ~7P7.: ^5B#&#&@@G7.Y5Y^^J7Y^.   "<<endl;       
                cout<<"                      ~GJ!!7:..~?B&&&@@G75JJ~?J.^.   "<<endl;       
                cout<<"                       ^7~^~^:   :G&&&&&##BP5?Y:     "<<endl;      
                cout<<"===============================   :P&######&G5?!:    "<<endl;      
                cout<<"=Harry Potter.. satu - satunya=    :?5BPB#B#BPPPJJJ7:"<<endl;       
                cout<<"=    anak yang kami tunggu    =     .^~?75Y?JJJ??~   "<<endl;      
                cout<<"=   kelahirannya. Apa kabar?  =       :!^~7?7~~^~:   "<<endl;     
                cout<<"=            Harry.           =                      "<<endl;       
                cout<<"===============================                      "<<endl;
				setcolor(7);
				cout << "You found " << pokemon3.name << " Harrry!!" << endl;
				cout << player.name << ": " << player.hp << endl;
				cout << pokemon3.name << ": " << pokemon3.hp << endl;
				cout << "Click the Q button to attack!" << endl;
				input_battle = getch();

				if (input_battle == 'q' || input_battle == 'Q')
				{
					player.baseAtkPlayer(&pokemon3.hp, &pokemon3.def);
					pokemon3.baseAtkPokemon(&player.hp, &player.def);
				}

				if (pokemon3.hp <= 0)
				{
					peta[playerY][playerX] = 1;
					setcolor(11);
					cout << "Harry has slain " << pokemon3.name << endl;
					setcolor(7);
					
					setcolor(12);
					cout << pokemon3.name << " Is Obliterating" << endl;
					setcolor(7);
					
					Sleep(4000);
					system("cls");
					break;
				}
			}
		}
		else if (peta[playerY][playerX] == 2)
		{
			int chance;
			srand(time(NULL));
			chance = rand() % 10;

			if (chance < 3)
			{
				while(true)
				{
					system("cls");
					int choice;
					cout << "You Found Enemy, Harry!"<<endl;
	      			cout << "1. Fight\n2. Run" << endl;
	      			cout << "What will you do?";
					choice = getch();
				
	      			if (choice == '1')
					{
	      				//Pokemon Object
						Pokemon pokemon4;
						pokemon4.name = "Bowtruckle";
						pokemon4.hp = 100;
						pokemon4.atk = 25;
						pokemon4.def = 5;
						
						while(true)
						{	
							system("cls");
							char input_battle = ' ';
							setcolor(3);
							cout<<"                        ^Y7.^!??~:    "<<endl;                         
                            cout<<"                         7#Y~!?G#P:   "<<endl;                 
                            cout<<"=====================   ^G#J   Y#B^   "<<endl;                 
                            cout<<"=   Mengapa tidak   =   ?BJ:   7BP    "<<endl;                
                            cout<<"=  melarikan diri?  =   :GG:     ^~:  "<<endl;                    
                            cout<<"= Tuan Harry Potter.=   :BB7:         "<<endl;                
                            cout<<"=====================:~?BBPPY!:       "<<endl;              
                            cout<<"                   :7PGB#Y.^755J~     "<<endl;                   
                            cout<<"                  !GP! Y#7    ^7557:  "<<endl;                
                            cout<<"                 Y#Y   5#^      :BB^  "<<endl;                   
                            cout<<"                 Y#J  ^BG:     :PG^   "<<endl;                
                            cout<<"                  ~5Y~Y#J     ~GP:    "<<endl;                 
                            cout<<"                 :~5###7    ^B#!      "<<endl;                 
                            cout<<"                 7GBB?~YBPJ!~^PPJ7^   "<<endl;                 
                            cout<<"                !B!GP   !G#Y?YPJJ:!^  "<<endl;            
                            cout<<"               :G! YG:   :?GJ:^5G7^:  "<<endl;                
                            cout<<"               YY  ~B~     :?P~ !PJ7~ "<<endl;                   
                            cout<<"              ~P:  :B7       !G^!~~?7!"<<endl;
							setcolor(7);
							cout << "You found " << pokemon4.name << " Harrry!!" << endl;
							cout << player.name << ": " << player.hp << endl;
							cout << pokemon4.name << ": " << pokemon4.hp << endl;
							cout << "Click the Q button to attack!" << endl;
							input_battle = getch();
							
							if (input_battle == 'q' || input_battle == 'Q')
							{
								player.baseAtkPlayer(&pokemon4.hp, &pokemon4.def);
								pokemon4.baseAtkPokemon(&player.hp, &player.def);
							}
							if (pokemon4.hp <= 0)
							{
								setcolor(11);
								cout << "Harry has slain " << pokemon4.name << endl;
								setcolor(7);
								
								setcolor(12);
								cout << pokemon4.name << " Is Obliterating" << endl;
								setcolor(7);
								
								Sleep(4000);
								system("cls");
								break;
							}
						}
						break;
					}
					else if (choice == '2')
					{
						system("cls");
						break;
					}
				
				}
			}
		}
	};
	getch();
	return 0;
}